/*
 * Copyright (C) 2011 The Android Open Source Project
 * Copyright (C) 2012 Wolfson Microelectronics plc
 * Copyright (C) 2014 The CyanogenMod Project
 *               Daniel Hillenbrand <codeworkx@cyanogenmod.com>
 *               Guillaume "XpLoDWilD" Lesniak <xplodgui@gmail.com>
 *               Focus Chou <focuschou@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Mixer control names */
#define MIXER_DL2_LEFT_EQUALIZER            "DL2 Left Equalizer"
#define MIXER_DL2_RIGHT_EQUALIZER           "DL2 Right Equalizer"
#define MIXER_DL1_MEDIA_PLAYBACK_VOLUME     "DL1 Media Playback Volume"
#define MIXER_DL1_VOICE_PLAYBACK_VOLUME     "DL1 Voice Playback Volume"
#define MIXER_DL1_TONES_PLAYBACK_VOLUME     "DL1 Tones Playback Volume"
#define MIXER_DL2_MEDIA_PLAYBACK_VOLUME     "DL2 Media Playback Volume"
#define MIXER_DL2_VOICE_PLAYBACK_VOLUME     "DL2 Voice Playback Volume"
#define MIXER_DL2_TONES_PLAYBACK_VOLUME     "DL2 Tones Playback Volume"
#define MIXER_SDT_DL_VOLUME                 "SDT DL Volume"
#define MIXER_SDT_UL_VOLUME                 "SDT UL Volume"

#define MIXER_HEADSET_PLAYBACK_VOLUME       "Headset Playback Volume"
#define MIXER_HANDSFREE_PLAYBACK_VOLUME     "Handsfree Playback Volume"
#define MIXER_EARPHONE_PLAYBACK_VOLUME      "Earphone Playback Volume"
#define MIXER_BT_UL_VOLUME                  "BT UL Volume"

#define MIXER_DL1_EQUALIZER                 "DL1 Equalizer"
#define MIXER_DL1_MIXER_MULTIMEDIA          "DL1 Mixer Multimedia"
#define MIXER_DL1_MIXER_VOICE               "DL1 Mixer Voice"
#define MIXER_DL1_MIXER_TONES               "DL1 Mixer Tones"
#define MIXER_DL2_MIXER_MULTIMEDIA          "DL2 Mixer Multimedia"
#define MIXER_DL2_MIXER_VOICE               "DL2 Mixer Voice"
#define MIXER_DL2_MIXER_TONES               "DL2 Mixer Tones"
#define MIXER_SIDETONE_MIXER_PLAYBACK       "Sidetone Mixer Playback"
#define MIXER_SIDETONE_MIXER_CAPTURE        "Sidetone Mixer Capture"
#define MIXER_DL2_MONO_MIXER                "DL2 Mono Mixer"
#define MIXER_DL1_PDM_SWITCH                "DL1 PDM Switch"
#define MIXER_DL1_BT_VX_SWITCH              "DL1 BT_VX Switch"
#define MIXER_VOICE_CAPTURE_MIXER_CAPTURE   "Voice Capture Mixer Capture"

#define MIXER_HS_LEFT_PLAYBACK              "HS Left Playback"
#define MIXER_HS_RIGHT_PLAYBACK             "HS Right Playback"
#define MIXER_HF_LEFT_PLAYBACK              "HF Left Playback"
#define MIXER_HF_RIGHT_PLAYBACK             "HF Right Playback"
#define MIXER_EARPHONE_ENABLE_SWITCH        "Earphone Playback Switch"

#define MIXER_ANALOG_LEFT_CAPTURE_ROUTE     "Analog Left Capture Route"
#define MIXER_ANALOG_RIGHT_CAPTURE_ROUTE    "Analog Right Capture Route"
#define MIXER_CAPTURE_PREAMPLIFIER_VOLUME   "Capture Preamplifier Volume"
#define MIXER_CAPTURE_VOLUME                "Capture Volume"
#define MIXER_AMIC_UL_VOLUME                "AMIC UL Volume"
#define MIXER_AUDUL_VOICE_UL_VOLUME         "AUDUL Voice UL Volume"
#define MIXER_MUX_VX0                       "MUX_VX0"
#define MIXER_MUX_VX1                       "MUX_VX1"
#define MIXER_MUX_UL10                      "MUX_UL10"
#define MIXER_MUX_UL11                      "MUX_UL11"

