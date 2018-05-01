//
//  VGMInterface.m
//  VGMStream
//
//  Created by Christopher Snowhill on 9/1/17.
//  Copyright 2017 __LoSnoCo__. All rights reserved.
//

#import "VGMInterface.h"

#import "Plugin.h"

static void cogsf_seek(COGSTREAMFILE *this, off_t offset) {
    NSObject* _file = (__bridge NSObject *)(this->file);
    id<CogSource> __unsafe_unretained file = (id) _file;
    if ([file seek:offset whence:SEEK_SET] != 0)
        this->offset = offset;
    else
        this->offset = [file tell];
}

static off_t cogsf_get_size(COGSTREAMFILE *this) {
    NSObject* _file = (__bridge NSObject *)(this->file);
    id<CogSource> __unsafe_unretained file = (id) _file;
    off_t offset = [file tell];
    [file seek:0 whence:SEEK_END];
    off_t size = [file tell];
    [file seek:offset whence:SEEK_SET];
    return size;
}

static off_t cogsf_get_offset(COGSTREAMFILE *this) {
    return this->offset;
}

static void cogsf_get_name(COGSTREAMFILE *this, char *buffer, size_t length) {
    strncpy(buffer, this->name, length);
    buffer[length-1]='\0';
}

static size_t cogsf_read(COGSTREAMFILE *this, uint8_t *dest, off_t offset, size_t length) {
    NSObject* _file = (__bridge NSObject *)(this->file);
    id<CogSource> __unsafe_unretained file = (id) _file;
    size_t read;
    if (this->offset != offset)
        cogsf_seek(this, offset);
    read = [file read:dest amount:length];
    if (read > 0)
        this->offset += read;
    return read;
}

static void cogsf_close(COGSTREAMFILE *this) {
    CFBridgingRelease(this->file);
    free(this);
}

static STREAMFILE *cogsf_create_from_path(const char *path);
static STREAMFILE *cogsf_open(COGSTREAMFILE *this, const char *const filename,size_t buffersize) {
    if (!filename) return NULL;
    return cogsf_create_from_path(filename);
}

static STREAMFILE *cogsf_create(id file, const char *path) {
    COGSTREAMFILE *streamfile = malloc(sizeof(COGSTREAMFILE));
    
    if (!streamfile) return NULL;
    
    memset(streamfile,0,sizeof(COGSTREAMFILE));
    streamfile->sf.read = (void*)cogsf_read;
    streamfile->sf.get_size = (void*)cogsf_get_size;
    streamfile->sf.get_offset = (void*)cogsf_get_offset;
    streamfile->sf.get_name = (void*)cogsf_get_name;
    streamfile->sf.open = (void*)cogsf_open;
    streamfile->sf.close = (void*)cogsf_close;
    streamfile->file = (void*)CFBridgingRetain(file);
    streamfile->offset = 0;
    strncpy(streamfile->name, path, sizeof(streamfile->name));
    
    return &streamfile->sf;
}

STREAMFILE *cogsf_create_from_path(const char *path) {
    id<CogSource> source;
    NSString * urlString = [NSString stringWithUTF8String:path];
    NSURL * url = [NSURL URLWithString:[urlString stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]];
    
    id audioSourceClass = NSClassFromString(@"AudioSource");
    source = [audioSourceClass audioSourceForURL:url];
    
    if (![source open:url])
        return 0;
    
    if (![source seekable])
        return 0;
    
    return cogsf_create(source, path);
}

VGMSTREAM *init_vgmstream_from_cogfile(const char *path, int subsong) {
    STREAMFILE *sf;
    VGMSTREAM *vgm = NULL;
    
    if (!subsong)
        subsong = 1;
    
    sf = cogsf_create_from_path(path);
    
    if (sf) {
        sf->stream_index = subsong;
        vgm = init_vgmstream_from_STREAMFILE(sf);
        cogsf_close((COGSTREAMFILE *)sf);
    }
    
    return vgm;
}

