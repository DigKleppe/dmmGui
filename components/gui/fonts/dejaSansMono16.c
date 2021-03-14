#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef DEJASANSMONO16
#define DEJASANSMONO16 1
#endif

#if DEJASANSMONO16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xff, 0xf,

    /* U+22 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+23 "#" */
    0x9, 0x82, 0x60, 0x90, 0x24, 0x7f, 0xc4, 0xc1,
    0x20, 0x48, 0xff, 0x89, 0x82, 0x41, 0x90,

    /* U+24 "$" */
    0x10, 0x21, 0xf6, 0x8d, 0x1a, 0x1e, 0xe, 0x16,
    0x2e, 0x5f, 0xe1, 0x2, 0x4, 0x0,

    /* U+25 "%" */
    0x70, 0x44, 0x22, 0x11, 0x7, 0x30, 0xe1, 0x9c,
    0x11, 0x8, 0x84, 0x41, 0xc0,

    /* U+26 "&" */
    0x1c, 0x10, 0x8, 0x4, 0x3, 0x3, 0x81, 0x27,
    0x93, 0xc5, 0xe3, 0x99, 0xc7, 0xb0,

    /* U+27 "'" */
    0xff,

    /* U+28 "(" */
    0x32, 0x66, 0xcc, 0xcc, 0xcc, 0x46, 0x63, 0x10,

    /* U+29 ")" */
    0xc4, 0x66, 0x33, 0x33, 0x33, 0x26, 0x6c, 0x80,

    /* U+2A "*" */
    0x11, 0x25, 0x51, 0xc7, 0xd2, 0x44, 0x0,

    /* U+2B "+" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,

    /* U+2C "," */
    0x6d, 0x60,

    /* U+2D "-" */
    0xf0,

    /* U+2E "." */
    0xf0,

    /* U+2F "/" */
    0x2, 0xc, 0x10, 0x60, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0xc, 0x0,

    /* U+30 "0" */
    0x3c, 0x66, 0x42, 0xc3, 0xc3, 0xdb, 0xdb, 0xc3,
    0xc3, 0x42, 0x66, 0x3c,

    /* U+31 "1" */
    0xf1, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x30,
    0x60, 0xc7, 0xf0,

    /* U+32 "2" */
    0xf9, 0x18, 0x18, 0x30, 0x61, 0x83, 0xc, 0x30,
    0xc3, 0x7, 0xf0,

    /* U+33 "3" */
    0x7c, 0x7, 0x3, 0x3, 0x7, 0x1c, 0x6, 0x3,
    0x3, 0x3, 0x86, 0xfc,

    /* U+34 "4" */
    0xe, 0x7, 0x5, 0x82, 0xc2, 0x63, 0x31, 0x19,
    0x8c, 0xff, 0x83, 0x1, 0x80, 0xc0,

    /* U+35 "5" */
    0x7e, 0x60, 0x60, 0x60, 0x7c, 0x6, 0x3, 0x3,
    0x3, 0x3, 0x86, 0xfc,

    /* U+36 "6" */
    0x3e, 0x60, 0x60, 0xc0, 0xdc, 0xe6, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+37 "7" */
    0xfe, 0xc, 0x10, 0x60, 0xc1, 0x6, 0xc, 0x10,
    0x60, 0xc1, 0x0,

    /* U+38 "8" */
    0x3c, 0xe7, 0xc3, 0xc3, 0xe6, 0x3c, 0x66, 0xc3,
    0xc3, 0xc3, 0xe6, 0x3c,

    /* U+39 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x67, 0x3b,
    0x3, 0x6, 0x6, 0x7c,

    /* U+3A ":" */
    0xf0, 0xf,

    /* U+3B ";" */
    0x6c, 0x0, 0x1b, 0x58,

    /* U+3C "<" */
    0x1, 0x83, 0x8f, 0x1c, 0xe, 0x1, 0xe0, 0x1e,
    0x3,

    /* U+3D "=" */
    0xff, 0x0, 0x0, 0xff,

    /* U+3E ">" */
    0x80, 0x78, 0x7, 0x0, 0x70, 0x78, 0xe3, 0xc1,
    0x0,

    /* U+3F "?" */
    0xfa, 0x30, 0xc3, 0x1c, 0xe3, 0xc, 0x30, 0x3,
    0xc,

    /* U+40 "@" */
    0x1e, 0x10, 0x90, 0x39, 0xf9, 0x9c, 0x86, 0x43,
    0x33, 0x8f, 0xa0, 0x10, 0x6, 0x1, 0xf0,

    /* U+41 "A" */
    0xc, 0xe, 0x7, 0x82, 0xc1, 0x21, 0x90, 0xcc,
    0x46, 0x7f, 0x30, 0xd0, 0x78, 0x10,

    /* U+42 "B" */
    0xfc, 0xc6, 0xc6, 0xc6, 0xc6, 0xf8, 0xc6, 0xc3,
    0xc3, 0xc3, 0xc7, 0xfc,

    /* U+43 "C" */
    0x1f, 0x61, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0x60, 0x61, 0x1f,

    /* U+44 "D" */
    0xf8, 0xc6, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc6, 0xc6, 0xf8,

    /* U+45 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+46 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x83, 0x6, 0x0,

    /* U+47 "G" */
    0x1e, 0x62, 0x60, 0xc0, 0xc0, 0xc0, 0xc7, 0xc3,
    0xc3, 0x43, 0x63, 0x1e,

    /* U+48 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+49 "I" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x3f,

    /* U+4A "J" */
    0x3e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xe, 0x3f, 0xe0,

    /* U+4B "K" */
    0xc3, 0x61, 0x31, 0x19, 0x8d, 0x87, 0xc3, 0xa1,
    0x98, 0xc6, 0x63, 0x30, 0xd8, 0x30,

    /* U+4C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff,

    /* U+4D "M" */
    0xe3, 0xf1, 0xf8, 0xfa, 0xbd, 0x5e, 0xaf, 0x27,
    0x93, 0xc1, 0xe0, 0xf0, 0x78, 0x30,

    /* U+4E "N" */
    0xe3, 0xe3, 0xe3, 0xf3, 0xd3, 0xd3, 0xcb, 0xcb,
    0xcf, 0xc7, 0xc7, 0xc7,

    /* U+4F "O" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+50 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+51 "Q" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc2, 0x66, 0x3c, 0x6, 0x2,

    /* U+52 "R" */
    0xf8, 0xce, 0xc6, 0xc6, 0xc6, 0xcc, 0xf8, 0xcc,
    0xc6, 0xc2, 0xc3, 0xc3,

    /* U+53 "S" */
    0x3e, 0x62, 0xc0, 0xc0, 0xe0, 0x7c, 0x1e, 0x7,
    0x3, 0x3, 0x86, 0xfc,

    /* U+54 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+55 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+56 "V" */
    0x41, 0xa0, 0xd8, 0x4c, 0x22, 0x31, 0x98, 0xc8,
    0x24, 0x16, 0xf, 0x7, 0x1, 0x80,

    /* U+57 "W" */
    0xc0, 0xf0, 0x2c, 0x9, 0x32, 0x4c, 0x97, 0x65,
    0x59, 0x5e, 0x73, 0x1c, 0xc3, 0x30, 0x8c,

    /* U+58 "X" */
    0x61, 0x90, 0x8c, 0xc2, 0x41, 0xc0, 0x60, 0x30,
    0x3c, 0x32, 0x11, 0x98, 0x78, 0x10,

    /* U+59 "Y" */
    0x40, 0x98, 0x62, 0x10, 0xcc, 0x1e, 0x7, 0x80,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+5A "Z" */
    0xff, 0x3, 0x6, 0x4, 0xc, 0x18, 0x18, 0x30,
    0x20, 0x60, 0xc0, 0xff,

    /* U+5B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+5C "\\" */
    0xc0, 0x81, 0x3, 0x2, 0x6, 0x4, 0xc, 0x8,
    0x18, 0x10, 0x30, 0x20,

    /* U+5D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+5E "^" */
    0x18, 0x38, 0x2c, 0x46, 0x83,

    /* U+5F "_" */
    0xff, 0xc0,

    /* U+60 "`" */
    0x46, 0x30,

    /* U+61 "a" */
    0x7c, 0x9c, 0x18, 0x37, 0xf8, 0xf1, 0xe7, 0x76,

    /* U+62 "b" */
    0xc1, 0x83, 0x6, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8f, 0xb6, 0xe0,

    /* U+63 "c" */
    0x3e, 0xc7, 0x6, 0xc, 0x18, 0x30, 0x31, 0x3e,

    /* U+64 "d" */
    0x6, 0xc, 0x1b, 0xb6, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8d, 0xbb, 0xb0,

    /* U+65 "e" */
    0x3c, 0x66, 0xc3, 0xc3, 0xff, 0xc0, 0xc0, 0x61,
    0x3e,

    /* U+66 "f" */
    0x1e, 0x60, 0xc7, 0xf3, 0x6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x80,

    /* U+67 "g" */
    0x76, 0xdf, 0x1e, 0x3c, 0x78, 0xf1, 0xb7, 0x76,
    0xd, 0x33, 0xe0,

    /* U+68 "h" */
    0xc1, 0x83, 0x6, 0xee, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x30,

    /* U+69 "i" */
    0x18, 0x30, 0x3, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x30, 0x67, 0xf0,

    /* U+6A "j" */
    0x18, 0xc0, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8f, 0xc0,

    /* U+6B "k" */
    0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf0, 0xf8,
    0xcc, 0xc4, 0xc6, 0xc3,

    /* U+6C "l" */
    0xf0, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x30,
    0x60, 0xc0, 0xf0,

    /* U+6D "m" */
    0xf6, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb,

    /* U+6E "n" */
    0xdd, 0xcf, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+6F "o" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66,
    0x3c,

    /* U+70 "p" */
    0xdd, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xf6, 0xdd,
    0x83, 0x6, 0x0,

    /* U+71 "q" */
    0x76, 0xdf, 0x1e, 0x3c, 0x78, 0xf1, 0xb7, 0x76,
    0xc, 0x18, 0x30,

    /* U+72 "r" */
    0xdf, 0x8c, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+73 "s" */
    0x7d, 0x83, 0x7, 0x7, 0xc1, 0xc1, 0xc3, 0xfc,

    /* U+74 "t" */
    0x30, 0x60, 0xc7, 0xf3, 0x6, 0xc, 0x18, 0x30,
    0x60, 0xc0, 0xf0,

    /* U+75 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe7, 0x76,

    /* U+76 "v" */
    0x83, 0xc2, 0x46, 0x46, 0x64, 0x2c, 0x2c, 0x38,
    0x18,

    /* U+77 "w" */
    0xc0, 0xf0, 0x24, 0x9, 0x36, 0x4d, 0x9d, 0x47,
    0x50, 0xcc, 0x33, 0x0,

    /* U+78 "x" */
    0xc2, 0x66, 0x2c, 0x38, 0x18, 0x38, 0x64, 0x46,
    0xc3,

    /* U+79 "y" */
    0x41, 0x21, 0x98, 0xc4, 0x43, 0x60, 0xa0, 0x50,
    0x38, 0x8, 0xc, 0x4, 0xe, 0x0,

    /* U+7A "z" */
    0xfe, 0xc, 0x30, 0xc1, 0x6, 0x18, 0x60, 0xfe,

    /* U+7B "{" */
    0xe, 0x30, 0x60, 0xc1, 0x83, 0x6, 0x70, 0x18,
    0x30, 0x60, 0xc1, 0x83, 0x3, 0x80,

    /* U+7C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+7D "}" */
    0xf0, 0x30, 0x60, 0xc1, 0x83, 0x6, 0x3, 0x18,
    0x30, 0x60, 0xc1, 0x83, 0x3c, 0x0,

    /* U+7E "~" */
    0x71, 0x8e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 154, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 154, .box_w = 2, .box_h = 12, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 154, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 7, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 36, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 154, .box_w = 2, .box_h = 4, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 64, .adv_w = 154, .box_w = 4, .box_h = 15, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 72, .adv_w = 154, .box_w = 4, .box_h = 15, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 80, .adv_w = 154, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 87, .adv_w = 154, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 95, .adv_w = 154, .box_w = 3, .box_h = 4, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 97, .adv_w = 154, .box_w = 4, .box_h = 1, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 98, .adv_w = 154, .box_w = 2, .box_h = 2, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 111, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 154, .box_w = 2, .box_h = 8, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 154, .box_w = 3, .box_h = 10, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 236, .adv_w = 154, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 245, .adv_w = 154, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 249, .adv_w = 154, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 258, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 282, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 488, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 154, .box_w = 4, .box_h = 14, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 615, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 627, .adv_w = 154, .box_w = 4, .box_h = 14, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 634, .adv_w = 154, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 639, .adv_w = 154, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 641, .adv_w = 154, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 643, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 712, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 154, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 744, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 804, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 815, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 154, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 870, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 893, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 915, .adv_w = 154, .box_w = 2, .box_h = 16, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 919, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 933, .adv_w = 154, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t dejaSansMono16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DEJASANSMONO16*/