/* Mixer control gain and route values */
#define MIXER_ABE_GAIN_0DB                  120
#define MIXER_PLAYBACK_HS_DAC               "HS DAC"
#define MIXER_PLAYBACK_HF_DAC               "HF DAC"
#define MIXER_MAIN_MIC                      "Main Mic"
#define MIXER_SUB_MIC                       "Sub Mic"
#define MIXER_HS_MIC                        "Headset Mic"
#define MIXER_AMIC0                         "AMic0"
#define MIXER_AMIC1                         "AMic1"
#define MIXER_BT_LEFT                       "BT Left"
#define MIXER_BT_RIGHT                      "BT Right"
#define MIXER_450HZ_HIGH_PASS               "450Hz High-pass"
#define MIXER_FLAT_RESPONSE                 "Flat response"
#define MIXER_4KHZ_LPF_0DB                  "4Khz LPF   0dB"

/* HDMI mixer controls */
#define MIXER_MAXIMUM_LPCM_CHANNELS         "Maximum LPCM channels"

/* ALSA cards for OMAP4 */
#define CARD_OMAP4_ABE 0
#define CARD_OMAP4_HDMI 1
#define CARD_PIRANHA_DEFAULT CARD_OMAP4_ABE

/* ALSA ports for OMAP4 */
#define PORT_MM 0
#define PORT_MM2_UL 1
#define PORT_VX 2
#define PORT_TONES 3
#define PORT_VIBRA 4
#define PORT_MODEM 5
#define PORT_MM_LP 6
#define PORT_SPDIF 9
#define PORT_HDMI 0

/* User serviceable */
/* #define to use mmap no-irq mode for playback, #undef for non-mmap irq mode */
#undef PLAYBACK_MMAP        // was #define
/* short period (aka low latency) in milliseconds */
#define SHORT_PERIOD_MS 3   // was 22
/* deep buffer short period (screen on) in milliseconds */
#define DEEP_BUFFER_SHORT_PERIOD_MS 22
/* deep buffer long period (screen off) in milliseconds */
#define DEEP_BUFFER_LONG_PERIOD_MS 308

/* Constraint imposed by ABE: for playback, all period sizes must be multiples of 24 frames
 * = 500 us at 48 kHz.  It seems to be either 48 or 96 for capture, or maybe it is because the
 * limitation is actually a min number of bytes which translates to a different amount of frames
 * according to the number of channels.
 */
#define ABE_BASE_FRAME_COUNT 24

/* Derived from MM_FULL_POWER_SAMPLING_RATE=48000 and ABE_BASE_FRAME_COUNT=24 */
#define MULTIPLIER_FACTOR 2

/* number of base blocks in a short period (low latency) */
#define SHORT_PERIOD_MULTIPLIER (SHORT_PERIOD_MS * MULTIPLIER_FACTOR)
/* number of frames per short period (low latency) */
#define SHORT_PERIOD_SIZE (ABE_BASE_FRAME_COUNT * SHORT_PERIOD_MULTIPLIER)

/* number of base blocks in a short deep buffer period (screen on) */
#define DEEP_BUFFER_SHORT_PERIOD_MULTIPLIER (DEEP_BUFFER_SHORT_PERIOD_MS * MULTIPLIER_FACTOR)
/* number of frames per short deep buffer period (screen on) */
#define DEEP_BUFFER_SHORT_PERIOD_SIZE (ABE_BASE_FRAME_COUNT * DEEP_BUFFER_SHORT_PERIOD_MULTIPLIER)
/* number of periods for deep buffer playback (screen on) */
#define PLAYBACK_DEEP_BUFFER_SHORT_PERIOD_COUNT 4

/* number of short deep buffer periods in a long period */
#define DEEP_BUFFER_LONG_PERIOD_MULTIPLIER \
                            (DEEP_BUFFER_LONG_PERIOD_MS / DEEP_BUFFER_SHORT_PERIOD_MS)
/* number of frames per long deep buffer period (screen off) */
#define DEEP_BUFFER_LONG_PERIOD_SIZE \
                            (DEEP_BUFFER_SHORT_PERIOD_SIZE * DEEP_BUFFER_LONG_PERIOD_MULTIPLIER)
/* number of periods for deep buffer playback (screen off) */
#define PLAYBACK_DEEP_BUFFER_LONG_PERIOD_COUNT 2

/* number of frames per period for HDMI multichannel output */
#define HDMI_MULTI_PERIOD_SIZE  1024
/* number of periods for HDMI multichannel output */
#define HDMI_MULTI_PERIOD_COUNT 4
/* default number of channels for HDMI multichannel output */
#define HDMI_MULTI_DEFAULT_CHANNEL_COUNT 6

