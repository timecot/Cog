/* Automatically generated by configure - do not modify */
#ifndef _FFMPEG_CONFIG_H_
#define _FFMPEG_CONFIG_H_

#define ARCH_X86 1
#define ARCH_ARM 0
#define ARCH_PPC 0
#define ARCH_ALPHA 0
#define ARCH_BFIN 0
#define ARCH_SH4 0
#define ARCH_MIPS 0

#define HAVE_BIGENDIAN 0
#define HAVE_FAST_UNALIGNED 1

#define HAVE_VIS 0

#define TUNECPU generic
#define HAVE_MMX 0
#define HAVE_MMX_INLINE 0
#define HAVE_SSE 0
#define HAVE_SSE2 0
#define HAVE_SSSE3_EXTERNAL 0
#define HAVE_SSE4_EXTERNAL 0
#define emms_c()
#define HAVE_MMX_EXTERNAL 0
#define HAVE_MMX2 0
#define HAVE_MMXEXT 0
#define HAVE_MMXEXT_EXTERNAL 0
#define HAVE_AMD3DNOW_EXTERNAL 0
#define HAVE_SSE2_EXTERNAL 0
#define HAVE_SSE_EXTERNAL 0
#define HAVE_AVX_EXTERNAL 0
#define HAVE_YASM 0
#define HAVE_MIPSFPU 0
#define HAVE_MIPSDSPR1 0
#define __CPU__ 586
#define HAVE_BUILTIN_VECTOR 1
#define HAVE_LOCALTIME_R 1
#define HAVE_LRINTF 1
#undef HAVE_VHOOK
#define CONFIG_ENCODERS 0
#define CONFIG_DECODERS 1
#define CONFIG_MPEGAUDIO_HP 0
#undef CONFIG_VIDEO4LINUX
#undef CONFIG_DV1394
#define CONFIG_HAVE_DLOPEN 1
#define CONFIG_HAVE_DLFCN 1
#undef CONFIG_AUDIO_OSS
#undef CONFIG_NETWORK
#define CONFIG_ZLIB 1
#define HAVE_MALLOC_H 0
#define HAVE_MEMALIGN 0	
#define HAVE_CBRT 1
#define HAVE_CBRTF 1
#define HAVE_ISINF 1
#define HAVE_ISNAN 1
#define HAVE_RINT 1
#define HAVE_LRINT 1
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_TRUNC 1
#define HAVE_TRUNCF 1
#define HAVE_THREADS 0
#define HAVE_PTHREADS 1
#define HAVE_ATOMICS_GCC 1
#define HAVE_ATOMICS_NATIVE 1
#define HAVE_PRAGMA_DEPRECATED 1
#define HAVE_UNISTD_H 1
#define CONFIG_FRAME_THREAD_ENCODER 0
#define SIMPLE_IDCT 1
#define CONFIG_MEMORY_POISONING 0
#define FF_MEMORY_POISON 0x2a
#define CONFIG_MDCT 1
#define CONFIG_DSPUTIL 1
#define FFMPEG_CONFIGURATION "Xcode mess lol"
#define FFMPEG_LICENSE "LGPL"
#undef CONFIG_FFSERVER
#define CONFIG_RISKY 1
#define CONFIG_FTRAPV 0
#define CONFIG_SMALL 0

#define NULL_IF_CONFIG_SMALL(a) a

#define CONFIG_H263_VAAPI_HWACCEL 0
#define CONFIG_H263_VDPAU_HWACCEL 0
#define CONFIG_H264_DXVA2_HWACCEL 0
#define CONFIG_H264_VAAPI_HWACCEL 0
#define CONFIG_H264_VDA_HWACCEL 0
#define CONFIG_H264_VDPAU_HWACCEL 0
#define CONFIG_MPEG1_VDPAU_HWACCEL 0
#define CONFIG_MPEG1_DXVA2_HWACCEL 0
#define CONFIG_MPEG2_DXVA2_HWACCEL 0
#define CONFIG_MPEG2_VAAPI_HWACCEL 0
#define CONFIG_MPEG2_VDPAU_HWACCEL 0
#define CONFIG_MPEG4_VAAPI_HWACCEL 0
#define CONFIG_MPEG4_VDPAU_HWACCEL 0
#define CONFIG_VC1_DXVA2_HWACCEL 0
#define CONFIG_VC1_VAAPI_HWACCEL 0
#define CONFIG_VC1_VDPAU_HWACCEL 0
#define CONFIG_WMV3_DXVA2_HWACCEL 0
#define CONFIG_WMV3_VAAPI_HWACCEL 0
#define CONFIG_WMV3_VDPAU_HWACCEL 0

