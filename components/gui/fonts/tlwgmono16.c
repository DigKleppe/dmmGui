#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef TLWGMONO16
#define TLWGMONO16 1
#endif

#if TLWGMONO16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xaa, 0xa0, 0x30,

    /* U+22 "\"" */
    0xda, 0xd2, 0x90,

    /* U+23 "#" */
    0x0, 0x50, 0xa1, 0x4f, 0xe5, 0xa, 0x7f, 0x28,
    0x50, 0xa1, 0x40,

    /* U+24 "$" */
    0x10, 0x79, 0x92, 0x4, 0x7, 0x1, 0xc1, 0xc6,
    0x78, 0x40, 0x80,

    /* U+25 "%" */
    0x30, 0x91, 0x21, 0x80, 0xee, 0x3, 0x9, 0x12,
    0x18,

    /* U+26 "&" */
    0x39, 0x4, 0x10, 0x23, 0x59, 0x62, 0x74,

    /* U+27 "'" */
    0xfa,

    /* U+28 "(" */
    0x29, 0x49, 0x24, 0x89, 0x10,

    /* U+29 ")" */
    0x89, 0x12, 0x49, 0x29, 0x40,

    /* U+2A "*" */
    0x10, 0x21, 0xf0, 0x82, 0x80, 0x0,

    /* U+2B "+" */
    0x10, 0x20, 0x40, 0x8f, 0xe2, 0x4, 0x8, 0x10,

    /* U+2C "," */
    0x6d, 0x68,

    /* U+2D "-" */
    0xfe,

    /* U+2E "." */
    0xf0,

    /* U+2F "/" */
    0x4, 0x20, 0x84, 0x10, 0x82, 0x10, 0x41, 0x8,
    0x20,

    /* U+30 "0" */
    0x79, 0x28, 0x61, 0x86, 0x18, 0x61, 0x49, 0xc0,

    /* U+31 "1" */
    0x30, 0xa0, 0x40, 0x81, 0x2, 0x4, 0x8, 0x11,
    0xfc,

    /* U+32 "2" */
    0x3c, 0x8c, 0x8, 0x10, 0x41, 0x4, 0x10, 0x43,
    0xfc,

    /* U+33 "3" */
    0x7a, 0x30, 0x43, 0x30, 0x20, 0x41, 0x8d, 0xe0,

    /* U+34 "4" */
    0xc, 0x28, 0x51, 0x24, 0x48, 0xbf, 0x82, 0x4,
    0x3c,

    /* U+35 "5" */
    0x7c, 0x81, 0x3, 0xe4, 0x60, 0x40, 0x81, 0xc4,
    0x70,

    /* U+36 "6" */
    0x1d, 0x84, 0x20, 0xbb, 0x38, 0x61, 0x8d, 0xe0,

    /* U+37 "7" */
    0xfe, 0x10, 0x42, 0x8, 0x21, 0x4, 0x10, 0x80,

    /* U+38 "8" */
    0x7b, 0x38, 0x73, 0x39, 0x28, 0x61, 0xcd, 0xe0,

    /* U+39 "9" */
    0x73, 0x28, 0x61, 0xcd, 0xd0, 0x42, 0x1b, 0x80,

    /* U+3A ":" */
    0xf0, 0x3c,

    /* U+3B ";" */
    0x6c, 0x6, 0x94, 0x80,

    /* U+3C "<" */
    0x0, 0xc, 0x61, 0x4, 0x6, 0x3, 0x1,

    /* U+3D "=" */
    0xff, 0x0, 0xff,

    /* U+3E ">" */
    0x0, 0x80, 0xc0, 0x60, 0x21, 0x8c, 0x60,

    /* U+3F "?" */
    0x7a, 0x38, 0x41, 0x18, 0x82, 0x0, 0x30,

    /* U+40 "@" */
    0x39, 0x18, 0x67, 0xb6, 0x9a, 0x67, 0x81, 0x3,
    0x80,

    /* U+41 "A" */
    0x38, 0xa, 0x5, 0x2, 0x42, 0x21, 0xf1, 0x4,
    0x82, 0xe3, 0x80,

    /* U+42 "B" */
    0xfc, 0x42, 0x42, 0x46, 0x7c, 0x43, 0x41, 0x43,
    0xfe,

    /* U+43 "C" */
    0x3d, 0x43, 0x80, 0x80, 0x80, 0x80, 0xc1, 0x62,
    0x3c,

    /* U+44 "D" */
    0xfc, 0x42, 0x41, 0x41, 0x41, 0x41, 0x41, 0x42,
    0xfc,

    /* U+45 "E" */
    0xfe, 0x42, 0x42, 0x48, 0x78, 0x48, 0x41, 0x41,
    0xff,

    /* U+46 "F" */
    0xff, 0x41, 0x41, 0x48, 0x78, 0x48, 0x40, 0x40,
    0xf8,

    /* U+47 "G" */
    0x3a, 0x46, 0x80, 0x80, 0x80, 0x9f, 0x82, 0x42,
    0x3c,

    /* U+48 "H" */
    0xe7, 0x42, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42,
    0xe7,

    /* U+49 "I" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0xfe,

    /* U+4A "J" */
    0x3f, 0x4, 0x4, 0x4, 0x4, 0x84, 0x84, 0xcc,
    0x78,

    /* U+4B "K" */
    0xf7, 0x21, 0x11, 0xb, 0x6, 0x82, 0x21, 0x10,
    0x84, 0xf3, 0x80,

    /* U+4C "L" */
    0xf8, 0x20, 0x20, 0x20, 0x20, 0x21, 0x21, 0x21,
    0xff,

    /* U+4D "M" */
    0xe1, 0xd8, 0x65, 0x29, 0x4a, 0x4c, 0x93, 0x24,
    0x9, 0x2, 0xf3, 0xc0,

    /* U+4E "N" */
    0xc7, 0xb0, 0x94, 0x4a, 0x24, 0x92, 0x29, 0x14,
    0x86, 0xf1, 0x0,

    /* U+4F "O" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0xc3, 0x42,
    0x3c,

    /* U+50 "P" */
    0xfc, 0x8d, 0xa, 0x37, 0xc8, 0x10, 0x20, 0xf8,

    /* U+51 "Q" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0xc3, 0x42,
    0x3c, 0x1d, 0x26,

    /* U+52 "R" */
    0xfc, 0x46, 0x42, 0x46, 0x78, 0x44, 0x42, 0x42,
    0xf1,

    /* U+53 "S" */
    0x75, 0x9a, 0x4, 0x7, 0x80, 0xc0, 0xc3, 0xfc,

    /* U+54 "T" */
    0xff, 0x24, 0x40, 0x81, 0x2, 0x4, 0x8, 0x7c,

    /* U+55 "U" */
    0xf7, 0xa0, 0x90, 0x48, 0x24, 0x12, 0x9, 0x4,
    0xc6, 0x3c, 0x0,

    /* U+56 "V" */
    0xe3, 0xa0, 0x90, 0x44, 0x22, 0x20, 0x90, 0x50,
    0x28, 0x8, 0x0,

    /* U+57 "W" */
    0xf3, 0xa0, 0x52, 0x49, 0xa5, 0x52, 0xa9, 0x4c,
    0xc6, 0x23, 0x0,

    /* U+58 "X" */
    0xc7, 0x42, 0x24, 0x28, 0x10, 0x28, 0x44, 0x42,
    0xe7,

    /* U+59 "Y" */
    0xe3, 0xa1, 0x8, 0x82, 0x80, 0x80, 0x40, 0x20,
    0x10, 0x3e, 0x0,

    /* U+5A "Z" */
    0x7c, 0x89, 0x20, 0x41, 0x4, 0x18, 0xa1, 0xfe,

    /* U+5B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x70,

    /* U+5C "\\" */
    0x82, 0x4, 0x10, 0x40, 0x82, 0x4, 0x10, 0x20,
    0x81,

    /* U+5D "]" */
    0xe4, 0x92, 0x49, 0x24, 0xf0,

    /* U+5E "^" */
    0x21, 0x48, 0xa1,

    /* U+5F "_" */
    0xff, 0xc0,

    /* U+60 "`" */
    0x8, 0x80,

    /* U+61 "a" */
    0x78, 0x9, 0xf6, 0x28, 0x51, 0x9d, 0x80,

    /* U+62 "b" */
    0xc0, 0x40, 0x40, 0x5c, 0x62, 0x41, 0x41, 0x41,
    0x62, 0xdc,

    /* U+63 "c" */
    0x3e, 0x42, 0x80, 0x80, 0x80, 0x42, 0x3c,

    /* U+64 "d" */
    0x6, 0x2, 0x2, 0x3a, 0x46, 0x82, 0x82, 0x82,
    0x46, 0x3b,

    /* U+65 "e" */
    0x38, 0x8a, 0xf, 0xf8, 0x8, 0x4f, 0x0,

    /* U+66 "f" */
    0x1e, 0x40, 0x87, 0xe2, 0x4, 0x8, 0x10, 0x21,
    0xf8,

    /* U+67 "g" */
    0x3b, 0x46, 0x82, 0x82, 0x82, 0x46, 0x3a, 0x2,
    0x6, 0x3c,

    /* U+68 "h" */
    0xc0, 0x40, 0x40, 0x5c, 0x62, 0x42, 0x42, 0x42,
    0x42, 0xe7,

    /* U+69 "i" */
    0x10, 0x0, 0x3, 0x81, 0x2, 0x4, 0x8, 0x11,
    0xfc,

    /* U+6A "j" */
    0x10, 0x1, 0xf0, 0x84, 0x21, 0x8, 0x42, 0x3f,
    0x0,

    /* U+6B "k" */
    0xc0, 0x40, 0x40, 0x4e, 0x48, 0x50, 0x70, 0x48,
    0x44, 0xc7,

    /* U+6C "l" */
    0x70, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x11,
    0xfc,

    /* U+6D "m" */
    0xf7, 0x24, 0x92, 0x49, 0x24, 0x92, 0x4b, 0xb6,

    /* U+6E "n" */
    0xdc, 0x62, 0x42, 0x42, 0x42, 0x42, 0xe7,

    /* U+6F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+70 "p" */
    0xdc, 0x62, 0x41, 0x41, 0x41, 0x62, 0x5c, 0x40,
    0x40, 0xf0,

    /* U+71 "q" */
    0x3b, 0x46, 0x82, 0x82, 0x82, 0x46, 0x3a, 0x2,
    0x2, 0xf,

    /* U+72 "r" */
    0xe6, 0x38, 0x20, 0x20, 0x20, 0x20, 0xfc,

    /* U+73 "s" */
    0x7a, 0x28, 0x1e, 0x6, 0x1f, 0x80,

    /* U+74 "t" */
    0x20, 0x20, 0xfe, 0x20, 0x20, 0x20, 0x20, 0x21,
    0x1e,

    /* U+75 "u" */
    0xce, 0x42, 0x42, 0x42, 0x42, 0x46, 0x3b,

    /* U+76 "v" */
    0xf3, 0x90, 0x88, 0x84, 0x41, 0x40, 0xa0, 0x30,

    /* U+77 "w" */
    0xe3, 0xa0, 0x92, 0x49, 0xa3, 0x51, 0xb0, 0xc8,

    /* U+78 "x" */
    0xe6, 0x44, 0x28, 0x10, 0x2c, 0x42, 0xe7,

    /* U+79 "y" */
    0xe7, 0x42, 0x44, 0x24, 0x28, 0x18, 0x10, 0x10,
    0x20, 0xf8,

    /* U+7A "z" */
    0xfe, 0x21, 0x8, 0x41, 0x1f, 0xc0,

    /* U+7B "{" */
    0x29, 0x25, 0x12, 0x49, 0x10,

    /* U+7C "|" */
    0xff, 0xf0,

    /* U+7D "}" */
    0x89, 0x24, 0x52, 0x49, 0x40,

    /* U+7E "~" */
    0x70, 0x18
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 154, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 154, .box_w = 2, .box_h = 10, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 154, .box_w = 5, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 7, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 29, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 154, .box_w = 2, .box_h = 4, .ofs_x = 4, .ofs_y = 6},
    {.bitmap_index = 46, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 51, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 56, .adv_w = 154, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 62, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 154, .box_w = 3, .box_h = 5, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 72, .adv_w = 154, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 73, .adv_w = 154, .box_w = 2, .box_h = 2, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 154, .box_w = 2, .box_h = 7, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 154, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 173, .adv_w = 154, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 180, .adv_w = 154, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 183, .adv_w = 154, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 190, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 154, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 206, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 154, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 368, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 459, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 468, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 473, .adv_w = 154, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 476, .adv_w = 154, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 478, .adv_w = 154, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 480, .adv_w = 154, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 154, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 540, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 154, .box_w = 5, .box_h = 13, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 568, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 154, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 154, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 154, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 619, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 629, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 154, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 154, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 154, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 691, .adv_w = 154, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 702, .adv_w = 154, .box_w = 1, .box_h = 12, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 704, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 709, .adv_w = 154, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
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
lv_font_t tlwgmono16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TLWGMONO16*/

