#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef TLWGMONO20BOLD
#define TLWGMONO20BOLD 1
#endif

#if TLWGMONO20BOLD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xff, 0xfb, 0x43, 0xf0,

    /* U+22 "\"" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+23 "#" */
    0x0, 0xd, 0x86, 0xc3, 0x61, 0x37, 0xff, 0xfe,
    0x6e, 0x36, 0x7f, 0xff, 0xe6, 0xc3, 0x61, 0xb0,
    0xd8, 0x0,

    /* U+24 "$" */
    0xc, 0x6, 0xf, 0xcf, 0xf6, 0x13, 0x1, 0xe0,
    0x3e, 0x3, 0xa0, 0xf8, 0xff, 0xf7, 0xf0, 0x60,
    0x30, 0x18,

    /* U+25 "%" */
    0x78, 0x7e, 0x33, 0x1f, 0xe7, 0xe3, 0xc3, 0x38,
    0x63, 0x31, 0x98, 0xcf, 0xe1, 0xc0,

    /* U+26 "&" */
    0x3e, 0x3f, 0x19, 0xc, 0x3, 0x3, 0xdb, 0xed,
    0x9e, 0xce, 0x7f, 0x9f, 0xc0,

    /* U+27 "'" */
    0xff, 0xf0,

    /* U+28 "(" */
    0x11, 0x9c, 0xce, 0x63, 0x18, 0xc6, 0x38, 0xc7,
    0x18, 0x40,

    /* U+29 ")" */
    0xcc, 0x66, 0x73, 0x33, 0x33, 0x76, 0x6c, 0xc0,

    /* U+2A "*" */
    0x18, 0xc, 0x6, 0x5f, 0xf7, 0xf1, 0xe1, 0xf8,
    0xcc, 0x0, 0x0,

    /* U+2B "+" */
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xc, 0x3f, 0xff,
    0xfc, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+2C "," */
    0x76, 0x6c, 0xc8,

    /* U+2D "-" */
    0xff, 0xff, 0xf0,

    /* U+2E "." */
    0xfc,

    /* U+2F "/" */
    0x1, 0x1, 0x80, 0xc0, 0xc0, 0x60, 0x60, 0x30,
    0x38, 0x18, 0x1c, 0xc, 0x6, 0x6, 0x3, 0x3,
    0x1, 0x80,

    /* U+30 "0" */
    0x3e, 0x3f, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x9f, 0xc7, 0xc0,

    /* U+31 "1" */
    0x8, 0x3c, 0x3e, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x1f, 0xff, 0xf8,

    /* U+32 "2" */
    0x3e, 0x3f, 0x98, 0xf8, 0x30, 0x18, 0x18, 0x38,
    0x38, 0x38, 0x38, 0xff, 0xff, 0xf0,

    /* U+33 "3" */
    0x3e, 0x3f, 0x98, 0x60, 0x31, 0xf0, 0xf8, 0xe,
    0x3, 0x1, 0xe1, 0xff, 0xcf, 0xc0,

    /* U+34 "4" */
    0xe, 0x7, 0x7, 0x87, 0xc3, 0x63, 0xb1, 0x99,
    0xff, 0xff, 0x83, 0x3, 0xe1, 0xf0,

    /* U+35 "5" */
    0x7f, 0x3f, 0x98, 0xf, 0xc7, 0xf3, 0x1c, 0x6,
    0x3, 0x1, 0xe1, 0xff, 0xcf, 0xc0,

    /* U+36 "6" */
    0xf, 0x8f, 0xce, 0xe, 0x6, 0xe3, 0xfb, 0xce,
    0xc3, 0x61, 0xb9, 0xcf, 0xc3, 0xc0,

    /* U+37 "7" */
    0xff, 0xff, 0xf0, 0x60, 0x60, 0x30, 0x18, 0x18,
    0xc, 0xe, 0x6, 0x3, 0x1, 0x0,

    /* U+38 "8" */
    0x3e, 0x3f, 0xb0, 0x78, 0x37, 0xfb, 0xfb, 0x8d,
    0x83, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+39 "9" */
    0x3c, 0x3f, 0x30, 0xd8, 0x6e, 0x73, 0xf8, 0xec,
    0x6, 0x7, 0x7, 0x3f, 0x1f, 0x0,

    /* U+3A ":" */
    0xfc, 0x0, 0x7, 0xe0,

    /* U+3B ";" */
    0x77, 0x0, 0x7, 0x66, 0xcc, 0x80,

    /* U+3C "<" */
    0x0, 0xc0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf, 0x0,
    0xf0, 0xf, 0x0, 0xc0,

    /* U+3D "=" */
    0xff, 0xff, 0xf0, 0x0, 0x0, 0xff, 0xff, 0xf0,

    /* U+3E ">" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc3, 0xc3,
    0xc3, 0xc0, 0xc0, 0x0,

    /* U+3F "?" */
    0x7c, 0xfe, 0xc7, 0xc3, 0x3, 0xf, 0x1e, 0x18,
    0x10, 0x0, 0x38, 0x38,

    /* U+40 "@" */
    0x1c, 0x7e, 0x67, 0xe3, 0xc3, 0xc7, 0xcf, 0xdb,
    0xdb, 0xdb, 0xdf, 0xcf, 0xe0, 0x61, 0x7f, 0x1e,

    /* U+41 "A" */
    0x3f, 0x1, 0xfc, 0x3, 0xe0, 0x1b, 0x1, 0xdc,
    0xc, 0x60, 0x63, 0x7, 0xfc, 0x3f, 0xe3, 0x83,
    0xbe, 0x3f, 0xf1, 0xf0,

    /* U+42 "B" */
    0x7f, 0x87, 0xfc, 0x30, 0x63, 0x6, 0x30, 0xe3,
    0xfc, 0x3f, 0xe3, 0x7, 0x30, 0x33, 0x3, 0x7f,
    0xe7, 0xfc,

    /* U+43 "C" */
    0x1f, 0x47, 0xfd, 0xc3, 0xf0, 0x2c, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x4e, 0x1c, 0xff, 0xf,
    0xc0,

    /* U+44 "D" */
    0xff, 0x1f, 0xf1, 0x87, 0x30, 0x76, 0x6, 0xc0,
    0xd8, 0x1b, 0x3, 0x60, 0x6c, 0x1b, 0xff, 0x7f,
    0x80,

    /* U+45 "E" */
    0x7f, 0xef, 0xfc, 0xc1, 0x99, 0xb3, 0x30, 0x7e,
    0xf, 0xc1, 0x9b, 0x30, 0x66, 0xd, 0xff, 0xbf,
    0xf0,

    /* U+46 "F" */
    0xff, 0xff, 0xfc, 0xc1, 0x9b, 0x33, 0xe0, 0x7c,
    0xd, 0x81, 0xb0, 0x30, 0x6, 0x3, 0xf8, 0x7f,
    0x0,

    /* U+47 "G" */
    0x1f, 0xc7, 0xf9, 0xc3, 0x70, 0x6c, 0x1, 0x80,
    0x31, 0xfe, 0x3f, 0xc0, 0xcc, 0x19, 0xff, 0xf,
    0x80,

    /* U+48 "H" */
    0xfb, 0xff, 0x7d, 0x83, 0x30, 0x66, 0xc, 0xff,
    0x9f, 0xf3, 0x6, 0x60, 0xcc, 0x1b, 0xef, 0xfd,
    0xf0,

    /* U+49 "I" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x3f, 0xff, 0xf0,

    /* U+4A "J" */
    0x1f, 0xe3, 0xfc, 0x6, 0x0, 0xc0, 0x18, 0x3,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x73, 0xfc, 0x1f,
    0x0,

    /* U+4B "K" */
    0xff, 0xef, 0xfe, 0x33, 0x83, 0x70, 0x36, 0x3,
    0xc0, 0x3f, 0x3, 0x30, 0x31, 0x83, 0x18, 0xfd,
    0xff, 0xcf,

    /* U+4C "L" */
    0xfe, 0x1f, 0xc0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x83, 0x30, 0x66, 0xf, 0xff, 0xff,
    0xf0,

    /* U+4D "M" */
    0xf0, 0x7f, 0x83, 0xde, 0x3c, 0xf1, 0xe7, 0xdf,
    0x36, 0xd9, 0xbe, 0xcc, 0xf6, 0x67, 0x33, 0x1,
    0xbe, 0x3f, 0xf1, 0xf0,

    /* U+4E "N" */
    0x71, 0xf7, 0x9f, 0x3c, 0x63, 0xc6, 0x3e, 0x63,
    0x66, 0x33, 0x63, 0x3e, 0x31, 0xe3, 0x1e, 0x7c,
    0xe7, 0xc6,

    /* U+4F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+50 "P" */
    0xff, 0x3f, 0xe3, 0x1c, 0xc3, 0x30, 0xcc, 0x73,
    0xf8, 0xfc, 0x30, 0xc, 0xf, 0xe3, 0xf8,

    /* U+51 "Q" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xce, 0x38, 0xfe, 0xf,
    0x81, 0xe6, 0x7f, 0xcc, 0x70,

    /* U+52 "R" */
    0xff, 0xf, 0xf8, 0x31, 0xc3, 0xc, 0x30, 0xc3,
    0x1c, 0x3f, 0x83, 0xf0, 0x31, 0x83, 0x1c, 0xfc,
    0xff, 0xc7,

    /* U+53 "S" */
    0x1f, 0x8f, 0xf7, 0x1d, 0x82, 0x70, 0xf, 0x81,
    0xf8, 0x7, 0x40, 0xf8, 0x7f, 0xf9, 0x7c,

    /* U+54 "T" */
    0xff, 0xff, 0xfc, 0xcf, 0x33, 0xcc, 0xc3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x3, 0xf8, 0xfe,

    /* U+55 "U" */
    0xfb, 0xff, 0x7d, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x33, 0x6, 0x60, 0xce, 0x38, 0xfe, 0xf,
    0x80,

    /* U+56 "V" */
    0xf8, 0xff, 0xc7, 0xdc, 0x1c, 0x60, 0xc3, 0x86,
    0xc, 0x60, 0x63, 0x3, 0xb8, 0xd, 0x80, 0x7c,
    0x1, 0xc0, 0xe, 0x0,

    /* U+57 "W" */
    0xf9, 0xff, 0x9f, 0x60, 0x66, 0x66, 0x6f, 0x66,
    0xf6, 0x6f, 0x62, 0xfe, 0x39, 0xc3, 0x9c, 0x39,
    0xc3, 0xc,

    /* U+58 "X" */
    0xf1, 0xfe, 0x3d, 0xc7, 0x1d, 0xc1, 0xf0, 0x1c,
    0x7, 0xc0, 0xf8, 0x3b, 0x8e, 0x3b, 0xc7, 0xf8,
    0xf0,

    /* U+59 "Y" */
    0xf1, 0xfe, 0x3c, 0xc6, 0x1c, 0xc1, 0xf0, 0x1e,
    0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0xfe, 0x1f,
    0xc0,

    /* U+5A "Z" */
    0x7f, 0xdf, 0xf6, 0x39, 0x8c, 0x67, 0x3, 0x81,
    0xc0, 0xe3, 0x30, 0xdc, 0x3f, 0xff, 0xff,

    /* U+5B "[" */
    0xf7, 0xb1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x7b, 0xc0,

    /* U+5C "\\" */
    0xc0, 0x60, 0x18, 0xc, 0x3, 0x1, 0x80, 0xe0,
    0x30, 0x1c, 0x6, 0x3, 0x0, 0xc0, 0x60, 0x18,
    0xc, 0x2,

    /* U+5D "]" */
    0x7b, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0xbd, 0xe0,

    /* U+5E "^" */
    0x8, 0x4, 0x7, 0x7, 0xc7, 0x77, 0x1f, 0x6,

    /* U+5F "_" */
    0xff, 0xf0,

    /* U+60 "`" */
    0xc3, 0xc, 0x20,

    /* U+61 "a" */
    0x3e, 0xf, 0xf0, 0x6, 0x1f, 0xc7, 0xf9, 0xc3,
    0x30, 0xe7, 0xfe, 0x3f, 0xc0,

    /* U+62 "b" */
    0x70, 0x7, 0x0, 0x30, 0x3, 0x78, 0x3f, 0xe3,
    0x87, 0x30, 0x33, 0x3, 0x30, 0x33, 0x87, 0x7f,
    0xe7, 0x78,

    /* U+63 "c" */
    0x1f, 0x9f, 0xfe, 0x1f, 0x2, 0xc0, 0x30, 0xe,
    0xd, 0xff, 0x1f, 0x0,

    /* U+64 "d" */
    0x3, 0xc0, 0x3c, 0x0, 0xc1, 0xec, 0x7f, 0xce,
    0x1c, 0xc0, 0xcc, 0xc, 0xc0, 0xce, 0x1c, 0x7f,
    0xe3, 0xee,

    /* U+65 "e" */
    0x1e, 0x1f, 0xee, 0x1f, 0xff, 0xff, 0xf0, 0xe,
    0xd, 0xff, 0x1f, 0x80,

    /* U+66 "f" */
    0x1f, 0xcf, 0xf3, 0x3, 0xfe, 0xff, 0x8c, 0x3,
    0x0, 0xc0, 0x30, 0xc, 0xf, 0xfb, 0xfe,

    /* U+67 "g" */
    0x1e, 0xef, 0xff, 0x87, 0x60, 0x6c, 0xd, 0x81,
    0xb8, 0x73, 0xfe, 0x1e, 0xc0, 0x18, 0x7, 0x1f,
    0xc3, 0xf0,

    /* U+68 "h" */
    0xe0, 0x1c, 0x1, 0x80, 0x37, 0x87, 0xf8, 0xe1,
    0x98, 0x33, 0x6, 0x60, 0xcc, 0x1b, 0xef, 0xfd,
    0xf0,

    /* U+69 "i" */
    0x18, 0x6, 0x0, 0x1, 0xf0, 0x7c, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0xf, 0xff, 0xff,

    /* U+6A "j" */
    0xc, 0xc, 0x0, 0xff, 0xff, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0xfe, 0xfc,

    /* U+6B "k" */
    0x70, 0xe, 0x0, 0xc0, 0x1b, 0xe3, 0x7c, 0x6e,
    0xf, 0x1, 0xe0, 0x3e, 0x6, 0xe1, 0xcf, 0xb9,
    0xf0,

    /* U+6C "l" */
    0x7c, 0x1f, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0xf, 0xff, 0xff,

    /* U+6D "m" */
    0xfd, 0xe7, 0xff, 0x99, 0xcc, 0xcc, 0x66, 0x63,
    0x33, 0x19, 0x98, 0xde, 0xe7, 0xf7, 0x38,

    /* U+6E "n" */
    0xef, 0x1f, 0xf1, 0xc3, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x37, 0xcf, 0xf9, 0xe0,

    /* U+6F "o" */
    0x1e, 0x1f, 0xee, 0x1b, 0x3, 0xc0, 0xf0, 0x3e,
    0x19, 0xfe, 0x1e, 0x0,

    /* U+70 "p" */
    0xf7, 0x8f, 0xfe, 0x38, 0x63, 0x3, 0x30, 0x33,
    0x3, 0x38, 0x73, 0xfe, 0x37, 0x83, 0x0, 0x30,
    0xf, 0xc0, 0xfc, 0x0,

    /* U+71 "q" */
    0x1e, 0xf7, 0xff, 0xe1, 0xcc, 0xc, 0xc0, 0xcc,
    0xc, 0xe1, 0xc7, 0xfc, 0x1e, 0xc0, 0xc, 0x0,
    0xc0, 0x3f, 0x3, 0xf0,

    /* U+72 "r" */
    0xf3, 0x9f, 0xf8, 0xf1, 0x1c, 0x3, 0x0, 0x60,
    0xc, 0x7, 0xfc, 0xff, 0x80,

    /* U+73 "s" */
    0x3f, 0xbf, 0xf8, 0x6f, 0x3, 0xf0, 0x1f, 0x7,
    0xff, 0xfe, 0x0,

    /* U+74 "t" */
    0x30, 0xc, 0x3, 0x3, 0xfe, 0xff, 0x8c, 0x3,
    0x0, 0xc0, 0x30, 0xc, 0x33, 0xfc, 0x7e,

    /* U+75 "u" */
    0x73, 0xc7, 0x3c, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x31, 0xc3, 0xfe, 0x1e, 0xe0,

    /* U+76 "v" */
    0xf9, 0xff, 0x9f, 0x30, 0xc3, 0xc, 0x19, 0x81,
    0xf8, 0xf, 0x0, 0xf0, 0xf, 0x0,

    /* U+77 "w" */
    0xf1, 0xff, 0x1f, 0x6e, 0xe6, 0xec, 0x2e, 0xc3,
    0xbc, 0x3b, 0xc3, 0xb8, 0x31, 0x80,

    /* U+78 "x" */
    0x79, 0xe7, 0x9e, 0x39, 0xc1, 0xf8, 0xf, 0x1,
    0xf8, 0x39, 0xcf, 0x9f, 0xf9, 0xf0,

    /* U+79 "y" */
    0xf3, 0xfe, 0x7d, 0x83, 0x18, 0xc3, 0x38, 0x76,
    0x7, 0xc0, 0xf0, 0xc, 0x1, 0x80, 0x60, 0x7f,
    0xf, 0xe0,

    /* U+7A "z" */
    0xff, 0xff, 0xf1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc7,
    0xff, 0xff, 0x80,

    /* U+7B "{" */
    0x18, 0xe3, 0xc, 0x30, 0xc7, 0x1c, 0x30, 0xc3,
    0xc, 0x30, 0xe1, 0x80,

    /* U+7C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+7D "}" */
    0x61, 0xc3, 0xc, 0x30, 0xc3, 0x6, 0x38, 0xc3,
    0xc, 0x31, 0xc6, 0x0,

    /* U+7E "~" */
    0x38, 0x1f, 0x3c, 0xf8, 0x1c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 192, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 192, .box_w = 3, .box_h = 12, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 192, .box_w = 6, .box_h = 6, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 11, .adv_w = 192, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 29, .adv_w = 192, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 47, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 192, .box_w = 2, .box_h = 6, .ofs_x = 5, .ofs_y = 6},
    {.bitmap_index = 76, .adv_w = 192, .box_w = 5, .box_h = 15, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 86, .adv_w = 192, .box_w = 4, .box_h = 15, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 94, .adv_w = 192, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 105, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 192, .box_w = 4, .box_h = 6, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 123, .adv_w = 192, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 126, .adv_w = 192, .box_w = 3, .box_h = 2, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 192, .box_w = 9, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 145, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 192, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 192, .box_w = 3, .box_h = 9, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 192, .box_w = 4, .box_h = 11, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 296, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 308, .adv_w = 192, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 316, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 328, .adv_w = 192, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 192, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 356, .adv_w = 192, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 192, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 192, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 653, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 192, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 192, .box_w = 5, .box_h = 15, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 815, .adv_w = 192, .box_w = 9, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 833, .adv_w = 192, .box_w = 5, .box_h = 15, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 843, .adv_w = 192, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 851, .adv_w = 192, .box_w = 12, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 853, .adv_w = 192, .box_w = 5, .box_h = 4, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 856, .adv_w = 192, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 192, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 962, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 192, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1010, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1027, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 192, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 192, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1102, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1122, .adv_w = 192, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 192, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1189, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 192, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1235, .adv_w = 192, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1246, .adv_w = 192, .box_w = 6, .box_h = 15, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 1258, .adv_w = 192, .box_w = 2, .box_h = 15, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 1262, .adv_w = 192, .box_w = 6, .box_h = 15, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 1274, .adv_w = 192, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 4}
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
lv_font_t tlwgmonoBold20 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
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



#endif /*#if TLWGMONO20BOLD*/

