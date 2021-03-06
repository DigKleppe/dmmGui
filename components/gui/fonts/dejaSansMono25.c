#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 25 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef DEJASANSMONO25
#define DEJASANSMONO25 1
#endif

#if DEJASANSMONO25

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xff, 0xff, 0x3, 0xf0,

    /* U+22 "\"" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+23 "#" */
    0x3, 0x1c, 0x6, 0x30, 0xc, 0x60, 0x30, 0xc0,
    0x63, 0xf, 0xff, 0xdf, 0xff, 0x86, 0x18, 0xc,
    0x60, 0x18, 0xc0, 0x31, 0x87, 0xff, 0xef, 0xff,
    0xc3, 0x18, 0xe, 0x30, 0x18, 0xe0, 0x31, 0x80,
    0x63, 0x0,

    /* U+24 "$" */
    0x4, 0x0, 0x80, 0x10, 0xf, 0xc7, 0xfd, 0xc8,
    0xb1, 0x6, 0x20, 0xc4, 0xe, 0x80, 0xfc, 0x7,
    0xe0, 0x4c, 0x8, 0xc1, 0x18, 0x23, 0xc4, 0xff,
    0xf8, 0xfc, 0x2, 0x0, 0x40, 0x8, 0x1, 0x0,

    /* U+25 "%" */
    0x3c, 0x1, 0xf8, 0xe, 0x70, 0x30, 0xc0, 0xc3,
    0x3, 0xc, 0xe, 0x70, 0x9f, 0x8e, 0x3d, 0xe0,
    0x1e, 0x3, 0xcf, 0x18, 0x7e, 0x3, 0x9c, 0xc,
    0x30, 0x30, 0xc0, 0xe7, 0x1, 0xf8, 0x3, 0xc0,

    /* U+26 "&" */
    0xf, 0x80, 0x7f, 0x3, 0x84, 0xc, 0x0, 0x30,
    0x0, 0xc0, 0x1, 0x80, 0x7, 0x0, 0x36, 0x1,
    0x9c, 0x3c, 0x38, 0xf0, 0x63, 0xc0, 0xcf, 0x3,
    0xee, 0x7, 0x1c, 0x3e, 0x3f, 0xd8, 0x7e, 0x70,

    /* U+27 "'" */
    0xff, 0xfc,

    /* U+28 "(" */
    0x19, 0x8c, 0x66, 0x31, 0x98, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0x63, 0x18, 0x63, 0xc, 0x60,

    /* U+29 ")" */
    0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0x31, 0x8c, 0xc6, 0x63, 0x0,

    /* U+2A "*" */
    0x6, 0x0, 0x60, 0x46, 0x26, 0x66, 0x1f, 0x80,
    0x60, 0x1f, 0x86, 0x66, 0x46, 0x20, 0x60, 0x6,
    0x0,

    /* U+2B "+" */
    0x6, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0, 0x60,
    0x3, 0x3, 0xff, 0xff, 0xff, 0x6, 0x0, 0x30,
    0x1, 0x80, 0xc, 0x0, 0x60, 0x0,

    /* U+2C "," */
    0x77, 0x76, 0xec, 0xc0,

    /* U+2D "-" */
    0xff, 0xf0,

    /* U+2E "." */
    0xff, 0x80,

    /* U+2F "/" */
    0x0, 0x30, 0x6, 0x0, 0x60, 0xe, 0x0, 0xc0,
    0x1c, 0x1, 0x80, 0x38, 0x3, 0x0, 0x70, 0x6,
    0x0, 0xe0, 0xc, 0x0, 0xc0, 0x18, 0x1, 0x80,
    0x30, 0x3, 0x0, 0x70, 0x6, 0x0, 0xe0, 0x0,

    /* U+30 "0" */
    0xf, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0x60, 0x6c,
    0x3, 0xc0, 0x3c, 0xe3, 0xce, 0x3c, 0xe3, 0xc0,
    0x3c, 0x3, 0xc0, 0x36, 0x6, 0x60, 0x67, 0xe,
    0x3f, 0xc0, 0xf0,

    /* U+31 "1" */
    0x3e, 0x1f, 0xc3, 0xd8, 0x3, 0x0, 0x60, 0xc,
    0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18, 0x3,
    0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x7f, 0xef,
    0xfc,

    /* U+32 "2" */
    0x3f, 0x1f, 0xf3, 0x83, 0x0, 0x30, 0x6, 0x0,
    0xc0, 0x18, 0x6, 0x1, 0xc0, 0x30, 0xc, 0x3,
    0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xff, 0xff,
    0xfc,

    /* U+33 "3" */
    0x3f, 0x7, 0xfc, 0x40, 0xc0, 0x6, 0x0, 0x60,
    0x6, 0x0, 0xe0, 0xfc, 0xf, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x30, 0x3, 0x0, 0x7c, 0xe,
    0xff, 0xc3, 0xf8,

    /* U+34 "4" */
    0x1, 0xc0, 0xe, 0x0, 0xf0, 0xd, 0x80, 0x6c,
    0x6, 0x60, 0x33, 0x3, 0x18, 0x30, 0xc1, 0x86,
    0x18, 0x30, 0xc1, 0x8f, 0xff, 0xff, 0xfc, 0x3,
    0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,

    /* U+35 "5" */
    0x7f, 0xcf, 0xf9, 0x80, 0x30, 0x6, 0x0, 0xc0,
    0x1f, 0xc3, 0xfc, 0x41, 0xc0, 0x1c, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x3e, 0xe, 0xff, 0x8f,
    0xe0,

    /* U+36 "6" */
    0xf, 0xc1, 0xfe, 0x38, 0x26, 0x0, 0x60, 0xc,
    0x0, 0xcf, 0x8d, 0xfc, 0xf0, 0xee, 0x7, 0xe0,
    0x3c, 0x3, 0xc0, 0x3e, 0x3, 0x60, 0x77, 0xe,
    0x3f, 0xc0, 0xf8,

    /* U+37 "7" */
    0xff, 0xff, 0xfc, 0x3, 0x0, 0x60, 0x1c, 0x3,
    0x0, 0x60, 0x1c, 0x3, 0x0, 0xe0, 0x1c, 0x3,
    0x0, 0xe0, 0x18, 0x3, 0x0, 0xe0, 0x18, 0x7,
    0x0,

    /* U+38 "8" */
    0x1f, 0x83, 0xfc, 0x70, 0xe6, 0x6, 0x60, 0x66,
    0x6, 0x70, 0xc3, 0xf8, 0xf, 0xc3, 0xe, 0x60,
    0x7c, 0x3, 0xc0, 0x3c, 0x3, 0xe0, 0x77, 0xe,
    0x7f, 0xe1, 0xf8,

    /* U+39 "9" */
    0x1f, 0x3, 0xfc, 0x70, 0xee, 0x6, 0xc0, 0x7c,
    0x3, 0xc0, 0x3c, 0x7, 0xe0, 0x77, 0xf, 0x3f,
    0xb1, 0xf3, 0x0, 0x30, 0x6, 0x0, 0x64, 0x1c,
    0x7f, 0x83, 0xf0,

    /* U+3A ":" */
    0xff, 0x80, 0x0, 0x3, 0xfe,

    /* U+3B ";" */
    0x77, 0x70, 0x0, 0x0, 0x7, 0x77, 0x6e, 0xcc,

    /* U+3C "<" */
    0x0, 0x8, 0x3, 0xc0, 0x7c, 0x1f, 0x83, 0xe0,
    0x78, 0x3, 0x80, 0xf, 0x80, 0x1f, 0x80, 0x1f,
    0x80, 0x3e, 0x0, 0x30,

    /* U+3D "=" */
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xe0,

    /* U+3E ">" */
    0x80, 0x7, 0x80, 0x1f, 0x0, 0x3f, 0x0, 0x3e,
    0x0, 0x3c, 0x0, 0xe0, 0x3e, 0xf, 0xc3, 0xf0,
    0x3e, 0x1, 0x80, 0x0,

    /* U+3F "?" */
    0x3e, 0x7f, 0xb0, 0xe0, 0x30, 0x18, 0xc, 0xc,
    0xc, 0xc, 0xe, 0x6, 0x3, 0x1, 0x80, 0x0,
    0x0, 0x30, 0x18, 0xc, 0x0,

    /* U+40 "@" */
    0x7, 0xe0, 0x3f, 0xc1, 0xc3, 0x8c, 0x7, 0x70,
    0xd, 0x87, 0xbe, 0x3f, 0xf0, 0xc7, 0xc6, 0xf,
    0x18, 0x3c, 0x60, 0xf1, 0x83, 0xc6, 0xf, 0xc,
    0x76, 0x3f, 0xd8, 0x7b, 0x70, 0x0, 0xe0, 0x1,
    0xc0, 0x3, 0xfc, 0x3, 0xf0,

    /* U+41 "A" */
    0x3, 0x80, 0x7, 0x0, 0x1b, 0x0, 0x36, 0x0,
    0x6c, 0x1, 0x8c, 0x3, 0x18, 0x6, 0x30, 0x1c,
    0x70, 0x30, 0x60, 0x60, 0xc1, 0xff, 0xc3, 0xff,
    0x86, 0x3, 0xc, 0x7, 0x38, 0xe, 0x60, 0xc,
    0xc0, 0x18,

    /* U+42 "B" */
    0xff, 0xf, 0xfc, 0xc0, 0xec, 0x6, 0xc0, 0x6c,
    0x6, 0xc0, 0xef, 0xfc, 0xff, 0xcc, 0xe, 0xc0,
    0x7c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0xe,
    0xff, 0xef, 0xf8,

    /* U+43 "C" */
    0x7, 0xc1, 0xff, 0x38, 0x37, 0x0, 0x60, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0x6, 0x0, 0x60, 0x3, 0x83,
    0x1f, 0xf0, 0x7c,

    /* U+44 "D" */
    0xfe, 0xf, 0xf8, 0xc1, 0xcc, 0x6, 0xc0, 0x6c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x6, 0xc0, 0xec, 0x1c,
    0xff, 0x8f, 0xe0,

    /* U+45 "E" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x7, 0xff, 0xff, 0xf8, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xff, 0xff,
    0xfc,

    /* U+46 "F" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x7, 0xfe, 0xff, 0xd8, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x0,

    /* U+47 "G" */
    0x7, 0xc1, 0xfe, 0x38, 0x26, 0x0, 0x60, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc1, 0xfc, 0x1f, 0xc0,
    0x3c, 0x3, 0xc0, 0x36, 0x3, 0x60, 0x33, 0x87,
    0x1f, 0xf0, 0xfc,

    /* U+48 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xff, 0xf8, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x1e, 0x3, 0xc0, 0x78,
    0xc,

    /* U+49 "I" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xff, 0xff, 0xf0,

    /* U+4A "J" */
    0x1f, 0xc7, 0xf0, 0xc, 0x3, 0x0, 0xc0, 0x30,
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x38, 0xf, 0x6, 0xff, 0x8f, 0x80,

    /* U+4B "K" */
    0xc0, 0x76, 0x7, 0x30, 0x71, 0x87, 0xc, 0x70,
    0x67, 0x3, 0x70, 0x1f, 0x80, 0xfc, 0x7, 0x70,
    0x31, 0xc1, 0x86, 0xc, 0x38, 0x60, 0xe3, 0x3,
    0x18, 0x1c, 0xc0, 0x76, 0x3, 0x80,

    /* U+4C "L" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,
    0xff, 0xff, 0xff,

    /* U+4D "M" */
    0xe0, 0x3f, 0x83, 0xfc, 0x1f, 0xa0, 0xbd, 0x8d,
    0xec, 0x6f, 0x36, 0x79, 0xb3, 0xcd, 0x9e, 0x38,
    0xf1, 0xc7, 0x8e, 0x3c, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xc0,

    /* U+4E "N" */
    0xe0, 0x7c, 0xf, 0xc1, 0xf8, 0x3d, 0x87, 0xb0,
    0xf7, 0x1e, 0x63, 0xcc, 0x78, 0xcf, 0x19, 0xe3,
    0xbc, 0x37, 0x86, 0xf0, 0x7e, 0xf, 0xc0, 0xf8,
    0x1c,

    /* U+4F "O" */
    0xf, 0x83, 0xfc, 0x70, 0xe6, 0x6, 0xe0, 0x6c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3e, 0x6, 0x60, 0x67, 0xe,
    0x3f, 0xc1, 0xf0,

    /* U+50 "P" */
    0xff, 0x1f, 0xfb, 0x7, 0x60, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x7, 0xc1, 0xdf, 0xfb, 0xfc, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x0,

    /* U+51 "Q" */
    0xf, 0x83, 0xfc, 0x70, 0xe6, 0x6, 0xe0, 0x6c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3e, 0x7, 0x60, 0x67, 0xe,
    0x3f, 0xc0, 0xf8, 0x1, 0xc0, 0xe, 0x0, 0x40,

    /* U+52 "R" */
    0xff, 0x7, 0xfe, 0x30, 0x71, 0x80, 0xcc, 0x6,
    0x60, 0x33, 0x1, 0x98, 0x18, 0xff, 0xc7, 0xf0,
    0x30, 0xe1, 0x83, 0x8c, 0xc, 0x60, 0x73, 0x1,
    0x98, 0xe, 0xc0, 0x36, 0x1, 0xc0,

    /* U+53 "S" */
    0x1f, 0x8f, 0xf9, 0x83, 0x60, 0xc, 0x1, 0x80,
    0x38, 0x3, 0xc0, 0x3f, 0x1, 0xf8, 0x7, 0x0,
    0x30, 0x6, 0x0, 0xc0, 0x1e, 0xe, 0xff, 0xc7,
    0xe0,

    /* U+54 "T" */
    0xff, 0xff, 0xff, 0xf0, 0x30, 0x0, 0xc0, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc,
    0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc, 0x0,

    /* U+55 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x1b, 0x6, 0x7f, 0xc3,
    0xe0,

    /* U+56 "V" */
    0xc0, 0x1f, 0x1, 0xf8, 0xe, 0xc0, 0x66, 0x3,
    0x38, 0x38, 0xc1, 0x86, 0xc, 0x30, 0x60, 0xc7,
    0x6, 0x30, 0x31, 0x81, 0xdc, 0x6, 0xc0, 0x36,
    0x1, 0xb0, 0x7, 0x0, 0x38, 0x0,

    /* U+57 "W" */
    0xc0, 0x7, 0xc0, 0x1f, 0x80, 0x3b, 0x0, 0x76,
    0x38, 0xcc, 0x71, 0x98, 0xe3, 0x31, 0x46, 0x66,
    0xcc, 0xed, 0xb8, 0xdb, 0x61, 0xa2, 0xc3, 0x47,
    0x87, 0x8f, 0xf, 0x1e, 0x1e, 0x3c, 0x38, 0x38,
    0x30, 0x60,

    /* U+58 "X" */
    0x70, 0x1c, 0x70, 0x30, 0x60, 0xe0, 0xe1, 0x80,
    0xc7, 0x1, 0xdc, 0x1, 0xf0, 0x1, 0xe0, 0x3,
    0x80, 0x7, 0x80, 0x1f, 0x0, 0x77, 0x0, 0xc6,
    0x3, 0x86, 0xe, 0xe, 0x18, 0xc, 0x70, 0x1c,
    0xc0, 0x1c,

    /* U+59 "Y" */
    0xe0, 0x1d, 0xc0, 0xe3, 0x3, 0xe, 0x1c, 0x18,
    0x60, 0x73, 0x80, 0xcc, 0x1, 0xe0, 0x7, 0x80,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc,
    0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc, 0x0,

    /* U+5A "Z" */
    0xff, 0xff, 0xff, 0x0, 0x70, 0xe, 0x1, 0xc0,
    0x1c, 0x3, 0x80, 0x30, 0x6, 0x0, 0xe0, 0xc,
    0x1, 0x80, 0x38, 0x3, 0x0, 0x60, 0xe, 0x0,
    0xff, 0xff, 0xff,

    /* U+5B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xc6, 0x31, 0x8c, 0x7f, 0xe0,

    /* U+5C "\\" */
    0xe0, 0x6, 0x0, 0x70, 0x3, 0x0, 0x38, 0x1,
    0x80, 0x1c, 0x0, 0xc0, 0xe, 0x0, 0x60, 0x6,
    0x0, 0x30, 0x3, 0x0, 0x18, 0x1, 0x80, 0xc,
    0x0, 0xc0, 0xe, 0x0, 0x60, 0x7, 0x0, 0x30,

    /* U+5D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0x18, 0xc6, 0x31, 0xff, 0xe0,

    /* U+5E "^" */
    0x7, 0x0, 0x7c, 0x7, 0x70, 0x31, 0x83, 0x6,
    0x30, 0x1b, 0x80, 0x60,

    /* U+5F "_" */
    0xff, 0xfe,

    /* U+60 "`" */
    0xe1, 0xc3, 0x6, 0xc,

    /* U+61 "a" */
    0x3f, 0xf, 0xf9, 0x3, 0x0, 0x30, 0x6, 0x3f,
    0xdf, 0xff, 0x3, 0xc0, 0x78, 0xf, 0x3, 0xf0,
    0xf7, 0xf6, 0x7c, 0xc0,

    /* U+62 "b" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x9e,
    0x3f, 0xe7, 0x8e, 0xe0, 0xd8, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x1f, 0x6, 0xf1, 0xdf,
    0xf3, 0x3c, 0x0,

    /* U+63 "c" */
    0xf, 0x87, 0xfd, 0xc1, 0xb0, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x1, 0x80, 0x38,
    0x33, 0xfe, 0x1f, 0x0,

    /* U+64 "d" */
    0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x3c,
    0xcf, 0xfb, 0x8f, 0x60, 0xf8, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x1b, 0x7, 0x71, 0xe7,
    0xfc, 0x79, 0x80,

    /* U+65 "e" */
    0xf, 0x83, 0xfc, 0x70, 0x66, 0x3, 0xc0, 0x3f,
    0xff, 0xff, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0x60,
    0x7, 0x7, 0x3f, 0xf0, 0xfc,

    /* U+66 "f" */
    0x3, 0xe0, 0xfc, 0x30, 0x6, 0x0, 0xc1, 0xff,
    0xff, 0xf8, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1,
    0x80, 0x30, 0x0,

    /* U+67 "g" */
    0x1e, 0x67, 0xfd, 0xc7, 0xb0, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xd, 0x83, 0xb8,
    0xf3, 0xf6, 0x3c, 0xc0, 0x18, 0x3, 0x60, 0xcf,
    0xf0, 0xfc, 0x0,

    /* U+68 "h" */
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x33, 0xcd,
    0xfb, 0xc7, 0xe0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xc,

    /* U+69 "i" */
    0x6, 0x0, 0xc0, 0x18, 0x0, 0x0, 0x0, 0xfc,
    0x1f, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18, 0x3,
    0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x1f,
    0xff, 0xff, 0x80,

    /* U+6A "j" */
    0x6, 0xc, 0x18, 0x0, 0xf, 0xdf, 0x83, 0x6,
    0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc,
    0x18, 0x30, 0x61, 0xff, 0x7c,

    /* U+6B "k" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x83,
    0xb0, 0xe6, 0x38, 0xce, 0x1b, 0x83, 0xe0, 0x7e,
    0xe, 0xe1, 0x8e, 0x30, 0xc6, 0x1c, 0xc1, 0xd8,
    0x1b, 0x3, 0x80,

    /* U+6C "l" */
    0xfc, 0x1f, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x60, 0xe, 0x0,
    0xfc, 0xf, 0x80,

    /* U+6D "m" */
    0xdc, 0xef, 0xfe, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0xc6,
    0x3c, 0x63, 0xc6, 0x3c, 0x63,

    /* U+6E "n" */
    0xcf, 0x37, 0xef, 0x1f, 0x83, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x30,

    /* U+6F "o" */
    0x1f, 0x83, 0xfc, 0x70, 0xe6, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0x60,
    0x67, 0xe, 0x3f, 0xc1, 0xf8,

    /* U+70 "p" */
    0xcf, 0x1f, 0xf3, 0xc7, 0x70, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x83, 0x78,
    0xef, 0xf9, 0x9e, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x0,

    /* U+71 "q" */
    0x1e, 0x67, 0xfd, 0xc7, 0xb0, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xd, 0x83, 0xb8,
    0xf3, 0xfe, 0x3c, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80,

    /* U+72 "r" */
    0xcf, 0xb7, 0xff, 0x7, 0x80, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0x0,

    /* U+73 "s" */
    0x3f, 0x1f, 0xee, 0xb, 0x0, 0xc0, 0x38, 0x7,
    0xe0, 0x3e, 0x1, 0xc0, 0x30, 0xf, 0x7, 0xff,
    0x9f, 0x80,

    /* U+74 "t" */
    0xc, 0x1, 0x80, 0x30, 0x6, 0xf, 0xff, 0xff,
    0xc3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x70, 0x7, 0xe0,
    0x7c,

    /* U+75 "u" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0x1f, 0x8f, 0x7e,
    0xcf, 0x30,

    /* U+76 "v" */
    0xe0, 0x3b, 0x1, 0x98, 0xc, 0xe0, 0xe3, 0x6,
    0x18, 0x30, 0xe3, 0x83, 0x18, 0x18, 0xc0, 0x6e,
    0x3, 0x60, 0x1b, 0x0, 0x78, 0x3, 0x80,

    /* U+77 "w" */
    0xc0, 0x7, 0xc0, 0x1d, 0x80, 0x33, 0x0, 0x66,
    0x38, 0xcc, 0x71, 0x9c, 0xa7, 0x19, 0x4c, 0x36,
    0xd8, 0x6d, 0xb0, 0xd1, 0x60, 0xe3, 0x81, 0xc7,
    0x3, 0x86, 0x0,

    /* U+78 "x" */
    0x60, 0x31, 0x83, 0x8e, 0x38, 0x31, 0x80, 0xd8,
    0x7, 0xc0, 0x1c, 0x0, 0xe0, 0xd, 0x80, 0xee,
    0xe, 0x38, 0x60, 0xc7, 0x7, 0x70, 0x1c,

    /* U+79 "y" */
    0xe0, 0x3b, 0x1, 0x98, 0x1c, 0xe0, 0xc3, 0x6,
    0x18, 0x70, 0x63, 0x3, 0x18, 0x1d, 0xc0, 0x6c,
    0x3, 0x60, 0xe, 0x0, 0x70, 0x3, 0x80, 0x18,
    0x1, 0xc0, 0xc, 0x3, 0xe0, 0x1e, 0x0,

    /* U+7A "z" */
    0xff, 0xff, 0xf0, 0x1c, 0xe, 0x3, 0x1, 0x80,
    0xe0, 0x70, 0x18, 0xc, 0x6, 0x3, 0x80, 0xff,
    0xff, 0xf0,

    /* U+7B "{" */
    0x3, 0xc1, 0xf0, 0xe0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x1, 0xc3, 0xe0, 0xf8,
    0x7, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xe, 0x1, 0xf0, 0x3c,

    /* U+7C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+7D "}" */
    0xf0, 0x3e, 0x1, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xe0, 0x1f, 0x7,
    0xc3, 0x80, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0x1c, 0x3f, 0xf, 0x0,

    /* U+7E "~" */
    0x3c, 0xf, 0xf8, 0xf0, 0xfe, 0x3, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 241, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 241, .box_w = 2, .box_h = 18, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 241, .box_w = 7, .box_h = 7, .ofs_x = 4, .ofs_y = 11},
    {.bitmap_index = 13, .adv_w = 241, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 241, .box_w = 11, .box_h = 23, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 79, .adv_w = 241, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 241, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 241, .box_w = 2, .box_h = 7, .ofs_x = 6, .ofs_y = 11},
    {.bitmap_index = 145, .adv_w = 241, .box_w = 5, .box_h = 23, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 160, .adv_w = 241, .box_w = 5, .box_h = 23, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 175, .adv_w = 241, .box_w = 12, .box_h = 11, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 192, .adv_w = 241, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 214, .adv_w = 241, .box_w = 4, .box_h = 7, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 218, .adv_w = 241, .box_w = 6, .box_h = 2, .ofs_x = 4, .ofs_y = 6},
    {.bitmap_index = 220, .adv_w = 241, .box_w = 3, .box_h = 3, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 241, .box_w = 12, .box_h = 21, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 254, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 241, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 241, .box_w = 3, .box_h = 13, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 241, .box_w = 4, .box_h = 16, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 532, .adv_w = 241, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 552, .adv_w = 241, .box_w = 13, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 564, .adv_w = 241, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 584, .adv_w = 241, .box_w = 9, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 241, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 642, .adv_w = 241, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 241, .box_w = 10, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 241, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 241, .box_w = 13, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 241, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1017, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 241, .box_w = 12, .box_h = 21, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1101, .adv_w = 241, .box_w = 13, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1156, .adv_w = 241, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 241, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 241, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 241, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1311, .adv_w = 241, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 241, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1370, .adv_w = 241, .box_w = 5, .box_h = 23, .ofs_x = 6, .ofs_y = -4},
    {.bitmap_index = 1385, .adv_w = 241, .box_w = 12, .box_h = 21, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1417, .adv_w = 241, .box_w = 5, .box_h = 23, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 1432, .adv_w = 241, .box_w = 13, .box_h = 7, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1444, .adv_w = 241, .box_w = 15, .box_h = 1, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 1446, .adv_w = 241, .box_w = 6, .box_h = 5, .ofs_x = 3, .ofs_y = 15},
    {.bitmap_index = 1450, .adv_w = 241, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1470, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 241, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1517, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1544, .adv_w = 241, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1565, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1592, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1619, .adv_w = 241, .box_w = 10, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1643, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1670, .adv_w = 241, .box_w = 7, .box_h = 24, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1691, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1718, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1745, .adv_w = 241, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 241, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1784, .adv_w = 241, .box_w = 12, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1805, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1832, .adv_w = 241, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1859, .adv_w = 241, .box_w = 10, .box_h = 14, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1877, .adv_w = 241, .box_w = 10, .box_h = 14, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1895, .adv_w = 241, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1920, .adv_w = 241, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 241, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1961, .adv_w = 241, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1988, .adv_w = 241, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2011, .adv_w = 241, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2042, .adv_w = 241, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2060, .adv_w = 241, .box_w = 10, .box_h = 23, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 2089, .adv_w = 241, .box_w = 2, .box_h = 25, .ofs_x = 6, .ofs_y = -6},
    {.bitmap_index = 2096, .adv_w = 241, .box_w = 10, .box_h = 23, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 2125, .adv_w = 241, .box_w = 13, .box_h = 4, .ofs_x = 1, .ofs_y = 6}
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
lv_font_t dejaSansMono25 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 26,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DEJASANSMONO25*/