/* Number of pseudo periods for low latency playback.
 * These are called "pseudo" periods in that they are not known as periods by ALSA.
 * Formerly, ALSA was configured in MMAP mode with 2 large periods, and this
 * number was set to 4 (2 didn't work).
 * The short periods size and count were only known by the audio HAL.
 * Now for low latency, we are using non-MMAP mode and can set this to 2.
 */
#ifdef PLAYBACK_MMAP
#define PLAYBACK_SHORT_PERIOD_COUNT 4
/* If sample rate converter is required, then use triple-buffering to
 * help mask the variance in cycle times.  Otherwise use double-buffering.
 */
#elif DEFAULT_OUT_SAMPLING_RATE != MM_FULL_POWER_SAMPLING_RATE
#define PLAYBACK_SHORT_PERIOD_COUNT 3
#else
#define PLAYBACK_SHORT_PERIOD_COUNT 2
#endif

/* write function */
#ifdef PLAYBACK_MMAP
#define PCM_WRITE pcm_mmap_write
#else
#define PCM_WRITE pcm_write
#endif

/* User serviceable */
#define CAPTURE_PERIOD_MS 22

/* Number of frames per period for capture.  This cannot be reduced below 96.
 * Possibly related to the following rule in sound/soc/omap/omap-pcm.c:
 *  ret = snd_pcm_hw_constraint_step(runtime, 0, SNDRV_PCM_HW_PARAM_BUFFER_BYTES, 384);
 *      (where 96 * 4 = 384)
 * The only constraints I can find are periods_min = 2, period_bytes_min = 32.
 * If you define RULES_DEBUG in sound/core/pcm_native.c, you can see which rule
 * caused capture to fail.
 * Decoupling playback and capture period size may have impacts on echo canceler behavior:
 * to be verified.  Currently 96 = 4 x 24 but it could be changed without noticing
 * if we use separate defines.
 */
#define CAPTURE_PERIOD_SIZE (ABE_BASE_FRAME_COUNT * CAPTURE_PERIOD_MS * MULTIPLIER_FACTOR)
/* number of periods for capture */
#define CAPTURE_PERIOD_COUNT 2
/* minimum sleep time in out_write() when write threshold is not reached */
#define MIN_WRITE_SLEEP_US 5000

#define DEFAULT_OUT_SAMPLING_RATE 44100 // 48000 is possible but interacts poorly with HDMI

/* sampling rate when using MM low power port */
#define MM_LOW_POWER_SAMPLING_RATE 44100
/* sampling rate when using MM full power port */
#define MM_FULL_POWER_SAMPLING_RATE 48000   // affects MULTIPLIER_FACTOR
/* sampling rate when using VX port for narrow band */
#define VX_NB_SAMPLING_RATE 8000
/* sampling rate when using VX port for wide band */
#define VX_WB_SAMPLING_RATE 16000

/* conversions from dB to ABE and codec gains */
#define DB_TO_ABE_GAIN(x) ((x) + MIXER_ABE_GAIN_0DB)
#define DB_TO_CAPTURE_PREAMPLIFIER_VOLUME(x) (((x) + 6) / 6)
#define DB_TO_CAPTURE_VOLUME(x) (((x) - 6) / 6)
#define DB_TO_HEADSET_VOLUME(x) (((x) + 30) / 2)
#define DB_TO_SPEAKER_VOLUME(x) (((x) + 52) / 2)
#define DB_TO_EARPIECE_VOLUME(x) (((x) + 24) / 2)

/* conversions from codec and ABE gains to dB */
#define DB_FROM_SPEAKER_VOLUME(x) ((x) * 2 - 52)

/* use-case specific mic volumes, all in dB */
#define CAPTURE_MAIN_MIC_VOLUME 16
#define CAPTURE_SUB_MIC_VOLUME 18
#define CAPTURE_HEADSET_MIC_VOLUME 12

#define VOICE_RECOGNITION_MAIN_MIC_VOLUME 5
#define VOICE_RECOGNITION_SUB_MIC_VOLUME 18
#define VOICE_RECOGNITION_HEADSET_MIC_VOLUME 14

#define CAMCORDER_MAIN_MIC_VOLUME 13
#define CAMCORDER_SUB_MIC_VOLUME 10
#define CAMCORDER_HEADSET_MIC_VOLUME 12

#define VOIP_MAIN_MIC_VOLUME 13
#define VOIP_SUB_MIC_VOLUME 20
#define VOIP_HEADSET_MIC_VOLUME 12

#define VOICE_CALL_MAIN_MIC_VOLUME 0
#define VOICE_CALL_SUB_MIC_VOLUME -4
#define VOICE_CALL_HEADSET_MIC_VOLUME 8

