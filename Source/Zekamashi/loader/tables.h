/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2014 - 2015
*
*  TITLE:       TABLES.H
*
*  VERSION:     1.21
*
*  DATE:        01 Apr 2015
*
*  Patch tables for supported VirtualBox versions.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

//4.3.16
static unsigned char TsmiPatchDataValue_4316[136] = {
	0x9D, 0x1F, 0x03, 0x00, 0x02, 0x51, 0x52, 0x04, 0x22, 0x03, 0x00, 0x02, 0x51, 0x52, 0x57, 0x23,
	0x03, 0x00, 0x02, 0x51, 0x52, 0x82, 0x26, 0x03, 0x00, 0x02, 0x51, 0x52, 0x24, 0x28, 0x03, 0x00,
	0x02, 0x51, 0x52, 0x58, 0x29, 0x03, 0x00, 0x02, 0x51, 0x52, 0x70, 0xBD, 0x03, 0x00, 0x02, 0x51,
	0x52, 0x78, 0xFD, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xC7, 0xD3,
	0x10, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00,
	0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xB6, 0xD8,
	0x00, 0x00, 0x02, 0xDE, 0x10, 0x26, 0x20, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x0D, 0xF6, 0x01, 0x00,
	0x02, 0xDE, 0x10, 0x11, 0x1d, 0x04, 0x00, 0x02, 0xDE, 0x10, 0x25, 0x1D, 0x04, 0x00, 0x02, 0xAD,
	0xDE, 0x1A, 0xF6, 0x01, 0x00, 0x02, 0xC0, 0xC0
};

//4.3.18
static unsigned char TsmiPatchDataValue_4318[136] = {
	0x6D, 0x20, 0x03, 0x00, 0x02, 0x51, 0x52, 0xd4, 0x22, 0x03, 0x00, 0x02, 0x51, 0x52, 0x27, 0x24,
	0x03, 0x00, 0x02, 0x51, 0x52, 0x52, 0x27, 0x03, 0x00, 0x02, 0x51, 0x52, 0xf4, 0x28, 0x03, 0x00,
	0x02, 0x51, 0x52, 0x28, 0x2a, 0x03, 0x00, 0x02, 0x51, 0x52, 0x10, 0xBE, 0x03, 0x00, 0x02, 0x51,
	0x52, 0xE8, 0xFE, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x37, 0xD5,
	0x10, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00,
	0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xB6, 0xD8,
	0x00, 0x00, 0x02, 0xDE, 0x10, 0x26, 0x20, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x0D, 0xF6, 0x01, 0x00,
	0x02, 0xDE, 0x10, 0xb1, 0x1d, 0x04, 0x00, 0x02, 0xDE, 0x10, 0xC5, 0x1D, 0x04, 0x00, 0x02, 0xAD,
	0xDE, 0x1A, 0xF6, 0x01, 0x00, 0x02, 0xC0, 0xC0
};

//4.3.20
static unsigned char TsmiPatchDataValue_4320[136] = {
	0x8D, 0x21, 0x03, 0x00, 0x02, 0x51, 0x52, 0xf4, 0x23, 0x03, 0x00, 0x02, 0x51, 0x52, 0x47, 0x25,
	0x03, 0x00, 0x02, 0x51, 0x52, 0x72, 0x28, 0x03, 0x00, 0x02, 0x51, 0x52, 0x14, 0x2a, 0x03, 0x00,
	0x02, 0x51, 0x52, 0x48, 0x2b, 0x03, 0x00, 0x02, 0x51, 0x52, 0x30, 0xbf, 0x03, 0x00, 0x02, 0x51,
	0x52, 0x98, 0xbf, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xe7, 0x95,
	0x11, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00,
	0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xB6, 0xD8,
	0x00, 0x00, 0x02, 0xDE, 0x10, 0x26, 0x20, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x0e, 0xF7, 0x01, 0x00,
	0x02, 0xDE, 0x10, 0xf1, 0x1e, 0x04, 0x00, 0x02, 0xDE, 0x10, 0x05, 0x1f, 0x04, 0x00, 0x02, 0xAD,
	0xDE, 0x01, 0xF7, 0x01, 0x00, 0x02, 0xDE, 0x10
};

//4.3.22, 4.3.24
unsigned char TsmiPatchDataValue_4322_24[136] = {
	0x7D, 0x22, 0x03, 0x00, 0x02, 0x51, 0x52, 0xE4, 0x24, 0x03, 0x00, 0x02, 0x51, 0x52, 0x37, 0x26,
	0x03, 0x00, 0x02, 0x51, 0x52, 0x62, 0x29, 0x03, 0x00, 0x02, 0x51, 0x52, 0x04, 0x2B, 0x03, 0x00,
	0x02, 0x51, 0x52, 0x38, 0x2C, 0x03, 0x00, 0x02, 0x51, 0x52, 0x30, 0xC0, 0x03, 0x00, 0x02, 0x51,
	0x52, 0xD8, 0xEF, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x27, 0xC6,
	0x11, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00,
	0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xC6, 0xD8,
	0x00, 0x00, 0x02, 0xDE, 0x10, 0x36, 0x20, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x1E, 0xF7, 0x01, 0x00,
	0x02, 0xDE, 0x10, 0xD1, 0x1F, 0x04, 0x00, 0x02, 0xDE, 0x10, 0xE5, 0x1F, 0x04, 0x00, 0x02, 0xAD,
	0xDE, 0x11, 0xF7, 0x01, 0x00, 0x02, 0xDE, 0x10
};

//4.3.26 (upgraded)
unsigned char TsmiPatchDataValue[176] = {
	0x84, 0x20, 0x03, 0x00, 0x02, 0x51, 0x52, 0x7D, 0x22, 0x03, 0x00, 0x02, 0x51, 0x52, 0xE4, 0x24,
	0x03, 0x00, 0x02, 0x51, 0x52, 0x37, 0x26, 0x03, 0x00, 0x02, 0x51, 0x52, 0x62, 0x29, 0x03, 0x00,
	0x02, 0x51, 0x52, 0x04, 0x2B, 0x03, 0x00, 0x02, 0x51, 0x52, 0x38, 0x2C, 0x03, 0x00, 0x02, 0x51,
	0x52, 0x30, 0xC0, 0x03, 0x00, 0x02, 0x51, 0x52, 0xBD, 0xD1, 0x10, 0x00, 0x02, 0x51, 0x52, 0x88,
	0x27, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xD8, 0xEF, 0x11, 0x00,
	0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xA8, 0xF3, 0x11, 0x00, 0x08, 0x4D, 0x61,
	0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x27, 0xC6, 0x11, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46,
	0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65,
	0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xC6, 0xD8, 0x00, 0x00, 0x02, 0xDE, 0x10, 0x36, 0x20, 0x01,
	0x00, 0x02, 0xDE, 0x10, 0x11, 0xF7, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x1E, 0xF7, 0x01, 0x00, 0x02,
	0xED, 0x1C, 0xD1, 0x1F, 0x04, 0x00, 0x02, 0xDE, 0x10, 0xE5, 0x1F, 0x04, 0x00, 0x02, 0xCA, 0xC0
};