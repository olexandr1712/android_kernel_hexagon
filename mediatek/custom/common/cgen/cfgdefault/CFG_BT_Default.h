#ifndef _CFG_BT_DEFAULT_H
#define _CFG_BT_DEFAULT_H

///#include "../cfgfileinc/CFG_BT_File.h"

// the default value of bt nvram file
#ifdef MTK_COMBO_SUPPORT

static ap_nvram_btradio_struct stBtDefault_6620 =
{
    {0x00, 0x00, 0x46, 0x66, 0x20, 0x01},
    {0x60, 0x00},
    {0x23, 0x10, 0x00, 0x00},
    {0x06, 0x80, 0x00, 0x06, 0x03, 0x06},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00},
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6628 =
{
    {0x00, 0x00, 0x46, 0x66, 0x28, 0x01},
    {0x60, 0x00},
#if defined(MTK_MERGE_INTERFACE_SUPPORT)
    {0x63, 0x10, 0x00, 0x00},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00},
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6572 =
{
    {0x00, 0x00, 0x46, 0x65, 0x72, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
//<2014/03/17-samhuang, adj BT TX power
#if defined(ARIMA_LO1_HW)
    {0x07, 0x05, 0x03},
#elif defined(ARIMA_LO2_HW)
    {0xFF, 0xFF, 0xFF},
#else
    {0xFF, 0xFF, 0xFF},
#endif
//>2014/03/17-samhuang
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6582 =
{
    {0x00, 0x00, 0x46, 0x65, 0x82, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6592 =
{
    {0x00, 0x00, 0x46, 0x65, 0x92, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6571 =
{
    {0x00, 0x00, 0x46, 0x65, 0x71, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6630 =
{
    {0x00, 0x00, 0x46, 0x66, 0x30, 0x01},
    {0x60, 0x00}, //not used
#if defined(MTK_MERGE_INTERFACE_SUPPORT)
    {0x63, 0x10, 0x00, 0x00},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_8127 =
{
    {0x00, 0x00, 0x46, 0x81, 0x27, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

#else
// MT661x is phased out, current for MT662x
static ap_nvram_btradio_struct stBtDefault =
{
#if defined(MTK_MT6622)
    {0x00, 0x00, 0x46, 0x66, 0x22, 0x01}, //addr
#else
    {0x00, 0x00, 0x46, 0x66, 0x26, 0x01},
#endif
    {0x40}, //CapId
    {0x01}, //LinkKeyType
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //UintKey
    {0x00, 0x02, 0x10}, //Encryption
    {0x00}, //PinCodeType
    {0x60, 0x00}, //Voice
    {0x23, 0x00, 0x00, 0x00}, //Codec
    {0x07, 0x80, 0x00, 0x06, 0x03, 0x07}, //Radio
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04}, //Sleep
    {0x80, 0x00}, //BtFTR
    {0x00}, //ECLK_SEL
    ///////////// Reserved /////////////
    {0x00},
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};
#endif

#endif