/* use-case specific output volumes */
#define NORMAL_SPEAKER_VOLUME 0
#define NORMAL_HEADSET_VOLUME -12
#define NORMAL_HEADPHONE_VOLUME -6
#define NORMAL_EARPIECE_VOLUME -2

#define VOICE_CALL_SPEAKER_VOLUME 1
#define VOICE_CALL_HEADSET_VOLUME 0
#define VOICE_CALL_EARPIECE_VOLUME 6

#define VOIP_SPEAKER_VOLUME 1
#define VOIP_HEADSET_VOLUME -6
#define VOIP_EARPIECE_VOLUME 6

#define HEADPHONE_VOLUME_TTY -2
#define RINGTONE_HEADSET_VOLUME_OFFSET -14

/* product-specific defines */
#define PRODUCT_DEVICE_PROPERTY "ro.product.device"
#define PRODUCT_NAME_PROPERTY   "ro.product.name"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

#define STRING_TO_ENUM(string) { #string, string }

struct string_to_enum {
    const char *name;
    uint32_t value;
};

const struct string_to_enum out_channels_name_to_enum_table[] = {
    STRING_TO_ENUM(AUDIO_CHANNEL_OUT_STEREO),
    STRING_TO_ENUM(AUDIO_CHANNEL_OUT_5POINT1),
    STRING_TO_ENUM(AUDIO_CHANNEL_OUT_7POINT1),
};

enum pcm_type {
    PCM_NORMAL = 0,
    PCM_SPDIF,
    PCM_HDMI,
    PCM_TOTAL,
};

enum output_type {
    OUTPUT_DEEP_BUF,      // deep PCM buffers output stream
    OUTPUT_LOW_LATENCY,   // low latency output stream
    OUTPUT_HDMI,
    OUTPUT_TOTAL
};

enum tty_modes {
    TTY_MODE_OFF,
    TTY_MODE_VCO,
    TTY_MODE_HCO,
    TTY_MODE_FULL
};

struct mixer_ctls
{
    struct mixer_ctl *dl1_eq;
    struct mixer_ctl *mm_dl1_volume;
    struct mixer_ctl *tones_dl1_volume;
    struct mixer_ctl *mm_dl2_volume;
    struct mixer_ctl *vx_dl2_volume;
    struct mixer_ctl *tones_dl2_volume;
    struct mixer_ctl *mm_dl1;
    struct mixer_ctl *mm_dl2;
    struct mixer_ctl *vx_dl1;
    struct mixer_ctl *vx_dl2;
    struct mixer_ctl *tones_dl1;
    struct mixer_ctl *tones_dl2;
    struct mixer_ctl *earpiece_enable;
    struct mixer_ctl *dl2_mono;
    struct mixer_ctl *dl1_headset;
    struct mixer_ctl *dl1_bt;
    struct mixer_ctl *left_capture;
    struct mixer_ctl *right_capture;
    struct mixer_ctl *amic_ul_volume;
    struct mixer_ctl *voice_ul_volume;
    struct mixer_ctl *sidetone_capture;
    struct mixer_ctl *headset_volume;
    struct mixer_ctl *speaker_volume;
    struct mixer_ctl *earpiece_volume;
};

struct route_setting
{
    char *ctl_name;
    int intval;
    char *strval;
};

/* These are values that never change */
struct route_setting defaults[] = {
    /* general */
    {
        .ctl_name = MIXER_DL2_LEFT_EQUALIZER,
        .strval = MIXER_450HZ_HIGH_PASS,
    },
    {
        .ctl_name = MIXER_DL2_RIGHT_EQUALIZER,
        .strval = MIXER_450HZ_HIGH_PASS,
    },
    {
        .ctl_name = MIXER_DL1_MEDIA_PLAYBACK_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_DL2_MEDIA_PLAYBACK_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_DL1_VOICE_PLAYBACK_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_DL2_VOICE_PLAYBACK_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_DL1_TONES_PLAYBACK_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_DL2_TONES_PLAYBACK_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_SDT_DL_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_AUDUL_VOICE_UL_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = MIXER_CAPTURE_PREAMPLIFIER_VOLUME,
        .intval = DB_TO_CAPTURE_PREAMPLIFIER_VOLUME(0),
    },
    {
        .ctl_name = MIXER_CAPTURE_VOLUME,
        .intval = DB_TO_CAPTURE_VOLUME(30),
    },
    {
        .ctl_name = MIXER_SDT_UL_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB - 17,
    },
    {
        .ctl_name = MIXER_SIDETONE_MIXER_CAPTURE,
        .intval = 0,
    },

    /* headset */
    {
        .ctl_name = MIXER_SIDETONE_MIXER_PLAYBACK,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_DL1_PDM_SWITCH,
        .intval = 1,
    },