#define CONFIG_A64MULTI_ENCODER 0
#define CONFIG_A64MULTI5_ENCODER 0
#define CONFIG_AASC_DECODER 0
#define CONFIG_AIC_DECODER 0
#define CONFIG_AMV_DECODER 0
#define CONFIG_AMV_ENCODER 0
#define CONFIG_ANM_DECODER 0
#define CONFIG_ANSI_DECODER 0
#define CONFIG_ASV1_ENCODER 0
#define CONFIG_ASV1_DECODER 0
#define CONFIG_ASV2_ENCODER 0
#define CONFIG_ASV2_DECODER 0
#define CONFIG_AURA_DECODER 0
#define CONFIG_AURA2_DECODER 0
#define CONFIG_AVRP_ENCODER 0
#define CONFIG_AVRP_DECODER 0
#define CONFIG_AVRN_DECODER 0
#define CONFIG_AVS_DECODER 0
#define CONFIG_AVUI_ENCODER 0
#define CONFIG_AVUI_DECODER 0
#define CONFIG_AYUV_ENCODER 0
#define CONFIG_AYUV_DECODER 0
#define CONFIG_BETHSOFTVID_DECODER 0
#define CONFIG_BFI_DECODER 0
#define CONFIG_BINK_DECODER 0
#define CONFIG_BMP_ENCODER 0
#define CONFIG_BMP_DECODER 0
#define CONFIG_BMV_VIDEO_DECODER 0
#define CONFIG_BRENDER_PIX_DECODER 0
#define CONFIG_C93_DECODER 0
#define CONFIG_CAVS_DECODER 0
#define CONFIG_CDGRAPHICS_DECODER 0
#define CONFIG_CDXL_DECODER 0
#define CONFIG_CINEPAK_DECODER 0
#define CONFIG_CLJR_ENCODER 0
#define CONFIG_CLJR_DECODER 0
#define CONFIG_CLLC_DECODER 0
#define CONFIG_COMFORTNOISE_ENCODER 0
#define CONFIG_COMFORTNOISE_DECODER 0
#define CONFIG_CPIA_DECODER 0
#define CONFIG_CSCD_DECODER 0
#define CONFIG_CYUV_DECODER 0
#define CONFIG_DFA_DECODER 0
#define CONFIG_DIRAC_DECODER 1
#define CONFIG_DNXHD_ENCODER 0
#define CONFIG_DNXHD_DECODER 0
#define CONFIG_DPX_ENCODER 0
#define CONFIG_DPX_DECODER 0
#define CONFIG_DSICINVIDEO_DECODER 0
#define CONFIG_DVVIDEO_ENCODER 0
#define CONFIG_DVVIDEO_DECODER 0
#define CONFIG_DXTORY_DECODER 0
#define CONFIG_EACMV_DECODER 0
#define CONFIG_EAMAD_DECODER 0
#define CONFIG_EATGQ_DECODER 0
#define CONFIG_EATGV_DECODER 0
#define CONFIG_DXA_DECODER 0
#define CONFIG_EATQI_DECODER 0
#define CONFIG_EIGHTBPS_DECODER 0
#define CONFIG_EIGHTSVX_EXP_DECODER 0
#define CONFIG_EIGHTSVX_FIB_DECODER 0
#define CONFIG_ESCAPE124_DECODER 0
#define CONFIG_ESCAPE130_DECODER 0
#define CONFIG_EXR_DECODER 0
#define CONFIG_FFV1_ENCODER 0
#define CONFIG_FFV1_DECODER 0
#define CONFIG_FFVHUFF_ENCODER 0
#define CONFIG_FFVHUFF_DECODER 0
#define CONFIG_FLASHSV_ENCODER 0
#define CONFIG_FLASHSV_DECODER 0
#define CONFIG_FLASHSV2_ENCODER 0
#define CONFIG_FLASHSV2_DECODER 0
#define CONFIG_FLIC_DECODER 0
#define CONFIG_FLV_ENCODER 0
#define CONFIG_FLV_DECODER 0
#define CONFIG_FOURXM_DECODER 0
#define CONFIG_FRAPS_DECODER 0
#define CONFIG_FRWU_DECODER 0
#define CONFIG_G2M_DECODER 0
#define CONFIG_GIF_ENCODER 0
#define CONFIG_GIF_DECODER 0
#define CONFIG_H261_ENCODER 0
#define CONFIG_H261_DECODER 0
#define CONFIG_H263_ENCODER 0
#define CONFIG_H263_DECODER 0
#define CONFIG_H263I_DECODER 0
#define CONFIG_H263P_ENCODER 0
#define CONFIG_H263P_DECODER 0
#define CONFIG_H264_DECODER 0
#define CONFIG_H264_CRYSTALHD_DECODER 0
#define CONFIG_H264_VDA_DECODER 0
#define CONFIG_H264_VDPAU_DECODER 0
#define CONFIG_HUFFYUV_ENCODER 0
#define CONFIG_HUFFYUV_DECODER 0
#define CONFIG_IDCIN_DECODER 0
#define CONFIG_IFF_BYTERUN1_DECODER 0
#define CONFIG_IFF_ILBM_DECODER 0
#define CONFIG_INDEO2_DECODER 0
#define CONFIG_INDEO3_DECODER 0
#define CONFIG_INDEO4_DECODER 0
#define CONFIG_INDEO5_DECODER 0
#define CONFIG_INTERPLAY_VIDEO_DECODER 0
#define CONFIG_JPEG2000_ENCODER 0
#define CONFIG_JPEG2000_DECODER 0
#define CONFIG_JPEGLS_ENCODER 0
#define CONFIG_JPEGLS_DECODER 0
#define CONFIG_JV_DECODER 0
#define CONFIG_KGV1_DECODER 0
#define CONFIG_KMVC_DECODER 0
#define CONFIG_LAGARITH_DECODER 0
#define CONFIG_LJPEG_ENCODER 0
#define CONFIG_LOCO_DECODER 0
#define CONFIG_MDEC_DECODER 0
#define CONFIG_MIMIC_DECODER 0
#define CONFIG_MJPEG_ENCODER 0
#define CONFIG_MJPEG_DECODER 0
#define CONFIG_MJPEGB_DECODER 0
#define CONFIG_MMVIDEO_DECODER 0
#define CONFIG_MOTIONPIXELS_DECODER 0
#define CONFIG_MPEG_XVMC_DECODER 0
#define CONFIG_MPEG1VIDEO_ENCODER 0
#define CONFIG_MPEG1VIDEO_DECODER 0
#define CONFIG_MPEG2VIDEO_ENCODER 0
#define CONFIG_MPEG2VIDEO_DECODER 0
#define CONFIG_MPEG4_ENCODER 0
#define CONFIG_MPEG4_DECODER 0
#define CONFIG_MPEG4_CRYSTALHD_DECODER 0
#define CONFIG_MPEG4_VDPAU_DECODER 0
#define CONFIG_MPEGVIDEO_DECODER 0
#define CONFIG_MPEG_VDPAU_DECODER 0
#define CONFIG_MPEG1_VDPAU_DECODER 0
#define CONFIG_MPEG2_CRYSTALHD_DECODER 0
#define CONFIG_MSA1_DECODER 0
#define CONFIG_MSMPEG4_CRYSTALHD_DECODER 0
#define CONFIG_MSMPEG4V1_DECODER 0
#define CONFIG_MSMPEG4V2_ENCODER 0
#define CONFIG_MSMPEG4V2_DECODER 0
#define CONFIG_MSMPEG4V3_ENCODER 0
#define CONFIG_MSMPEG4V3_DECODER 0
#define CONFIG_MSRLE_DECODER 0
#define CONFIG_MSS1_DECODER 0
#define CONFIG_MSS2_DECODER 0
#define CONFIG_MSVIDEO1_ENCODER 0
#define CONFIG_MSVIDEO1_DECODER 0
#define CONFIG_MSZH_DECODER 0
#define CONFIG_MTS2_DECODER 0
#define CONFIG_MVC1_DECODER 0
#define CONFIG_MVC2_DECODER 0
#define CONFIG_MXPEG_DECODER 0
#define CONFIG_NUV_DECODER 0
#define CONFIG_PAF_VIDEO_DECODER 0
#define CONFIG_PAM_ENCODER 0
#define CONFIG_PAM_DECODER 0
#define CONFIG_PBM_ENCODER 0
#define CONFIG_PBM_DECODER 0
#define CONFIG_PCX_ENCODER 0
#define CONFIG_PCX_DECODER 0
#define CONFIG_PGM_ENCODER 0
#define CONFIG_PGM_DECODER 0
#define CONFIG_PGMYUV_ENCODER 0
#define CONFIG_PGMYUV_DECODER 0
#define CONFIG_PICTOR_DECODER 0
#define CONFIG_PNG_ENCODER 0
#define CONFIG_PNG_DECODER 0
#define CONFIG_PPM_ENCODER 0
#define CONFIG_PPM_DECODER 0
#define CONFIG_PRORES_ENCODER 0
#define CONFIG_PRORES_DECODER 0
#define CONFIG_PRORES_AW_ENCODER 0
#define CONFIG_PRORES_KS_ENCODER 0
#define CONFIG_PRORES_LGPL_DECODER 0
#define CONFIG_PTX_DECODER 0
#define CONFIG_QDRAW_DECODER 0
#define CONFIG_QPEG_DECODER 0
#define CONFIG_QTRLE_ENCODER 0
#define CONFIG_QTRLE_DECODER 0
#define CONFIG_R10K_ENCODER 0
#define CONFIG_R10K_DECODER 0
#define CONFIG_R210_ENCODER 0
#define CONFIG_R210_DECODER 0
#define CONFIG_RAWVIDEO_ENCODER 0
#define CONFIG_RAWVIDEO_DECODER 0
#define CONFIG_RL2_DECODER 0
#define CONFIG_ROQ_ENCODER 0
#define CONFIG_ROQ_DECODER 0
#define CONFIG_RPZA_DECODER 0
#define CONFIG_RV10_ENCODER 0
#define CONFIG_RV10_DECODER 0
#define CONFIG_RV20_ENCODER 0
#define CONFIG_RV20_DECODER 0
#define CONFIG_RV30_DECODER 0
#define CONFIG_RV40_DECODER 0
#define CONFIG_S302M_ENCODER 0
#define CONFIG_S302M_DECODER 0
#define CONFIG_SANM_DECODER 0
#define CONFIG_SGI_ENCODER 0
#define CONFIG_SGI_DECODER 0
#define CONFIG_SGIRLE_DECODER 0
#define CONFIG_SMACKER_DECODER 0
#define CONFIG_SMC_DECODER 0
#define CONFIG_SMVJPEG_DECODER 0
#define CONFIG_SNOW_ENCODER 0
#define CONFIG_SNOW_DECODER 0
#define CONFIG_SP5X_DECODER 0
#define CONFIG_SUNRAST_ENCODER 0
#define CONFIG_SUNRAST_DECODER 0
#define CONFIG_SVQ1_ENCODER 0
#define CONFIG_SVQ1_DECODER 0
#define CONFIG_SVQ3_DECODER 0
#define CONFIG_TARGA_ENCODER 0
#define CONFIG_TARGA_DECODER 0
#define CONFIG_TARGA_Y216_DECODER 0
#define CONFIG_THEORA_DECODER 0
#define CONFIG_THP_DECODER 0
#define CONFIG_TIERTEXSEQVIDEO_DECODER 0
#define CONFIG_TIFF_ENCODER 0
#define CONFIG_TIFF_DECODER 0
#define CONFIG_TMV_DECODER 0
#define CONFIG_TRUEMOTION1_DECODER 0
#define CONFIG_TRUEMOTION2_DECODER 0
#define CONFIG_TSCC_DECODER 0
#define CONFIG_TSCC2_DECODER 0
#define CONFIG_TXD_DECODER 0
#define CONFIG_ULTI_DECODER 0
#define CONFIG_UTVIDEO_ENCODER 0
#define CONFIG_UTVIDEO_DECODER 0
#define CONFIG_V210_ENCODER 0
#define CONFIG_V210_DECODER 0
#define CONFIG_V210X_DECODER 0
#define CONFIG_V308_ENCODER 0
#define CONFIG_V308_DECODER 0
#define CONFIG_V408_ENCODER 0
#define CONFIG_V408_DECODER 0
#define CONFIG_V410_ENCODER 0
#define CONFIG_V410_DECODER 0
#define CONFIG_VB_DECODER 0
#define CONFIG_VBLE_DECODER 0
#define CONFIG_VC1_DECODER 0
#define CONFIG_VC1_CRYSTALHD_DECODER 0
#define CONFIG_VC1_VDPAU_DECODER 0
#define CONFIG_VC1IMAGE_DECODER 0
#define CONFIG_VCR1_DECODER 0
#define CONFIG_VMDVIDEO_DECODER 0
#define CONFIG_VMNC_DECODER 0
#define CONFIG_VP3_DECODER 0
#define CONFIG_VP5_DECODER 0
#define CONFIG_VP6_DECODER 0
#define CONFIG_VP6A_DECODER 0
#define CONFIG_VP6F_DECODER 0
#define CONFIG_VP8_DECODER 0
#define CONFIG_VQA_DECODER 0
#define CONFIG_WEBP_DECODER 0
#define CONFIG_WMV1_ENCODER 0
#define CONFIG_WMV1_DECODER 0
#define CONFIG_WMV2_ENCODER 0
#define CONFIG_WMV2_DECODER 0
#define CONFIG_WMV3_DECODER 0
#define CONFIG_WMV3_CRYSTALHD_DECODER 0
#define CONFIG_WMV3_VDPAU_DECODER 0
#define CONFIG_WMV3IMAGE_DECODER 0
#define CONFIG_WNV1_DECODER 0
#define CONFIG_XAN_WC3_DECODER 0
#define CONFIG_XAN_WC4_DECODER 0
#define CONFIG_XBM_ENCODER 0
#define CONFIG_XBM_DECODER 0
#define CONFIG_XFACE_ENCODER 0
#define CONFIG_XFACE_DECODER 0
#define CONFIG_XL_DECODER 0
#define CONFIG_XWD_ENCODER 0
#define CONFIG_XWD_DECODER 0
#define CONFIG_Y41P_ENCODER 0
#define CONFIG_Y41P_DECODER 0
#define CONFIG_YOP_DECODER 0
#define CONFIG_YUV4_ENCODER 0
#define CONFIG_YUV4_DECODER 0
#define CONFIG_ZERO12V_DECODER 0
#define CONFIG_ZEROCODEC_DECODER 0
#define CONFIG_ZLIB_ENCODER 0
#define CONFIG_ZLIB_DECODER 0
#define CONFIG_ZMBV_ENCODER 0
#define CONFIG_ZMBV_DECODER 0

