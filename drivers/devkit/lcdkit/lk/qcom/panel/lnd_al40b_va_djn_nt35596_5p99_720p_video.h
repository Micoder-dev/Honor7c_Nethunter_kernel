/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
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

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_H_

#define _PANEL_LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config lnd_al40b_va_djn_nt35596_5p99_720p_video_panel_data = {
        "lcdkit_lnd_al40b_va_djn_nt35596_5p99_720p_video", "dsi:0:", 
        "djn-nt35596-5p99-720p-video", 10, 0, "DISPLAY_1", 0, 428630000, 
        60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution lnd_al40b_va_djn_nt35596_5p99_720p_video_panel_res = {
        720, 1440, 52, 40, 8, 0, 6, 4, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info lnd_al40b_va_djn_nt35596_5p99_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd0[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xFF, 0xEE, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd1[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x18, 0x40, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd2[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x18, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd3[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xFF, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd4[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x00, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd5[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x01, 0x55, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd6[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x02, 0x40, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd7[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x05, 0x50, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd8[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x06, 0x4A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd9[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x07, 0x29, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd10[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x08, 0x0C, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd11[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0B, 0x9B, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd12[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0C, 0x9B, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd13[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0E, 0xB0, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd14[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0F, 0xAE, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd15[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x13, 0x03, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd16[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x14, 0x4A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd17[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x15, 0x12, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd18[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x16, 0x12, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd19[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x58, 0x82, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd20[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x59, 0x02, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd21[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5A, 0x02, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd22[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5B, 0x02, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd23[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5C, 0x82, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd24[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5D, 0x82, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd25[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5E, 0x02, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd26[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5F, 0x02, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd27[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x72, 0x31, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd28[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xFB, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd29[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xFF, 0x05, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd30[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x00, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd31[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x01, 0x0B, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd32[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x02, 0x0C, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd33[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x03, 0x09, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd34[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x04, 0x0A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd35[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x05, 0x1A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd36[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x06, 0x10, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd37[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x07, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd38[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x08, 0x1A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd39[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x09, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd40[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0A, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd41[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0B, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd42[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0C, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd43[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0D, 0x13, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd44[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0E, 0x15, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd45[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x0F, 0x17, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd46[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x10, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd47[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x11, 0x0B, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd48[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x12, 0x0C, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd49[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x13, 0x09, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd50[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x14, 0x0A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd51[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x15, 0x1A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd52[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x16, 0x10, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd53[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x17, 0x10, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd54[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x18, 0x1A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd55[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x19, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd56[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x1A, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd57[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x1B, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd58[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x1C, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd59[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x1D, 0x13, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd60[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x1E, 0x15, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd61[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x1F, 0x17, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd62[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x20, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd63[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x21, 0x03, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd64[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x22, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd65[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x23, 0x4D, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd66[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x24, 0x4D, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd67[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x25, 0x6D, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd68[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x29, 0xD8, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd69[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x2A, 0x2A, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd70[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x2B, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd71[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xB6, 0x92, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd72[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xB7, 0xB4, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd73[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xB8, 0x05, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd74[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x4B, 0x04, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd75[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x4C, 0x14, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd76[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x4D, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd77[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x4E, 0x22, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd78[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x4F, 0x22, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd79[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x50, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd80[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x51, 0x61, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd81[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x52, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd82[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x53, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd83[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x54, 0xA0, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd84[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x55, 0x6D, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd85[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5B, 0x44, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd86[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5C, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd87[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x5F, 0x74, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd88[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x60, 0x75, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd89[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x63, 0xFF, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd90[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x64, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd91[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x67, 0x04, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd92[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x68, 0x04, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd93[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x6C, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd94[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x7A, 0x80, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd95[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x7B, 0xA3, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd96[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x7C, 0xD8, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd97[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x7D, 0x60, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd98[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x7E, 0x0E, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd99[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x7F, 0x23, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd100[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x80, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd101[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x81, 0x07, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd102[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x83, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd103[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x84, 0x07, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd104[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x85, 0x07, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd105[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x90, 0x38, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd106[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x92, 0xA9, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd107[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x93, 0x06, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd108[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x94, 0x06, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd109[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x8A, 0x33, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd110[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x9B, 0x0F, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd111[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x9D, 0xB0, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd112[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xA4, 0x0F, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd113[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xE7, 0x80, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd114[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xFB, 0x01, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd115[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xFF, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd116[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xD3, 0x06, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd117[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xD4, 0x06, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd118[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x35, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd119[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x11, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd120[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x29, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd lnd_al40b_va_djn_nt35596_5p99_720p_video_on_command[] = {
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd0, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd1, 0x0A},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd2, 0x14},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd3, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd4, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd5, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd6, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd7, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd8, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd9, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd10, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd11, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd12, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd13, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd14, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd15, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd16, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd17, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd18, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd19, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd20, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd21, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd22, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd23, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd24, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd25, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd26, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd27, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd28, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd29, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd30, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd31, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd32, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd33, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd34, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd35, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd36, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd37, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd38, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd39, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd40, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd41, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd42, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd43, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd44, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd45, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd46, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd47, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd48, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd49, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd50, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd51, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd52, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd53, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd54, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd55, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd56, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd57, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd58, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd59, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd60, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd61, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd62, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd63, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd64, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd65, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd66, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd67, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd68, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd69, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd70, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd71, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd72, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd73, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd74, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd75, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd76, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd77, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd78, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd79, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd80, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd81, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd82, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd83, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd84, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd85, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd86, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd87, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd88, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd89, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd90, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd91, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd92, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd93, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd94, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd95, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd96, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd97, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd98, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd99, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd100, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd101, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd102, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd103, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd104, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd105, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd106, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd107, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd108, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd109, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd110, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd111, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd112, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd113, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd114, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd115, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd116, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd117, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd118, 0x00},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd119, 0x64},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_on_cmd120, 0x28}
};
#define LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_ON_COMMAND 121


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_off_cmd0[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x28, 0x00, 0xFF, 0xFF};


static char lnd_al40b_va_djn_nt35596_5p99_720p_video_off_cmd1[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x10, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd lnd_al40b_va_djn_nt35596_5p99_720p_video_off_command[] = {
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_off_cmd0, 0x14},
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_off_cmd1, 0x78}
};
#define LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_OFF_COMMAND 2


static struct command_state lnd_al40b_va_djn_nt35596_5p99_720p_video_state = {
        0, 1 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info lnd_al40b_va_djn_nt35596_5p99_720p_video_command_panel = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info lnd_al40b_va_djn_nt35596_5p99_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration lnd_al40b_va_djn_nt35596_5p99_720p_video_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t lnd_al40b_va_djn_nt35596_5p99_720p_video_timings[]= {
        0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x0D, 0x04, 0x05, 0x02, 0x03, 0x04, 0xA0 
};

static struct panel_timing lnd_al40b_va_djn_nt35596_5p99_720p_video_timing_info = {
        0, 4, 0x10, 0x29 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence lnd_al40b_va_djn_nt35596_5p99_720p_video_reset_seq = {
    { 1, 0, 1, }, { 5, 5, 15, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight lnd_al40b_va_djn_nt35596_5p99_720p_video_backlight = {
        0, 24, 4095, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc lnd_al40b_va_djn_nt35596_5p99_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 12, 2, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int lnd_al40b_va_djn_nt35596_5p99_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int lnd_al40b_va_djn_nt35596_5p99_720p_video_dsi_pll_type  = DSI_PLL_TYPE_THULIUM;

int lnd_al40b_va_djn_nt35596_5p99_720p_video_mipi_signature  = 0xffff;

static const uint32_t lnd_al40b_va_djn_nt35596_5p99_720p_video_regulator_setting[]= {
        0x1d, 0x1d, 0x1d, 0x1d, 0x1d 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config lnd_al40b_va_djn_nt35596_5p99_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 0, 0, 0, 61, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 5500000, 5500000, 0, 0, 0, 0, 0, 0, 
        0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info lnd_al40b_va_djn_nt35596_5p99_720p_video_panel_misc_info = {
        0, 0, 0, 0x01, 0x01, 0x01, 0x01, 1, 0, 1 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl lnd_al40b_va_djn_nt35596_5p99_720p_video_panel_delay_ctrl = {
        0, 10, 0, 2, 12, 2, 2, 0, 0, 0, 0, 20, 0, 50 
};

static char lnd_al40b_va_djn_nt35596_5p99_720p_video_backlight_cmd0[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd lnd_al40b_va_djn_nt35596_5p99_720p_video_backlight_command[] = {
{0x8, lnd_al40b_va_djn_nt35596_5p99_720p_video_backlight_cmd0, 0x00}
};
#define LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * lnd_al40b_va_djn_nt35596_5p99_720p_video_bias_ic_array[0];
 
#define LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * lnd_al40b_va_djn_nt35596_5p99_720p_video_backlight_ic_array[0];
 
#define LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_LND_AL40B_VA_DJN_NT35596_5P99_720P_VIDEO_H_*/
