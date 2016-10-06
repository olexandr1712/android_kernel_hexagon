/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_ver1_volume_custom_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Chipeng chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H
#define AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H

//<2014/03/25-samhaung, add define to split audio Gain for LO1/LO2
#if defined(ARIMA_LO1_HW)

#define VER1_AUD_VOLUME_RING \
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    128,136,144,152,160,168,176,184,192,200,212,224,236,248,255,\
    128,136,144,152,160,168,176,184,192,200,212,224,236,248,255

#define VER1_AUD_VOLUME_SIP \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MIC \
    64,112,208,168,208,192,184,184,184,184,184,184,184,184,184,\
    255,192,208,180,208,192,196,184,184,184,184,0,0,0,0,\
    255,208,208,200,255,208,196,0,0,0,0,0,0,0,0,\
    255,208,208,164,255,208,172,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_FM \
    32,48,64,80,96,112,128,144,160,176,192,208,224,255,255,\
    88,100,112,124,136,148,160,172,184,196,208,220,232,244,255,\
    68,80,92,104,116,128,140,152,168,176,188,200,212,232,248,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,255,255

#define VER1_AUD_VOLUME_SPH \
    64,76,88,100,112,124,136,0,0,0,0,0,0,0,0,\
    68,80,92,104,116,128,140,0,0,0,0,0,0,0,0,\
    64,80,96,112,128,144,160,0,0,0,0,0,0,0,0,\
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SID \
    255,240,240,128,240,240,240,0,0,0,0,0,0,0,0,\
    0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MEDIA \
    32,48,64,80,96,112,160,144,160,176,192,208,224,240,255,\
    82,94,106,118,130,142,154,166,178,190,202,214,226,238,250,\
    68,80,92,104,116,128,140,152,168,176,188,200,212,232,248,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255

#define VER1_AUD_VOLUME_MATV \
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    88,100,112,124,136,148,160,172,184,196,208,220,232,244,255,\
    68,80,92,104,116,128,140,152,168,176,188,200,212,232,248,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255

#define VER1_AUD_NORMAL_VOLUME_DEFAULT \
    128,128,128,128,128,128

#define VER1_AUD_HEADSER_VOLUME_DEFAULT \
    128,148,148,148,148,148

#define VER1_AUD_SPEAKER_VOLUME_DEFAULT \
    150,120,120,120,120,120

#define VER1_AUD_HEADSETSPEAKER_VOLUME_DEFAULT \
    112,160,132,132,132,132,132,132

#define VER1_AUD_EXTAMP_VOLUME_DEFAULT \
    132,132,132,132,132,132

#define VER1_AUD_VOLUME_LEVEL_DEFAULT \
    15,7,15,15,7,7,7,15,15

#else //ARIMA_LO1_HW

//<2014-03-22-35172-PengXu,[5503][Audio]update audio parameters for lo2
#define VER1_AUD_VOLUME_RING \
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    84,88,92,96,108,120,132,140,148,156,164,172,188,212,252,\
    60,72,84,96,108,120,132,144,156,168,180,192,208,224,252

#define VER1_AUD_VOLUME_SIP \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MIC \
    0,0,180,152,180,150,0,0,0,0,0,0,0,0,0,\
    0,0,192,200,192,150,0,0,0,0,0,0,0,0,0,\
    0,0,208,168,255,0,0,0,0,0,0,0,0,0,0,\
    255,208,208,164,255,208,172,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_FM \
    32,48,64,80,96,112,128,144,160,176,192,208,224,255,255,\
    88,100,112,124,136,148,160,172,184,196,208,220,232,244,255,\
    68,80,92,104,116,128,140,152,168,176,188,200,212,232,248,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,255,255

#define VER1_AUD_VOLUME_SPH \
    60,76,92,108,120,136,152,0,0,0,0,0,0,0,0,\
    64,76,88,100,112,124,136,0,0,0,0,0,0,0,0,\
    56,72,88,104,120,136,152,0,0,0,0,0,0,0,0,\
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SID \
    0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MEDIA \
    32,48,64,80,96,112,160,144,160,176,192,208,224,240,255,\
    84,96,108,120,132,144,156,168,180,192,204,216,228,240,252,\
    60,72,84,96,108,120,132,144,156,168,180,192,208,224,252,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255

#define VER1_AUD_VOLUME_MATV \
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    88,100,112,124,136,148,160,172,184,196,208,220,232,244,255,\
    68,80,92,104,116,128,140,152,168,176,188,200,212,232,248,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255

#define VER1_AUD_NORMAL_VOLUME_DEFAULT \
    128,128,128,128,128,128

#define VER1_AUD_HEADSER_VOLUME_DEFAULT \
    120,148,148,148,148,148

#define VER1_AUD_SPEAKER_VOLUME_DEFAULT \
    152,120,120,120,120,120

#define VER1_AUD_HEADSETSPEAKER_VOLUME_DEFAULT \
    112,160,132,132,132,132,132,132

#define VER1_AUD_EXTAMP_VOLUME_DEFAULT \
    132,132,132,132,132,132

#define VER1_AUD_VOLUME_LEVEL_DEFAULT \
    15,7,15,15,7,7,7,15,15

#endif
//>2014/03/25-samhuang

#endif