#define CONFIG_AAC_ENCODER 0
#define CONFIG_AAC_DECODER 1
#define CONFIG_AAC_LATM_DECODER 0
#define CONFIG_AC3_ENCODER 0
#define CONFIG_AC3_DECODER 1
#define CONFIG_AC3_FIXED_ENCODER 0
#define CONFIG_ALAC_ENCODER 0
#define CONFIG_ALAC_DECODER 0
#define CONFIG_ALS_DECODER 0
#define CONFIG_AMRNB_DECODER 1
#define CONFIG_AMRWB_DECODER 1
#define CONFIG_APE_DECODER 1
#define CONFIG_ATRAC1_DECODER 0
#define CONFIG_ATRAC3_DECODER 1
#define CONFIG_BINKAUDIO_DCT_DECODER 0
#define CONFIG_BINKAUDIO_RDFT_DECODER 0
#define CONFIG_BMV_AUDIO_DECODER 0
#define CONFIG_COOK_DECODER 0
#define CONFIG_DCA_ENCODER 0
#define CONFIG_DCA_DECODER 1
#define CONFIG_DSICINAUDIO_DECODER 0
#define CONFIG_EAC3_ENCODER 0
#define CONFIG_EAC3_DECODER 1
#define CONFIG_EVRC_DECODER 0
#define CONFIG_FFWAVESYNTH_DECODER 0
#define CONFIG_FLAC_ENCODER 0
#define CONFIG_FLAC_DECODER 0
#define CONFIG_G723_1_ENCODER 0
#define CONFIG_G723_1_DECODER 1
#define CONFIG_G729_DECODER 1
#define CONFIG_GSM_DECODER 1
#define CONFIG_GSM_MS_DECODER 1
#define CONFIG_IAC_DECODER 0
#define CONFIG_IMC_DECODER 0
#define CONFIG_MACE3_DECODER 0
#define CONFIG_MACE6_DECODER 0
#define CONFIG_METASOUND_DECODER 0
#define CONFIG_MLP_DECODER 0
#define CONFIG_MP1_DECODER 0
#define CONFIG_MP1FLOAT_DECODER 1
#define CONFIG_MP2_ENCODER 0
#define CONFIG_MP2_DECODER 0
#define CONFIG_MP2FLOAT_DECODER 1
#define CONFIG_MP3_DECODER 0
#define CONFIG_MP3FLOAT_DECODER 1
#define CONFIG_MP3ADU_DECODER 0
#define CONFIG_MP3ADUFLOAT_DECODER 0
#define CONFIG_MP3ON4_DECODER 0
#define CONFIG_MP3ON4FLOAT_DECODER 0
#define CONFIG_MPC7_DECODER 0
#define CONFIG_MPC8_DECODER 0
#define CONFIG_NELLYMOSER_ENCODER 0
#define CONFIG_NELLYMOSER_DECODER 0
#define CONFIG_PAF_AUDIO_DECODER 0
#define CONFIG_QCELP_DECODER 0
#define CONFIG_QDM2_DECODER 0
#define CONFIG_RA_144_ENCODER 0
#define CONFIG_RA_144_DECODER 0
#define CONFIG_RA_288_DECODER 0
#define CONFIG_RALF_DECODER 0
#define CONFIG_SHORTEN_DECODER 0
#define CONFIG_SIPR_DECODER 0
#define CONFIG_SMACKAUD_DECODER 0
#define CONFIG_SONIC_ENCODER 0
#define CONFIG_SONIC_DECODER 0
#define CONFIG_SONIC_LS_ENCODER 0
#define CONFIG_SONIC_LS_DECODER 0
#define CONFIG_TAK_DECODER 1
#define CONFIG_TRUEHD_DECODER 0
#define CONFIG_TRUESPEECH_DECODER 0
#define CONFIG_TTA_ENCODER 0
#define CONFIG_TTA_DECODER 1
#define CONFIG_TWINVQ_DECODER 0
#define CONFIG_VMDAUDIO_DECODER 0
#define CONFIG_VORBIS_ENCODER 0
#define CONFIG_VORBIS_DECODER 0
#define CONFIG_WAVPACK_ENCODER 0
#define CONFIG_WAVPACK_DECODER 0
#define CONFIG_WMALOSSLESS_DECODER 1
#define CONFIG_WMAPRO_DECODER 1
#define CONFIG_WMAV1_ENCODER 0
#define CONFIG_WMAV1_DECODER 1
#define CONFIG_WMAV2_ENCODER 0
#define CONFIG_WMAV2_DECODER 1
#define CONFIG_WMAVOICE_DECODER 1
#define CONFIG_WS_SND1_DECODER 0