    /* bt */
    {
        .ctl_name = MIXER_BT_UL_VOLUME,
        .intval = MIXER_ABE_GAIN_0DB,
    },
    {
        .ctl_name = NULL,
    },
};

struct route_setting hf_output[] = {
    {
        .ctl_name = MIXER_HF_LEFT_PLAYBACK,
        .strval = MIXER_PLAYBACK_HF_DAC,
    },
    {
        .ctl_name = MIXER_HF_RIGHT_PLAYBACK,
        .strval = MIXER_PLAYBACK_HF_DAC,
    },
    {
        .ctl_name = NULL,
    },
};

struct route_setting hs_output[] = {
    {
        .ctl_name = MIXER_HS_LEFT_PLAYBACK,
        .strval = MIXER_PLAYBACK_HS_DAC,
    },
    {
        .ctl_name = MIXER_HS_RIGHT_PLAYBACK,
        .strval = MIXER_PLAYBACK_HS_DAC,
    },
    {
        .ctl_name = NULL,
    },
};

/* MM UL front-end paths */
struct route_setting mm_ul2_bt[] = {
    {
        .ctl_name = MIXER_MUX_UL10,
        .strval = MIXER_BT_LEFT,
    },
    {
        .ctl_name = MIXER_MUX_UL11,
        .strval = MIXER_BT_LEFT,
    },
    {
        .ctl_name = NULL,
    },
};

struct route_setting mm_ul2_amic_left[] = {
    {
        .ctl_name = MIXER_MUX_UL10,
        .strval = MIXER_AMIC0,
    },
    {
        .ctl_name = MIXER_MUX_UL11,
        .strval = MIXER_AMIC0,
    },
    {
        .ctl_name = NULL,
    },
};

struct route_setting mm_ul2_amic_right[] = {
    {
        .ctl_name = MIXER_MUX_UL10,
        .strval = MIXER_AMIC1,
    },
    {
        .ctl_name = MIXER_MUX_UL11,
        .strval = MIXER_AMIC1,
    },
    {
        .ctl_name = NULL,
    },
};

/* dual mic configuration with main mic on main channel and sub mic on aux channel.
 * Used for handset mode (near talk)  */
struct route_setting mm_ul2_amic_dual_main_sub[] = {
    {
        .ctl_name = MIXER_MUX_UL10,
        .strval = MIXER_AMIC0,
    },
    {
        .ctl_name = MIXER_MUX_UL11,
        .strval = MIXER_AMIC1,
    },
    {
        .ctl_name = NULL,
    },
};

/* dual mic configuration with sub mic on main channel and main mic on aux channel.
 * Used for speakerphone mode (far talk)  */
struct route_setting mm_ul2_amic_dual_sub_main[] = {
    {
        .ctl_name = MIXER_MUX_UL10,
        .strval = MIXER_AMIC1,
    },
    {
        .ctl_name = MIXER_MUX_UL11,
        .strval = MIXER_AMIC0,
    },
    {
        .ctl_name = NULL,
    },
};

/* VX UL front-end paths */
struct route_setting vx_ul_amic_left[] = {
    {
        .ctl_name = MIXER_MUX_VX0,
        .strval = MIXER_AMIC0,
    },
    {
        .ctl_name = MIXER_MUX_VX1,
        .strval = MIXER_AMIC0,
    },
    {
        .ctl_name = MIXER_VOICE_CAPTURE_MIXER_CAPTURE,
        .intval = 1,
    },
    {
        .ctl_name = NULL,
    },
};

struct route_setting vx_ul_amic_right[] = {
    {
        .ctl_name = MIXER_MUX_VX0,
        .strval = MIXER_AMIC1,
    },
    {
        .ctl_name = MIXER_MUX_VX1,
        .strval = MIXER_AMIC1,
    },
    {
        .ctl_name = MIXER_VOICE_CAPTURE_MIXER_CAPTURE,
        .intval = 1,
    },
    {
        .ctl_name = NULL,
    },
};

struct route_setting vx_ul_bt[] = {
    {
        .ctl_name = MIXER_MUX_VX0,
        .strval = MIXER_BT_LEFT,
    },
    {
        .ctl_name = MIXER_MUX_VX1,
        .strval = MIXER_BT_LEFT,
    },
    {
        .ctl_name = MIXER_DL1_PDM_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_DL1_MIXER_TONES,
        .intval = 0,
    },
    {
        .ctl_name = MIXER_VOICE_CAPTURE_MIXER_CAPTURE,
        .intval = 1,
    },
    {
        .ctl_name = NULL,
    },
};
