/* Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_OTM1901_1080P_VIDEO_H_
#define _PANEL_OTM1901_1080P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config otm1901_1080p_video_panel_data = {
	"qcom,mdss_dsi_otm1901_1080p_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution otm1901_1080p_video_panel_res = {
	1080, 1920, 104, 56, 20, 0, 18, 19, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info otm1901_1080p_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/

static char otm1901_1080p_cmd1[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd2[] = {0x05,0x00,0x39,0xC0,0xFF,0x19,0x01,0x01,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd3[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd4[] = {0x03,0x00,0x39,0xC0,0xFF,0x19,0x01,0xff};
static char otm1901_1080p_cmd5[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd6[] = {0x02,0x00,0x39,0xC0,0x1C,0x33,0xff,0xff};
static char otm1901_1080p_cmd7[] = {0x02,0x00,0x39,0xC0,0x00,0xA0,0xff,0xff};
static char otm1901_1080p_cmd8[] = {0x02,0x00,0x39,0xC0,0xC1,0xE8,0xff,0xff};
static char otm1901_1080p_cmd9[] = {0x02,0x00,0x39,0xC0,0x00,0xA7,0xff,0xff};
static char otm1901_1080p_cmd10[] = {0x02,0x00,0x39,0xC0,0xC1,0x00,0xff,0xff};
static char otm1901_1080p_cmd11[] = {0x02,0x00,0x39,0xC0,0x00,0x90,0xff,0xff};
static char otm1901_1080p_cmd12[] = {0x07,0x00,0x39,0xC0,0xC0,0x00,0x2F,0x00,0x00,0x00,0x01,0xff};
static char otm1901_1080p_cmd13[] = {0x02,0x00,0x39,0xC0,0x00,0xC0,0xff,0xff};
static char otm1901_1080p_cmd14[] = {0x07,0x00,0x39,0xC0,0xC0,0x00,0x2F,0x00,0x00,0x00,0x01,0xff};
static char otm1901_1080p_cmd15[] = {0x02,0x00,0x39,0xC0,0x00,0x9A,0xff,0xff};
static char otm1901_1080p_cmd16[] = {0x02,0x00,0x39,0xC0,0xC0,0x1E,0xff,0xff};
static char otm1901_1080p_cmd17[] = {0x02,0x00,0x39,0xC0,0x00,0xAC,0xff,0xff};
static char otm1901_1080p_cmd18[] = {0x02,0x00,0x39,0xC0,0xC0,0x06,0xff,0xff};
static char otm1901_1080p_cmd19[] = {0x02,0x00,0x39,0xC0,0x00,0xDC,0xff,0xff};
static char otm1901_1080p_cmd20[] = {0x02,0x00,0x39,0xC0,0xC0,0x06,0xff,0xff};
static char otm1901_1080p_cmd21[] = {0x02,0x00,0x39,0xC0,0x00,0x81,0xff,0xff};
static char otm1901_1080p_cmd22[] = {0x02,0x00,0x39,0xC0,0xA5,0x06,0xff,0xff};
static char otm1901_1080p_cmd23[] = {0x02,0x00,0x39,0xC0,0x00,0x82,0xff,0xff};
static char otm1901_1080p_cmd24[] = {0x02,0x00,0x39,0xC0,0xC4,0xF0,0xff,0xff};
static char otm1901_1080p_cmd25[] = {0x02,0x00,0x39,0xC0,0x00,0x92,0xff,0xff};
static char otm1901_1080p_cmd26[] = {0x02,0x00,0x39,0xC0,0xE9,0x00,0xff,0xff};
static char otm1901_1080p_cmd27[] = {0x02,0x00,0x39,0xC0,0x00,0x90,0xff,0xff};
static char otm1901_1080p_cmd28[] = {0x02,0x00,0x39,0xC0,0xF3,0x01,0xff,0xff};
static char otm1901_1080p_cmd29[] = {0x02,0x00,0x39,0xC0,0x00,0x93,0xff,0xff};
static char otm1901_1080p_cmd30[] = {0x02,0x00,0x39,0xC0,0xC5,0x1E,0xff,0xff};
static char otm1901_1080p_cmd31[] = {0x02,0x00,0x39,0xC0,0x00,0x95,0xff,0xff};
static char otm1901_1080p_cmd32[] = {0x02,0x00,0x39,0xC0,0xC5,0x32,0xff,0xff};
static char otm1901_1080p_cmd33[] = {0x02,0x00,0x39,0xC0,0x00,0x97,0xff,0xff};
static char otm1901_1080p_cmd34[] = {0x02,0x00,0x39,0xC0,0xC5,0x19,0xff,0xff};
static char otm1901_1080p_cmd35[] = {0x02,0x00,0x39,0xC0,0x00,0x99,0xff,0xff};
static char otm1901_1080p_cmd36[] = {0x02,0x00,0x39,0xC0,0xC5,0x2D,0xff,0xff};
static char otm1901_1080p_cmd37[] = {0x02,0x00,0x39,0xC0,0x00,0x9B,0xff,0xff};
static char otm1901_1080p_cmd38[] = {0x03,0x00,0x39,0xC0,0xC5,0x44,0x40,0xff};
static char otm1901_1080p_cmd39[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd40[] = {0x03,0x00,0x39,0xC0,0xD9,0x00,0xA4,0xff};
static char otm1901_1080p_cmd41[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd42[] = {0x03,0x00,0x39,0xC0,0xD8,0x1F,0x1F,0xff};
static char otm1901_1080p_cmd43[] = {0x02,0x00,0x39,0xC0,0x00,0xB3,0xff,0xff};
static char otm1901_1080p_cmd44[] = {0x02,0x00,0x39,0xC0,0xC0,0xCC,0xff,0xff};
static char otm1901_1080p_cmd45[] = {0x02,0x00,0x39,0xC0,0x00,0xBC,0xff,0xff};
static char otm1901_1080p_cmd46[] = {0x02,0x00,0x39,0xC0,0xC0,0x00,0xff,0xff};
static char otm1901_1080p_cmd47[] = {0x02,0x00,0x39,0xC0,0x00,0x84,0xff,0xff};
static char otm1901_1080p_cmd48[] = {0x02,0x00,0x39,0xC0,0xC4,0x22,0xff,0xff};
static char otm1901_1080p_cmd49[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd50[] = {0x02,0x00,0x39,0xC0,0xC4,0x38,0xff,0xff};
static char otm1901_1080p_cmd51[] = {0x02,0x00,0x39,0xC0,0x00,0x94,0xff,0xff};
static char otm1901_1080p_cmd52[] = {0x02,0x00,0x39,0xC0,0xC1,0x84,0xff,0xff};
static char otm1901_1080p_cmd53[] = {0x02,0x00,0x39,0xC0,0x00,0x98,0xff,0xff};
static char otm1901_1080p_cmd54[] = {0x02,0x00,0x39,0xC0,0xC1,0x74,0xff,0xff};
static char otm1901_1080p_cmd55[] = {0x02,0x00,0x39,0xC0,0x00,0xCD,0xff,0xff};
static char otm1901_1080p_cmd56[] = {0x02,0x00,0x39,0xC0,0xF5,0x19,0xff,0xff};
static char otm1901_1080p_cmd57[] = {0x02,0x00,0x39,0xC0,0x00,0xDB,0xff,0xff};
static char otm1901_1080p_cmd58[] = {0x02,0x00,0x39,0xC0,0xF5,0x19,0xff,0xff};
static char otm1901_1080p_cmd59[] = {0x02,0x00,0x39,0xC0,0x00,0xF5,0xff,0xff};
static char otm1901_1080p_cmd60[] = {0x02,0x00,0x39,0xC0,0xC1,0x40,0xff,0xff};
static char otm1901_1080p_cmd61[] = {0x02,0x00,0x39,0xC0,0x00,0xB9,0xff,0xff};
static char otm1901_1080p_cmd62[] = {0x02,0x00,0x39,0xC0,0xC0,0x11,0xff,0xff};
static char otm1901_1080p_cmd63[] = {0x02,0x00,0x39,0xC0,0x00,0x8D,0xff,0xff};
static char otm1901_1080p_cmd64[] = {0x02,0x00,0x39,0xC0,0xF5,0x20,0xff,0xff};
static char otm1901_1080p_cmd65[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd66[] = {0x0F,0x00,0x39,0xC0,0xC0,0x00,0x86,0x00,0x0A,0x0A,0x00,0x86,0x0A,0x0A,0x00,0x86,0x00,0x0A,0x0A,0xff};
static char otm1901_1080p_cmd67[] = {0x02,0x00,0x39,0xC0,0x00,0xF0,0xff,0xff};
static char otm1901_1080p_cmd68[] = {0x07,0x00,0x39,0xC0,0xC3,0x00,0x00,0x00,0x00,0x00,0x80,0xff};
static char otm1901_1080p_cmd69[] = {0x02,0x00,0x39,0xC0,0x00,0xA0,0xff,0xff};
static char otm1901_1080p_cmd70[] = {0x08,0x00,0x39,0xC0,0xC0,0x00,0x00,0x03,0x00,0x00,0x1E,0x06};
static char otm1901_1080p_cmd71[] = {0x02,0x00,0x39,0xC0,0x00,0xD0,0xff,0xff};
static char otm1901_1080p_cmd72[] = {0x08,0x00,0x39,0xC0,0xC0,0x00,0x00,0x03,0x00,0x00,0x1E,0x06};
static char otm1901_1080p_cmd73[] = {0x02,0x00,0x39,0xC0,0x00,0x90,0xff,0xff};
static char otm1901_1080p_cmd74[] = {0x05,0x00,0x39,0xC0,0xC2,0x82,0x00,0x3D,0x40,0xff,0xff,0xff};
static char otm1901_1080p_cmd75[] = {0x02,0x00,0x39,0xC0,0x00,0xB0,0xff,0xff};
static char otm1901_1080p_cmd76[] = {0x09,0x00,0x39,0xC0,0xC2,0x01,0x00,0x45,0x43,0x01,0x01,0x45,0x43,0xff,0xff,0xff};
static char otm1901_1080p_cmd77[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd78[] = {0x0D,0x00,0x39,0xC0,0xC3,0x84,0x04,0x01,0x00,0x02,0x87,0x83,0x04,0x01,0x00,0x02,0x87,0xff,0xff,0xff};
static char otm1901_1080p_cmd79[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd80[] = {0x10,0x00,0x39,0xC0,0xCC,0x09,0x0D,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x0E,0x28,0x28,0x28,0x28};
static char otm1901_1080p_cmd81[] = {0x02,0x00,0x39,0xC0,0x00,0x90,0xff,0xff};
static char otm1901_1080p_cmd82[] = {0x10,0x00,0x39,0xC0,0xCC,0x0D,0x09,0x12,0x11,0x13,0x14,0x15,0x16,0x17,0x18,0x0E,0x28,0x28,0x28,0x28};
static char otm1901_1080p_cmd83[] = {0x02,0x00,0x39,0xC0,0x00,0xA0,0xff,0xff};
static char otm1901_1080p_cmd84[] = {0x10,0x00,0x39,0xC0,0xCC,0x1D,0x1E,0x1F,0x19,0x1A,0x1B,0x1C,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27};
static char otm1901_1080p_cmd85[] = {0x02,0x00,0x39,0xC0,0x00,0xB0,0xff,0xff};
static char otm1901_1080p_cmd86[] = {0x09,0x00,0x39,0xC0,0xCC,0x01,0x02,0x03,0x05,0x06,0x07,0x04,0x08,0xff,0xff,0xff};
static char otm1901_1080p_cmd87[] = {0x02,0x00,0x39,0xC0,0x00,0xC0,0xff,0xff};
static char otm1901_1080p_cmd88[] = {0x0D,0x00,0x39,0xC0,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0xff,0xff,0xff};
static char otm1901_1080p_cmd89[] = {0x02,0x00,0x39,0xC0,0x00,0xD0,0xff,0xff};
static char otm1901_1080p_cmd90[] = {0x0D,0x00,0x39,0xC0,0xCC,0xFF,0x00,0x30,0xC0,0x0F,0x30,0x00,0x00,0x33,0x03,0x00,0x77,0xff,0xff,0xff};
static char otm1901_1080p_cmd91[] = {0x02,0x00,0x39,0xC0,0x00,0xDE,0xff,0xff};
static char otm1901_1080p_cmd92[] = {0x02,0x00,0x39,0xC0,0xCC,0x00,0xff,0xff};
static char otm1901_1080p_cmd93[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd94[] = {0x10,0x00,0x39,0xC0,0xCB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00};
static char otm1901_1080p_cmd95[] = {0x02,0x00,0x39,0xC0,0x00,0x90,0xff,0xff};
static char otm1901_1080p_cmd96[] = {0x10,0x00,0x39,0xC0,0xCB,0x30,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
static char otm1901_1080p_cmd97[] = {0x02,0x00,0x39,0xC0,0x00,0xA0,0xff,0xff};
static char otm1901_1080p_cmd98[] = {0x10,0x00,0x39,0xC0,0xCB,0x15,0x15,0x05,0xF5,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00};
static char otm1901_1080p_cmd99[] = {0x02,0x00,0x39,0xC0,0x00,0xB0,0xff,0xff};
static char otm1901_1080p_cmd100[] = {0x10,0x00,0x39,0xC0,0xCB,0x00,0x01,0xFD,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
static char otm1901_1080p_cmd101[] = {0x02,0x00,0x39,0xC0,0x00,0xC0,0xff,0xff};
static char otm1901_1080p_cmd102[] = {0x09,0x00,0x39,0xC0,0xCB,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x77,0xff,0xff,0xff};
static char otm1901_1080p_cmd103[] = {0x02,0x00,0x39,0xC0,0x00,0xD0,0xff,0xff};
static char otm1901_1080p_cmd104[] = {0x09,0x00,0x39,0xC0,0xCB,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x77,0xff,0xff,0xff};
static char otm1901_1080p_cmd105[] = {0x02,0x00,0x39,0xC0,0x00,0xE0,0xff,0xff};
static char otm1901_1080p_cmd106[] = {0x09,0x00,0x39,0xC0,0xCB,0x00,0x00,0x00,0x01,0x01,0x01,0x77,0x77,0xff,0xff,0xff};
static char otm1901_1080p_cmd107[] = {0x02,0x00,0x39,0xC0,0x00,0xF0,0xff,0xff};
static char otm1901_1080p_cmd108[] = {0x09,0x00,0x39,0xC0,0xCB,0x11,0x11,0x11,0x11,0x11,0x11,0x77,0x77,0xff,0xff,0xff};
static char otm1901_1080p_cmd109[] = {0x02,0x00,0x39,0xC0,0x00,0x80,0xff,0xff};
static char otm1901_1080p_cmd110[] = {0x10,0x00,0x39,0xC0,0xCD,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x01,0x12,0x11,0x03,0x04,0x0B,0x17};
static char otm1901_1080p_cmd111[] = {0x02,0x00,0x39,0xC0,0x00,0x90,0xff,0xff};
static char otm1901_1080p_cmd112[] = {0x0C,0x00,0x39,0xC0,0xCD,0x3D,0x02,0x3D,0x25,0x25,0x25,0x1F,0x20,0x21,0x25,0x25};
static char otm1901_1080p_cmd113[] = {0x02,0x00,0x39,0xC0,0x00,0xA0,0xff,0xff};
static char otm1901_1080p_cmd114[] = {0x10,0x00,0x39,0xC0,0xCD,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x01,0x12,0x11,0x03,0x04,0x0B,0x17};
static char otm1901_1080p_cmd115[] = {0x02,0x00,0x39,0xC0,0x00,0xB0,0xff,0xff};
static char otm1901_1080p_cmd116[] = {0x0C,0x00,0x39,0xC0,0xCD,0x17,0x02,0x3D,0x25,0x25,0x25,0x1F,0x20,0x21,0x25,0x25};
static char otm1901_1080p_cmd117[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd118[] = {0x19,0x00,0x39,0xC0,0xE1,0x1F,0x2E,0x33,0x3C,0x42,0x49,0x54,0x64,0x6C,0x7D,0x88,0x90,0x6B,0x67,0x63,0x54,0x43,0x33,0x27,0x21,0x18,0x00,0x00,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd119[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd120[] = {0x19,0x00,0x39,0xC0,0xE2,0x1F,0x2E,0x33,0x3C,0x42,0x49,0x54,0x64,0x6C,0x7D,0x88,0x90,0x6B,0x67,0x63,0x54,0x43,0x33,0x27,0x21,0x18,0x00,0x00,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd121[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd122[] = {0x19,0x00,0x39,0xC0,0xE3,0x37,0x3E,0x41,0x47,0x4D,0x52,0x5B,0x68,0x70,0x81,0x8A,0x91,0x6A,0x66,0x62,0x54,0x43,0x33,0x29,0x23,0x1B,0x13,0x0C,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd123[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd124[] = {0x19,0x00,0x39,0xC0,0xE4,0x37,0x3E,0x41,0x47,0x4D,0x52,0x5B,0x68,0x70,0x81,0x8A,0x91,0x6A,0x66,0x62,0x54,0x43,0x33,0x29,0x23,0x1B,0x13,0x0C,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd125[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd126[] = {0x19,0x00,0x39,0xC0,0xE5,0x1F,0x2A,0x2F,0x38,0x40,0x46,0x51,0x62,0x6B,0x7E,0x88,0x90,0x6B,0x67,0x64,0x56,0x45,0x35,0x2B,0x25,0x1E,0x0F,0x00,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd127[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd128[] = {0x19,0x00,0x39,0xC0,0xE6,0x1F,0x2A,0x2F,0x38,0x40,0x46,0x51,0x62,0x6B,0x7E,0x88,0x90,0x6B,0x67,0x64,0x56,0x45,0x35,0x2B,0x25,0x1E,0x0F,0x00,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd129[] = {0x02,0x00,0x39,0xC0,0x00,0xD4,0xff,0xff};
static char otm1901_1080p_cmd130[] = {0x05,0x00,0x39,0xC0,0xC3,0x01,0x01,0x01,0x01,0xff,0xff,0xff};
static char otm1901_1080p_cmd131[] = {0x02,0x00,0x39,0xC0,0x00,0xF2,0xff,0xff};
static char otm1901_1080p_cmd132[] = {0x04,0x00,0x39,0xC0,0xC1,0x80,0x0F,0x0F};
static char otm1901_1080p_cmd133[] = {0x02,0x00,0x39,0xC0,0x00,0xF7,0xff,0xff};
static char otm1901_1080p_cmd134[] = {0x05,0x00,0x39,0xC0,0xC3,0x03,0x1B,0x00,0x00,0xff,0xff,0xff};
static char otm1901_1080p_cmd135[] = {0x02,0x00,0x39,0xC0,0x00,0x00,0xff,0xff};
static char otm1901_1080p_cmd136[] = {0x04,0x00,0x39,0xC0,0xFF,0xFF,0xFF,0xFF};


static char otm1901_1080p_exit_sleep[] = {
	0x11,0x00,0x05,0x80};
static char otm1901_1080p_display_on[] = {
	0x29,0x00,0x05,0x80};

static struct mipi_dsi_cmd otm1901_1080p_video_on_command[] = {

{ARRAY_SIZE(otm1901_1080p_cmd1), otm1901_1080p_cmd1, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd2), otm1901_1080p_cmd2, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd3), otm1901_1080p_cmd3, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd4), otm1901_1080p_cmd4, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd5), otm1901_1080p_cmd5, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd6), otm1901_1080p_cmd6, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd7), otm1901_1080p_cmd7, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd8), otm1901_1080p_cmd8, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd9), otm1901_1080p_cmd9, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd10), otm1901_1080p_cmd10, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd11), otm1901_1080p_cmd11, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd12), otm1901_1080p_cmd12, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd13), otm1901_1080p_cmd13, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd14), otm1901_1080p_cmd14, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd15), otm1901_1080p_cmd15, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd16), otm1901_1080p_cmd16, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd17), otm1901_1080p_cmd17, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd18), otm1901_1080p_cmd18, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd19), otm1901_1080p_cmd19, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd20), otm1901_1080p_cmd20, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd21), otm1901_1080p_cmd21, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd22), otm1901_1080p_cmd22, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd23), otm1901_1080p_cmd23, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd24), otm1901_1080p_cmd24, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd25), otm1901_1080p_cmd25, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd26), otm1901_1080p_cmd26, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd27), otm1901_1080p_cmd27, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd28), otm1901_1080p_cmd28, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd29), otm1901_1080p_cmd29, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd30), otm1901_1080p_cmd30, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd31), otm1901_1080p_cmd31, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd32), otm1901_1080p_cmd32, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd33), otm1901_1080p_cmd33, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd34), otm1901_1080p_cmd34, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd35), otm1901_1080p_cmd35, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd36), otm1901_1080p_cmd36, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd37), otm1901_1080p_cmd37, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd38), otm1901_1080p_cmd38, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd39), otm1901_1080p_cmd39, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd40), otm1901_1080p_cmd40, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd41), otm1901_1080p_cmd41, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd42), otm1901_1080p_cmd42, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd43), otm1901_1080p_cmd43, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd44), otm1901_1080p_cmd44, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd45), otm1901_1080p_cmd45, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd46), otm1901_1080p_cmd46, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd47), otm1901_1080p_cmd47, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd48), otm1901_1080p_cmd48, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd49), otm1901_1080p_cmd49, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd50), otm1901_1080p_cmd50, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd51), otm1901_1080p_cmd51, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd52), otm1901_1080p_cmd52, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd53), otm1901_1080p_cmd53, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd54), otm1901_1080p_cmd54, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd55), otm1901_1080p_cmd55, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd56), otm1901_1080p_cmd56, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd57), otm1901_1080p_cmd57, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd58), otm1901_1080p_cmd58, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd59), otm1901_1080p_cmd59, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd60), otm1901_1080p_cmd60, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd61), otm1901_1080p_cmd61, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd62), otm1901_1080p_cmd62, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd63), otm1901_1080p_cmd63, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd64), otm1901_1080p_cmd64, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd65), otm1901_1080p_cmd65, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd66), otm1901_1080p_cmd66, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd67), otm1901_1080p_cmd67, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd68), otm1901_1080p_cmd68, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd69), otm1901_1080p_cmd69, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd70), otm1901_1080p_cmd70, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd71), otm1901_1080p_cmd71, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd72), otm1901_1080p_cmd72, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd73), otm1901_1080p_cmd73, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd74), otm1901_1080p_cmd74, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd75), otm1901_1080p_cmd75, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd76), otm1901_1080p_cmd76, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd77), otm1901_1080p_cmd77, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd78), otm1901_1080p_cmd78, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd79), otm1901_1080p_cmd79, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd80), otm1901_1080p_cmd80, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd81), otm1901_1080p_cmd81, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd82), otm1901_1080p_cmd82, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd83), otm1901_1080p_cmd83, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd84), otm1901_1080p_cmd84, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd85), otm1901_1080p_cmd85, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd86), otm1901_1080p_cmd86, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd87), otm1901_1080p_cmd87, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd88), otm1901_1080p_cmd88, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd89), otm1901_1080p_cmd89, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd90), otm1901_1080p_cmd90, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd91), otm1901_1080p_cmd91, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd92), otm1901_1080p_cmd92, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd93), otm1901_1080p_cmd93, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd94), otm1901_1080p_cmd94, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd95), otm1901_1080p_cmd95, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd96), otm1901_1080p_cmd96, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd97), otm1901_1080p_cmd97, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd98), otm1901_1080p_cmd98, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd99), otm1901_1080p_cmd99, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd100), otm1901_1080p_cmd100, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd101), otm1901_1080p_cmd101, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd102), otm1901_1080p_cmd102, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd103), otm1901_1080p_cmd103, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd104), otm1901_1080p_cmd104, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd105), otm1901_1080p_cmd105, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd106), otm1901_1080p_cmd106, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd107), otm1901_1080p_cmd107, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd108), otm1901_1080p_cmd108, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd109), otm1901_1080p_cmd109, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd110), otm1901_1080p_cmd110, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd111), otm1901_1080p_cmd111, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd112), otm1901_1080p_cmd112, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd113), otm1901_1080p_cmd113, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd114), otm1901_1080p_cmd114, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd115), otm1901_1080p_cmd115, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd116), otm1901_1080p_cmd116, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd117), otm1901_1080p_cmd117, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd118), otm1901_1080p_cmd118, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd119), otm1901_1080p_cmd119, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd120), otm1901_1080p_cmd120, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd121), otm1901_1080p_cmd121, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd122), otm1901_1080p_cmd122, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd123), otm1901_1080p_cmd123, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd124), otm1901_1080p_cmd124, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd125), otm1901_1080p_cmd125, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd126), otm1901_1080p_cmd126, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd127), otm1901_1080p_cmd127, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd128), otm1901_1080p_cmd128, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd129), otm1901_1080p_cmd129, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd130), otm1901_1080p_cmd130, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd131), otm1901_1080p_cmd131, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd132), otm1901_1080p_cmd132, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd133), otm1901_1080p_cmd133, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd134), otm1901_1080p_cmd134, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd135), otm1901_1080p_cmd135, 0x00},
{ARRAY_SIZE(otm1901_1080p_cmd136), otm1901_1080p_cmd136, 0x00},

{ARRAY_SIZE(otm1901_1080p_exit_sleep), otm1901_1080p_exit_sleep, 0x78},
{ARRAY_SIZE(otm1901_1080p_display_on), otm1901_1080p_display_on, 0x14},
};

#define OTM1901_1080P_VIDEO_ON_COMMAND 122


static char otm1901_1080p_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char otm1901_1080p_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd otm1901_1080p_video_off_command[] = {
	{0x4, otm1901_1080p_videooff_cmd0, 0x00},
	{0x4, otm1901_1080p_videooff_cmd1, 0x78}
};

#define OTM1901_1080P_VIDEO_OFF_COMMAND 2


static struct command_state otm1901_1080p_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info otm1901_1080p_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info otm1901_1080p_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration otm1901_1080p_video_lane_config = {
	4, 0, 1, 1, 1, 1
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t otm1901_1080p_video_timings[] = {
	//0xf9, 0x3d, 0x34, 0x00, 0x58, 0x4d, 0x36, 0x3f, 0x53, 0x03, 0x04, 0x00
	0x9e, 0x43, 0x37, 0x00, 0x60, 0x58, 0x39, 0x45, 0x5b, 0x03, 0x04,0x00
};

static struct panel_timing otm1901_1080p_video_timing_info = {
	0, 4, 0x1e, 0x38
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence otm1901_1080p_video_reset_seq = {
	{1, 0, 1, }, {10, 20, 50, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight otm1901_1080p_video_backlight = {
	0, 1, 255, 0, 0, 0
};

#endif /*_PANEL_OTM1901_1080P_VIDEO_H_*/