#define CONFIG_PCM_ALAW_ENCODER 0
#define CONFIG_PCM_ALAW_DECODER 1
#define CONFIG_PCM_BLURAY_DECODER 0
#define CONFIG_PCM_DVD_DECODER 0
#define CONFIG_PCM_F32BE_ENCODER 0
#define CONFIG_PCM_F32BE_DECODER 1
#define CONFIG_PCM_F32LE_ENCODER 0
#define CONFIG_PCM_F32LE_DECODER 1
#define CONFIG_PCM_F64BE_ENCODER 0
#define CONFIG_PCM_F64BE_DECODER 1
#define CONFIG_PCM_F64LE_ENCODER 0
#define CONFIG_PCM_F64LE_DECODER 1
#define CONFIG_PCM_LXF_DECODER 0
#define CONFIG_PCM_MULAW_ENCODER 0
#define CONFIG_PCM_MULAW_DECODER 1
#define CONFIG_PCM_S8_ENCODER 0
#define CONFIG_PCM_S8_DECODER 1
#define CONFIG_PCM_S8_PLANAR_ENCODER 0
#define CONFIG_PCM_S8_PLANAR_DECODER 1
#define CONFIG_PCM_S16BE_ENCODER 0
#define CONFIG_PCM_S16BE_DECODER 1
#define CONFIG_PCM_S16BE_PLANAR_ENCODER 0
#define CONFIG_PCM_S16BE_PLANAR_DECODER 1
#define CONFIG_PCM_S16LE_ENCODER 0
#define CONFIG_PCM_S16LE_DECODER 1
#define CONFIG_PCM_S16LE_PLANAR_ENCODER 0
#define CONFIG_PCM_S16LE_PLANAR_DECODER 1
#define CONFIG_PCM_S24BE_ENCODER 0
#define CONFIG_PCM_S24BE_DECODER 1
#define CONFIG_PCM_S24DAUD_ENCODER 0
#define CONFIG_PCM_S24DAUD_DECODER 1
#define CONFIG_PCM_S24LE_ENCODER 0
#define CONFIG_PCM_S24LE_DECODER 1
#define CONFIG_PCM_S24LE_PLANAR_ENCODER 0
#define CONFIG_PCM_S24LE_PLANAR_DECODER 1
#define CONFIG_PCM_S32BE_ENCODER 0
#define CONFIG_PCM_S32BE_DECODER 1
#define CONFIG_PCM_S32LE_ENCODER 0
#define CONFIG_PCM_S32LE_DECODER 1
#define CONFIG_PCM_S32LE_PLANAR_ENCODER 0
#define CONFIG_PCM_S32LE_PLANAR_DECODER 1
#define CONFIG_PCM_U8_ENCODER 0
#define CONFIG_PCM_U8_DECODER 1
#define CONFIG_PCM_U16BE_ENCODER 0
#define CONFIG_PCM_U16BE_DECODER 1
#define CONFIG_PCM_U16LE_ENCODER 0
#define CONFIG_PCM_U16LE_DECODER 1
#define CONFIG_PCM_U24BE_ENCODER 0
#define CONFIG_PCM_U24BE_DECODER 1
#define CONFIG_PCM_U24LE_ENCODER 0
#define CONFIG_PCM_U24LE_DECODER 1
#define CONFIG_PCM_U32BE_ENCODER 0
#define CONFIG_PCM_U32BE_DECODER 1
#define CONFIG_PCM_U32LE_ENCODER 0
#define CONFIG_PCM_U32LE_DECODER 1
#define CONFIG_PCM_ZORK_DECODER 1

#define CONFIG_INTERPLAY_DPCM_DECODER 0
#define CONFIG_ROQ_DPCM_ENCODER 0
#define CONFIG_ROQ_DPCM_DECODER 0
#define CONFIG_SOL_DPCM_DECODER 0
#define CONFIG_XAN_DPCM_DECODER 0

#define CONFIG_ADPCM_4XM_DECODER 0
#define CONFIG_ADPCM_ADX_ENCODER 0
#define CONFIG_ADPCM_ADX_DECODER 0
#define CONFIG_ADPCM_AFC_DECODER 0
#define CONFIG_ADPCM_CT_DECODER 1
#define CONFIG_ADPCM_DTK_DECODER 0
#define CONFIG_ADPCM_EA_DECODER 0
#define CONFIG_ADPCM_EA_MAXIS_XA_DECODER 0
#define CONFIG_ADPCM_EA_R1_DECODER 0
#define CONFIG_ADPCM_EA_R2_DECODER 0
#define CONFIG_ADPCM_EA_R3_DECODER 0
#define CONFIG_ADPCM_EA_XAS_DECODER 0
#define CONFIG_ADPCM_G722_ENCODER 0
#define CONFIG_ADPCM_G722_DECODER 1
#define CONFIG_ADPCM_G726_ENCODER 0
#define CONFIG_ADPCM_G726_DECODER 1
#define CONFIG_ADPCM_IMA_AMV_DECODER 0
#define CONFIG_ADPCM_IMA_APC_DECODER 0
#define CONFIG_ADPCM_IMA_DK3_DECODER 1
#define CONFIG_ADPCM_IMA_DK4_DECODER 1
#define CONFIG_ADPCM_IMA_EA_EACS_DECODER 0
#define CONFIG_ADPCM_IMA_EA_SEAD_DECODER 0
#define CONFIG_ADPCM_IMA_ISS_DECODER 0
#define CONFIG_ADPCM_IMA_OKI_DECODER 0
#define CONFIG_ADPCM_IMA_QT_ENCODER 0
#define CONFIG_ADPCM_IMA_QT_DECODER 0
#define CONFIG_ADPCM_IMA_RAD_DECODER 0
#define CONFIG_ADPCM_IMA_SMJPEG_DECODER 0
#define CONFIG_ADPCM_IMA_WAV_ENCODER 0
#define CONFIG_ADPCM_IMA_WAV_DECODER 0
#define CONFIG_ADPCM_IMA_WS_DECODER 0
#define CONFIG_ADPCM_MS_ENCODER 0
#define CONFIG_ADPCM_MS_DECODER 0
#define CONFIG_ADPCM_SBPRO_2_DECODER 0
#define CONFIG_ADPCM_SBPRO_3_DECODER 0
#define CONFIG_ADPCM_SBPRO_4_DECODER 0
#define CONFIG_ADPCM_SWF_ENCODER 0
#define CONFIG_ADPCM_SWF_DECODER 0
#define CONFIG_ADPCM_THP_DECODER 0
#define CONFIG_ADPCM_XA_DECODER 0
#define CONFIG_ADPCM_YAMAHA_ENCODER 0
#define CONFIG_ADPCM_YAMAHA_DECODER 0
#define CONFIG_VIMA_DECODER 0

#define CONFIG_SSA_ENCODER 0
#define CONFIG_SSA_DECODER 0
#define CONFIG_ASS_ENCODER 0
#define CONFIG_ASS_DECODER 0
#define CONFIG_DVBSUB_ENCODER 0
#define CONFIG_DVBSUB_DECODER 0
#define CONFIG_DVDSUB_ENCODER 0
#define CONFIG_DVDSUB_DECODER 0
#define CONFIG_JACOSUB_DECODER 0
#define CONFIG_MICRODVD_DECODER 0
#define CONFIG_MOVTEXT_ENCODER 0
#define CONFIG_MOVTEXT_DECODER 0
#define CONFIG_MPL2_DECODER 0
#define CONFIG_PGSSUB_DECODER 0
#define CONFIG_PJS_DECODER 0
#define CONFIG_REALTEXT_DECODER 0
#define CONFIG_SAMI_DECODER 0
#define CONFIG_SRT_ENCODER 0
#define CONFIG_SRT_DECODER 0
#define CONFIG_SUBRIP_ENCODER 0
#define CONFIG_SUBRIP_DECODER 0
#define CONFIG_SUBVIEWER_DECODER 0
#define CONFIG_SUBVIEWER1_DECODER 0
#define CONFIG_TEXT_DECODER 0
#define CONFIG_VPLAYER_DECODER 0
#define CONFIG_WEBVTT_DECODER 0
#define CONFIG_XSUB_ENCODER 0
#define CONFIG_XSUB_DECODER 0

#define CONFIG_LIBCELT_DECODER 0
#define CONFIG_LIBFAAC_ENCODER 0
#define CONFIG_LIBFDK_AAC_ENCODER 0
#define CONFIG_LIBFDK_AAC_DECODER 0
#define CONFIG_LIBGSM_ENCODER 0
#define CONFIG_LIBGSM_DECODER 0
#define CONFIG_LIBGSM_MS_ENCODER 0
#define CONFIG_LIBGSM_MS_DECODER 0
#define CONFIG_LIBILBC_ENCODER 0
#define CONFIG_LIBILBC_DECODER 0
#define CONFIG_LIBMP3LAME_ENCODER 0
#define CONFIG_LIBOPENCORE_AMRNB_ENCODER 0
#define CONFIG_LIBOPENCORE_AMRNB_DECODER 0
#define CONFIG_LIBOPENCORE_AMRWB_DECODER 0
#define CONFIG_LIBOPENJPEG_ENCODER 0
#define CONFIG_LIBOPENJPEG_DECODER 0
#define CONFIG_LIBOPUS_ENCODER 0
#define CONFIG_LIBOPUS_DECODER 0
#define CONFIG_LIBSCHROEDINGER_ENCODER 0
#define CONFIG_LIBSCHROEDINGER_DECODER 0
#define CONFIG_LIBSHINE_ENCODER 0
#define CONFIG_LIBSPEEX_ENCODER 0
#define CONFIG_LIBSPEEX_DECODER 0
#define CONFIG_LIBSTAGEFRIGHT_H264_DECODER 0
#define CONFIG_LIBTHEORA_ENCODER 0
#define CONFIG_LIBTWOLAME_ENCODER 0
#define CONFIG_LIBUTVIDEO_ENCODER 0
#define CONFIG_LIBUTVIDEO_DECODER 0
#define CONFIG_LIBVO_AACENC_ENCODER 0
#define CONFIG_LIBVO_AMRWBENC_ENCODER 0
#define CONFIG_LIBVORBIS_ENCODER 0
#define CONFIG_LIBVORBIS_DECODER 0
#define CONFIG_LIBVPX_VP8_ENCODER 0
#define CONFIG_LIBVPX_VP8_DECODER 0
#define CONFIG_LIBVPX_VP9_ENCODER 0
#define CONFIG_LIBVPX_VP9_DECODER 0
#define CONFIG_LIBWAVPACK_ENCODER 0
#define CONFIG_LIBX264_ENCODER 0
#define CONFIG_LIBX264RGB_ENCODER 0
#define CONFIG_LIBXAVS_ENCODER 0
#define CONFIG_LIBXVID_ENCODER 0
#define CONFIG_LIBZVBI_TELETEXT_DECODER 0
#define CONFIG_LIBAACPLUS_ENCODER 0

#define CONFIG_BINTEXT_DECODER 0
#define CONFIG_XBIN_DECODER 0
#define CONFIG_IDF_DECODER 0

#define CONFIG_AAC_PARSER 1
#define CONFIG_AAC_LATM_PARSER 0
#define CONFIG_AC3_PARSER 1
#define CONFIG_ADX_PARSER 0
#define CONFIG_BMP_PARSER 0
#define CONFIG_CAVSVIDEO_PARSER 0
#define CONFIG_COOK_PARSER 0
#define CONFIG_DCA_PARSER 1
#define CONFIG_DIRAC_PARSER 1
#define CONFIG_DNXHD_PARSER 0
#define CONFIG_DVBSUB_PARSER 0
#define CONFIG_DVDSUB_PARSER 0
#define CONFIG_DVD_NAV_PARSER 0
#define CONFIG_FLAC_PARSER 0
#define CONFIG_GSM_PARSER 0
#define CONFIG_H261_PARSER 0
#define CONFIG_H263_PARSER 0
#define CONFIG_H264_PARSER 0
#define CONFIG_MJPEG_PARSER 0
#define CONFIG_MLP_PARSER 0
#define CONFIG_MPEG4VIDEO_PARSER 0
#define CONFIG_MPEGAUDIO_PARSER 1
#define CONFIG_MPEGVIDEO_PARSER 0
#define CONFIG_PNG_PARSER 0
#define CONFIG_PNM_PARSER 0
#define CONFIG_RV30_PARSER 0
#define CONFIG_RV40_PARSER 0
#define CONFIG_TAK_PARSER 1
#define CONFIG_VC1_PARSER 0
#define CONFIG_VORBIS_PARSER 0
#define CONFIG_VP3_PARSER 0
#define CONFIG_VP8_PARSER 0

#define CONFIG_AAC_ADTSTOASC_BSF 1
#define CONFIG_CHOMP_BSF 0
#define CONFIG_DUMP_EXTRADATA_BSF 0
#define CONFIG_H264_MP4TOANNEXB_BSF 0
#define CONFIG_IMX_DUMP_HEADER_BSF 0
#define CONFIG_MJPEG2JPEG_BSF 0
#define CONFIG_MJPEGA_DUMP_HEADER_BSF 0
#define CONFIG_MP3_HEADER_COMPRESS_BSF 0
#define CONFIG_MP3_HEADER_DECOMPRESS_BSF 1
#define CONFIG_MOV2TEXTSUB_BSF 0
#define CONFIG_NOISE_BSF 0
#define CONFIG_REMOVE_EXTRADATA_BSF 0
#define CONFIG_TEXT2MOVSUB_BSF 0


#define CONFIG_A64_MUXER 0
#define CONFIG_AAC_DEMUXER 1
#define CONFIG_AC3_MUXER 0
#define CONFIG_AC3_DEMUXER 1
#define CONFIG_ACT_DEMUXER 0
#define CONFIG_ADF_DEMUXER 0
#define CONFIG_ADP_DEMUXER 0
#define CONFIG_ADTS_MUXER 0
#define CONFIG_ADX_MUXER 0
#define CONFIG_ADX_DEMUXER 0
#define CONFIG_AEA_DEMUXER 0
#define CONFIG_AFC_DEMUXER 0
#define CONFIG_AIFF_MUXER 0
#define CONFIG_AIFF_DEMUXER 0
#define CONFIG_AMR_MUXER 0
#define CONFIG_AMR_DEMUXER 1
#define CONFIG_ANM_DEMUXER 0
#define CONFIG_APC_DEMUXER 0
#define CONFIG_APE_DEMUXER 1
#define CONFIG_AQTITLE_DEMUXER 0
#define CONFIG_ASF_MUXER 0
#define CONFIG_ASF_DEMUXER 1
#define CONFIG_ASS_MUXER 0
#define CONFIG_ASS_DEMUXER 0
#define CONFIG_AST_MUXER 0
#define CONFIG_AST_DEMUXER 1
#define CONFIG_ASF_STREAM_MUXER 0
#define CONFIG_AU_MUXER 0
#define CONFIG_AU_DEMUXER 0
#define CONFIG_AVI_MUXER 0
#define CONFIG_AVI_DEMUXER 1
#define CONFIG_AVISYNTH_DEMUXER 0
#define CONFIG_AVM2_MUXER 0
#define CONFIG_AVR_DEMUXER 0
#define CONFIG_AVS_DEMUXER 0
#define CONFIG_BETHSOFTVID_DEMUXER 0
#define CONFIG_BFI_DEMUXER 0
#define CONFIG_BINTEXT_DEMUXER 0
#define CONFIG_BINK_DEMUXER 0
#define CONFIG_BIT_MUXER 0
#define CONFIG_BIT_DEMUXER 0
#define CONFIG_BMV_DEMUXER 0
#define CONFIG_BRSTM_DEMUXER 0
#define CONFIG_BOA_DEMUXER 0
#define CONFIG_C93_DEMUXER 0
#define CONFIG_CAF_MUXER 0
#define CONFIG_CAF_DEMUXER 0
#define CONFIG_CAVSVIDEO_MUXER 0
#define CONFIG_CAVSVIDEO_DEMUXER 0
#define CONFIG_CDG_DEMUXER 0
#define CONFIG_CDXL_DEMUXER 0
#define CONFIG_CONCAT_DEMUXER 0
#define CONFIG_CRC_MUXER 0
#define CONFIG_DATA_MUXER 0
#define CONFIG_DATA_DEMUXER 0
#define CONFIG_DAUD_MUXER 0
#define CONFIG_DAUD_DEMUXER 0
#define CONFIG_DFA_DEMUXER 0
#define CONFIG_DIRAC_MUXER 0
#define CONFIG_DIRAC_DEMUXER 0
#define CONFIG_DNXHD_MUXER 0
#define CONFIG_DNXHD_DEMUXER 0
#define CONFIG_DSICIN_DEMUXER 0
#define CONFIG_DTS_MUXER 0
#define CONFIG_DTS_DEMUXER 1
#define CONFIG_DTSHD_DEMUXER 1
#define CONFIG_DV_MUXER 0
#define CONFIG_DV_DEMUXER 0
#define CONFIG_DXA_DEMUXER 0
#define CONFIG_EA_DEMUXER 0
#define CONFIG_EA_CDATA_DEMUXER 0
#define CONFIG_EAC3_MUXER 0
#define CONFIG_EAC3_DEMUXER 1
#define CONFIG_EPAF_DEMUXER 0
#define CONFIG_F4V_MUXER 0
#define CONFIG_FFM_MUXER 0
#define CONFIG_FFM_DEMUXER 0
#define CONFIG_FFMETADATA_MUXER 0
#define CONFIG_FFMETADATA_DEMUXER 0
#define CONFIG_FILMSTRIP_MUXER 0
#define CONFIG_FILMSTRIP_DEMUXER 0
#define CONFIG_FLAC_MUXER 0
#define CONFIG_FLAC_DEMUXER 0
#define CONFIG_FLIC_DEMUXER 0
#define CONFIG_FLV_MUXER 0
#define CONFIG_FLV_DEMUXER 0
#define CONFIG_FOURXM_DEMUXER 0
#define CONFIG_FRAMECRC_MUXER 0
#define CONFIG_FRAMEMD5_MUXER 0
#define CONFIG_FRM_DEMUXER 0
#define CONFIG_G722_MUXER 0
#define CONFIG_G722_DEMUXER 0
#define CONFIG_G723_1_MUXER 0
#define CONFIG_G723_1_DEMUXER 0
#define CONFIG_GIF_MUXER 0
#define CONFIG_GIF_DEMUXER 0
#define CONFIG_GSM_DEMUXER 0
#define CONFIG_GXF_MUXER 0
#define CONFIG_H261_MUXER 0
#define CONFIG_G729_DEMUXER 0
#define CONFIG_GXF_DEMUXER 0
#define CONFIG_H261_DEMUXER 0
#define CONFIG_H263_MUXER 0
#define CONFIG_H263_DEMUXER 0
#define CONFIG_H264_MUXER 0
#define CONFIG_H264_DEMUXER 0
#define CONFIG_H265_DEMUXER 0
#define CONFIG_HLS_MUXER 0
#define CONFIG_HLS_DEMUXER 0
#define CONFIG_ICO_MUXER 0
#define CONFIG_ICO_DEMUXER 0
#define CONFIG_IDCIN_DEMUXER 0
#define CONFIG_IDF_DEMUXER 0
#define CONFIG_IFF_DEMUXER 0
#define CONFIG_ILBC_MUXER 0
#define CONFIG_ILBC_DEMUXER 0
#define CONFIG_IMAGE2_MUXER 0
#define CONFIG_IMAGE2_DEMUXER 0
#define CONFIG_IMAGE2PIPE_MUXER 0
#define CONFIG_IMAGE2PIPE_DEMUXER 0
#define CONFIG_INGENIENT_DEMUXER 0
#define CONFIG_IPMOVIE_DEMUXER 0
#define CONFIG_IPOD_MUXER 0
#define CONFIG_IRCAM_MUXER 0
#define CONFIG_IRCAM_DEMUXER 0
#define CONFIG_ISMV_MUXER 0
#define CONFIG_ISS_DEMUXER 0
#define CONFIG_IV8_DEMUXER 0
#define CONFIG_IVF_MUXER 0
#define CONFIG_IVF_DEMUXER 0
#define CONFIG_JACOSUB_MUXER 0
#define CONFIG_JACOSUB_DEMUXER 0
#define CONFIG_JV_DEMUXER 0
#define CONFIG_LATM_MUXER 0
#define CONFIG_LATM_DEMUXER 0
#define CONFIG_LMLM4_DEMUXER 0
#define CONFIG_LOAS_DEMUXER 0
#define CONFIG_LVF_DEMUXER 0
#define CONFIG_LXF_DEMUXER 0
#define CONFIG_M4V_MUXER 0
#define CONFIG_M4V_DEMUXER 0
#define CONFIG_MD5_MUXER 0
#define CONFIG_MATROSKA_MUXER 0
#define CONFIG_MATROSKA_DEMUXER 0
#define CONFIG_MATROSKA_AUDIO_MUXER 0
#define CONFIG_MGSTS_DEMUXER 0
#define CONFIG_MICRODVD_MUXER 0
#define CONFIG_MICRODVD_DEMUXER 0
#define CONFIG_MJPEG_MUXER 0
#define CONFIG_MJPEG_DEMUXER 0
#define CONFIG_MLP_MUXER 0
#define CONFIG_MLP_DEMUXER 0
#define CONFIG_MM_DEMUXER 0
#define CONFIG_MMF_MUXER 0
#define CONFIG_MMF_DEMUXER 0
#define CONFIG_MOV_MUXER 0
#define CONFIG_MOV_DEMUXER 0
#define CONFIG_MP2_MUXER 0
#define CONFIG_MP3_MUXER 0
#define CONFIG_MP3_DEMUXER 1
#define CONFIG_MP4_MUXER 0
#define CONFIG_MPC_DEMUXER 0
#define CONFIG_MPC8_DEMUXER 0
#define CONFIG_MPEG1SYSTEM_MUXER 0
#define CONFIG_MPEG1VCD_MUXER 0
#define CONFIG_MPEG1VIDEO_MUXER 0
#define CONFIG_MPEG2DVD_MUXER 0
#define CONFIG_MPEG2SVCD_MUXER 0
#define CONFIG_MPEG2VIDEO_MUXER 0
#define CONFIG_MPEG2VOB_MUXER 0
#define CONFIG_MPEGPS_DEMUXER 0
#define CONFIG_MPEGTS_MUXER 0
#define CONFIG_MPEGTS_DEMUXER 0
#define CONFIG_MPEGTSRAW_DEMUXER 0
#define CONFIG_MPEGVIDEO_DEMUXER 0
#define CONFIG_MPJPEG_MUXER 0
#define CONFIG_MPL2_DEMUXER 0
#define CONFIG_MPSUB_DEMUXER 0
#define CONFIG_MSNWC_TCP_DEMUXER 0
#define CONFIG_MTV_DEMUXER 0
#define CONFIG_MV_DEMUXER 0
#define CONFIG_MVI_DEMUXER 0
#define CONFIG_MXF_MUXER 0
#define CONFIG_MXF_DEMUXER 0
#define CONFIG_MXF_D10_MUXER 0
#define CONFIG_MXG_DEMUXER 0
#define CONFIG_NC_DEMUXER 0
#define CONFIG_NISTSPHERE_DEMUXER 0
#define CONFIG_NSV_DEMUXER 0
#define CONFIG_NULL_MUXER 0
#define CONFIG_NUT_MUXER 0
#define CONFIG_NUT_DEMUXER 0
#define CONFIG_OGG_MUXER 0
#define CONFIG_NUV_DEMUXER 0
#define CONFIG_OGG_DEMUXER 0
#define CONFIG_OMA_MUXER 0
#define CONFIG_OMA_DEMUXER 0
#define CONFIG_PAF_DEMUXER 0
#define CONFIG_PCM_ALAW_MUXER 0
#define CONFIG_PCM_ALAW_DEMUXER 0
#define CONFIG_PCM_MULAW_MUXER 0
#define CONFIG_PCM_MULAW_DEMUXER 0
#define CONFIG_PCM_F64BE_MUXER 0
#define CONFIG_PCM_F64BE_DEMUXER 0
#define CONFIG_PCM_F64LE_MUXER 0
#define CONFIG_PCM_F64LE_DEMUXER 0
#define CONFIG_PCM_F32BE_MUXER 0
#define CONFIG_PCM_F32BE_DEMUXER 0
#define CONFIG_PCM_F32LE_MUXER 0
#define CONFIG_PCM_F32LE_DEMUXER 0
#define CONFIG_PCM_S32BE_MUXER 0
#define CONFIG_PCM_S32BE_DEMUXER 0
#define CONFIG_PCM_S32LE_MUXER 0
#define CONFIG_PCM_S32LE_DEMUXER 0
#define CONFIG_PCM_S24BE_MUXER 0
#define CONFIG_PCM_S24BE_DEMUXER 0
#define CONFIG_PCM_S24LE_MUXER 0
#define CONFIG_PCM_S24LE_DEMUXER 0
#define CONFIG_PCM_S16BE_MUXER 0
#define CONFIG_PCM_S16BE_DEMUXER 0
#define CONFIG_PCM_S16LE_MUXER 0
#define CONFIG_PCM_S16LE_DEMUXER 0
#define CONFIG_PCM_S8_MUXER 0
#define CONFIG_PCM_S8_DEMUXER 0
#define CONFIG_PCM_U32BE_MUXER 0
#define CONFIG_PCM_U32BE_DEMUXER 0
#define CONFIG_PCM_U32LE_MUXER 0
#define CONFIG_PCM_U32LE_DEMUXER 0
#define CONFIG_PCM_U24BE_MUXER 0
#define CONFIG_PCM_U24BE_DEMUXER 0
#define CONFIG_PCM_U24LE_MUXER 0
#define CONFIG_PCM_U24LE_DEMUXER 0
#define CONFIG_PCM_U16BE_MUXER 0
#define CONFIG_PCM_U16BE_DEMUXER 0
#define CONFIG_PCM_U16LE_MUXER 0
#define CONFIG_PCM_U16LE_DEMUXER 0
#define CONFIG_PCM_U8_MUXER 0
#define CONFIG_PCM_U8_DEMUXER 0
#define CONFIG_PJS_DEMUXER 0
#define CONFIG_PMP_DEMUXER 0
#define CONFIG_PSP_MUXER 0
#define CONFIG_PVA_DEMUXER 0
#define CONFIG_PVF_DEMUXER 0
#define CONFIG_QCP_DEMUXER 0
#define CONFIG_R3D_DEMUXER 0
#define CONFIG_RAWVIDEO_MUXER 0
#define CONFIG_RAWVIDEO_DEMUXER 0
#define CONFIG_REALTEXT_DEMUXER 0
#define CONFIG_REDSPARK_DEMUXER 0
#define CONFIG_RL2_DEMUXER 0
#define CONFIG_RM_MUXER 0
#define CONFIG_RM_DEMUXER 0
#define CONFIG_ROQ_MUXER 0
#define CONFIG_ROQ_DEMUXER 0
#define CONFIG_RPL_DEMUXER 0
#define CONFIG_RSD_DEMUXER 0
#define CONFIG_RSO_MUXER 0
#define CONFIG_RSO_DEMUXER 0
#define CONFIG_RTP_MUXER 0
#define CONFIG_RTP_DEMUXER 0
#define CONFIG_RTSP_MUXER 0
#define CONFIG_RTSP_DEMUXER 0
#define CONFIG_SAMI_DEMUXER 0
#define CONFIG_SAP_MUXER 0
#define CONFIG_SAP_DEMUXER 0
#define CONFIG_SBG_DEMUXER 0
#define CONFIG_SDP_DEMUXER 0
#define CONFIG_SEGAFILM_DEMUXER 0
#define CONFIG_SEGMENT_MUXER 0
#define CONFIG_SHORTEN_DEMUXER 0
#define CONFIG_SIFF_DEMUXER 0
#define CONFIG_SMACKER_DEMUXER 0
#define CONFIG_SMJPEG_MUXER 0
#define CONFIG_SMJPEG_DEMUXER 0
#define CONFIG_SMOOTHSTREAMING_MUXER 0
#define CONFIG_SMUSH_DEMUXER 0
#define CONFIG_SOL_DEMUXER 0
#define CONFIG_SOX_MUXER 0
#define CONFIG_SOX_DEMUXER 0
#define CONFIG_SPDIF_MUXER 0
#define CONFIG_SPDIF_DEMUXER 1
#define CONFIG_SRT_MUXER 0
#define CONFIG_SRT_DEMUXER 0
#define CONFIG_STR_DEMUXER 0
#define CONFIG_SUBVIEWER1_DEMUXER 0
#define CONFIG_SUBVIEWER_DEMUXER 0
#define CONFIG_SWF_MUXER 0
#define CONFIG_SWF_DEMUXER 0
#define CONFIG_TAK_DEMUXER 1
#define CONFIG_TEE_MUXER 0
#define CONFIG_TEDCAPTIONS_DEMUXER 0
#define CONFIG_TG2_MUXER 0
#define CONFIG_TGP_MUXER 0
#define CONFIG_THP_DEMUXER 0
#define CONFIG_TIERTEXSEQ_DEMUXER 0
#define CONFIG_MKVTIMESTAMP_V2_MUXER 0
#define CONFIG_TMV_DEMUXER 0
#define CONFIG_TRUEHD_MUXER 0
#define CONFIG_TRUEHD_DEMUXER 0
#define CONFIG_TTA_DEMUXER 1
#define CONFIG_TXD_DEMUXER 0
#define CONFIG_TTY_DEMUXER 0
#define CONFIG_VC1_MUXER 0
#define CONFIG_VC1_DEMUXER 0
#define CONFIG_VC1T_MUXER 0
#define CONFIG_VC1T_DEMUXER 0
#define CONFIG_VIVO_DEMUXER 0
#define CONFIG_VMD_DEMUXER 0
#define CONFIG_VOBSUB_DEMUXER 0
#define CONFIG_VOC_MUXER 0
#define CONFIG_VOC_DEMUXER 0
#define CONFIG_VPLAYER_DEMUXER 0
#define CONFIG_VQF_DEMUXER 0
#define CONFIG_W64_MUXER 0
#define CONFIG_W64_DEMUXER 0
#define CONFIG_WAV_MUXER 0
#define CONFIG_WAV_DEMUXER 1
#define CONFIG_WC3_DEMUXER 0
#define CONFIG_WEBM_MUXER 0
#define CONFIG_WEBM_DEMUXER 0
#define CONFIG_WEBVTT_MUXER 0
#define CONFIG_WEBVTT_DEMUXER 0
#define CONFIG_WSAUD_DEMUXER 0
#define CONFIG_WSVQA_DEMUXER 0
#define CONFIG_WTV_MUXER 0
#define CONFIG_WTV_DEMUXER 0
#define CONFIG_WV_MUXER 0
#define CONFIG_WV_DEMUXER 0
#define CONFIG_XA_DEMUXER 0
#define CONFIG_XBIN_DEMUXER 0
#define CONFIG_XMV_DEMUXER 0
#define CONFIG_XWMA_DEMUXER 1
#define CONFIG_YOP_DEMUXER 0
#define CONFIG_YUV4MPEGPIPE_MUXER 0
#define CONFIG_YUV4MPEGPIPE_DEMUXER 0

#define CONFIG_BLURAY_PROTOCOL 0
#define CONFIG_CACHE_PROTOCOL 0
#define CONFIG_CONCAT_PROTOCOL 0
#define CONFIG_CRYPTO_PROTOCOL 0
#define CONFIG_DATA_PROTOCOL 0
#define CONFIG_FFRTMPCRYPT_PROTOCOL 0
#define CONFIG_FFRTMPHTTP_PROTOCOL 0
#define CONFIG_FILE_PROTOCOL 0
#define CONFIG_FTP_PROTOCOL 0
#define CONFIG_GOPHER_PROTOCOL 0
#define CONFIG_HLS_PROTOCOL 0
#define CONFIG_HTTP_PROTOCOL 0
#define CONFIG_HTTPPROXY_PROTOCOL 0
#define CONFIG_HTTPS_PROTOCOL 0
#define CONFIG_MMSH_PROTOCOL 0
#define CONFIG_MMST_PROTOCOL 0
#define CONFIG_MD5_PROTOCOL 0
#define CONFIG_PIPE_PROTOCOL 0
#define CONFIG_RTMP_PROTOCOL 0
#define CONFIG_RTMPE_PROTOCOL 0
#define CONFIG_RTMPS_PROTOCOL 0
#define CONFIG_RTMPT_PROTOCOL 0
#define CONFIG_RTMPTE_PROTOCOL 0
#define CONFIG_RTMPTS_PROTOCOL 0
#define CONFIG_RTP_PROTOCOL 0
#define CONFIG_SCTP_PROTOCOL 0
#define CONFIG_SRTP_PROTOCOL 0
#define CONFIG_TCP_PROTOCOL 0
#define CONFIG_TLS_PROTOCOL 0
#define CONFIG_UDP_PROTOCOL 0
#define CONFIG_UNIX_PROTOCOL 0

#define CONFIG_LIBGME_DEMUXER 0
#define CONFIG_LIBMODPLUG_DEMUXER 0
#define CONFIG_LIBNUT_MUXER 0
#define CONFIG_LIBNUT_DEMUXER 0
#define CONFIG_LIBQUVI_DEMUXER 0
#define CONFIG_LIBRTMP_PROTOCOL 0
#define CONFIG_LIBRTMPE_PROTOCOL 0
#define CONFIG_LIBRTMPS_PROTOCOL 0
#define CONFIG_LIBRTMPT_PROTOCOL 0
#define CONFIG_LIBRTMPTE_PROTOCOL 0
#define CONFIG_LIBSSH_PROTOCOL 0


#define av_restrict __restrict__
#define restrict __restrict__
#define av_export

#endif
