#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 45 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef DEJASANSMONO45
#define DEJASANSMONO45 1
#endif

#if DEJASANSMONO45

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+2C "," */
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3e, 0x7e, 0x7c,
    0x7c, 0x78, 0xf8, 0xf0, 0xf0,

    /* U+2E "." */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+30 "0" */
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x1, 0xff, 0xc0,
    0x1f, 0xff, 0x1, 0xe0, 0x3c, 0x1e, 0x0, 0xf0,
    0xf0, 0x7, 0x8f, 0x0, 0x1e, 0x78, 0x0, 0xf3,
    0xc0, 0x7, 0x9e, 0x0, 0x3d, 0xe0, 0x0, 0xff,
    0x0, 0x7, 0xf8, 0x0, 0x3f, 0xc0, 0x1, 0xfe,
    0xf, 0xf, 0xf0, 0xfc, 0x7f, 0x87, 0xe3, 0xfc,
    0x3f, 0x1f, 0xe1, 0xf8, 0xff, 0x7, 0x87, 0xf8,
    0x0, 0x3f, 0xc0, 0x1, 0xfe, 0x0, 0xf, 0x78,
    0x0, 0xf3, 0xc0, 0x7, 0x9e, 0x0, 0x3c, 0xf0,
    0x1, 0xe3, 0xc0, 0x1e, 0x1e, 0x1, 0xf0, 0x78,
    0xf, 0x1, 0xff, 0xf0, 0x7, 0xff, 0x0, 0x1f,
    0xf0, 0x0, 0x0, 0x0,

    /* U+31 "1" */
    0x3, 0xf0, 0xf, 0xfe, 0x3, 0xff, 0xc0, 0x7f,
    0xf8, 0xf, 0xcf, 0x1, 0x81, 0xe0, 0x0, 0x3c,
    0x0, 0x7, 0x80, 0x0, 0xf0, 0x0, 0x1e, 0x0,
    0x3, 0xc0, 0x0, 0x78, 0x0, 0xf, 0x0, 0x1,
    0xe0, 0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0xf0,
    0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0, 0x78, 0x0,
    0xf, 0x0, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0x7,
    0x80, 0x0, 0xf0, 0x0, 0x1e, 0x0, 0x3, 0xc0,
    0x0, 0x78, 0x0, 0xf, 0x0, 0x1, 0xe0, 0x1f,
    0xff, 0xfb, 0xff, 0xff, 0x7f, 0xff, 0xe0,

    /* U+32 "2" */
    0x0, 0x0, 0x3, 0xff, 0xc0, 0xff, 0xff, 0xf,
    0xff, 0xf8, 0xf0, 0x7, 0xcc, 0x0, 0x3e, 0x0,
    0x3, 0xe0, 0x0, 0x1f, 0x0, 0x1, 0xf0, 0x0,
    0x1f, 0x0, 0x1, 0xf0, 0x0, 0x1f, 0x0, 0x1,
    0xf0, 0x0, 0x3e, 0x0, 0x3, 0xe0, 0x0, 0x7c,
    0x0, 0xf, 0xc0, 0x0, 0xf8, 0x0, 0x1f, 0x0,
    0x3, 0xe0, 0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1,
    0xf8, 0x0, 0x1f, 0x0, 0x3, 0xe0, 0x0, 0x7c,
    0x0, 0xf, 0x80, 0x1, 0xf0, 0x0, 0x3e, 0x0,
    0x7, 0xc0, 0x0, 0xf8, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+33 "3" */
    0x0, 0x0, 0x1, 0xff, 0xf0, 0x1f, 0xff, 0xe0,
    0xff, 0xff, 0x87, 0x0, 0x3e, 0x0, 0x0, 0xf0,
    0x0, 0x7, 0xc0, 0x0, 0x1e, 0x0, 0x0, 0xf0,
    0x0, 0x7, 0x80, 0x0, 0x3c, 0x0, 0x1, 0xe0,
    0x0, 0x1e, 0x0, 0x1, 0xf0, 0x0, 0x1f, 0x0,
    0x7f, 0xe0, 0x3, 0xfe, 0x0, 0x1f, 0xfc, 0x0,
    0x1, 0xf0, 0x0, 0x3, 0xc0, 0x0, 0xf, 0x0,
    0x0, 0x78, 0x0, 0x1, 0xe0, 0x0, 0xf, 0x0,
    0x0, 0x78, 0x0, 0x3, 0xc0, 0x0, 0x1e, 0x0,
    0x0, 0xf0, 0x0, 0xf, 0x40, 0x0, 0xfb, 0xc0,
    0xf, 0x9f, 0xff, 0xf8, 0xff, 0xff, 0x81, 0xff,
    0xf0, 0x0, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x7, 0xc0, 0x0, 0x1f, 0x80, 0x0, 0x3f,
    0x0, 0x0, 0xfe, 0x0, 0x3, 0xfc, 0x0, 0x7,
    0x78, 0x0, 0x1e, 0xf0, 0x0, 0x39, 0xe0, 0x0,
    0xe3, 0xc0, 0x3, 0xc7, 0x80, 0x7, 0xf, 0x0,
    0x1e, 0x1e, 0x0, 0x78, 0x3c, 0x0, 0xf0, 0x78,
    0x3, 0xc0, 0xf0, 0x7, 0x1, 0xe0, 0x1e, 0x3,
    0xc0, 0x78, 0x7, 0x80, 0xf0, 0xf, 0x3, 0xc0,
    0x1e, 0x7, 0x0, 0x3c, 0x1e, 0x0, 0x78, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x7, 0x80, 0x0, 0xf, 0x0, 0x0, 0x1e,
    0x0, 0x0, 0x3c, 0x0, 0x0, 0x78, 0x0, 0x0,
    0xf0, 0x0, 0x1, 0xe0, 0x0, 0x3, 0xc0,

    /* U+35 "5" */
    0x3f, 0xff, 0xe1, 0xff, 0xff, 0xf, 0xff, 0xf8,
    0x78, 0x0, 0x3, 0xc0, 0x0, 0x1e, 0x0, 0x0,
    0xf0, 0x0, 0x7, 0x80, 0x0, 0x3c, 0x0, 0x1,
    0xe0, 0x0, 0xf, 0x0, 0x0, 0x78, 0x0, 0x3,
    0xff, 0xc0, 0x1f, 0xff, 0x80, 0xff, 0xff, 0x7,
    0x1, 0xfc, 0x0, 0x3, 0xe0, 0x0, 0xf, 0x80,
    0x0, 0x3c, 0x0, 0x1, 0xf0, 0x0, 0x7, 0x80,
    0x0, 0x3c, 0x0, 0x1, 0xe0, 0x0, 0xf, 0x0,
    0x0, 0x78, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0,
    0x1, 0xe8, 0x0, 0x1f, 0x70, 0x1, 0xf3, 0xff,
    0xff, 0x1f, 0xff, 0xf0, 0x7f, 0xfe, 0x0, 0x0,
    0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0xff, 0xf8,
    0x1f, 0xff, 0xc1, 0xf8, 0x6, 0xf, 0x0, 0x0,
    0xf0, 0x0, 0x7, 0x80, 0x0, 0x78, 0x0, 0x3,
    0xc0, 0x0, 0x1e, 0x0, 0x1, 0xe0, 0x0, 0xf,
    0x0, 0x0, 0x78, 0x7f, 0x3, 0xcf, 0xfe, 0x1e,
    0xff, 0xf8, 0xff, 0x3, 0xe7, 0xf0, 0xf, 0xbf,
    0x0, 0x3d, 0xf8, 0x1, 0xef, 0x80, 0x7, 0xfc,
    0x0, 0x3f, 0xe0, 0x1, 0xff, 0x0, 0xf, 0x78,
    0x0, 0x7b, 0xc0, 0x3, 0xde, 0x0, 0x1e, 0xf0,
    0x1, 0xf3, 0xc0, 0xf, 0x1e, 0x0, 0x78, 0x7c,
    0xf, 0x83, 0xff, 0xfc, 0xf, 0xff, 0x80, 0x1f,
    0xf8, 0x0, 0x0, 0x0,

    /* U+37 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x1, 0xe0, 0x0, 0x1f, 0x0, 0x0, 0xf8,
    0x0, 0x7, 0x80, 0x0, 0x7c, 0x0, 0x3, 0xc0,
    0x0, 0x3e, 0x0, 0x1, 0xf0, 0x0, 0xf, 0x0,
    0x0, 0xf8, 0x0, 0x7, 0x80, 0x0, 0x7c, 0x0,
    0x3, 0xe0, 0x0, 0x1e, 0x0, 0x1, 0xf0, 0x0,
    0xf, 0x80, 0x0, 0x78, 0x0, 0x7, 0xc0, 0x0,
    0x3c, 0x0, 0x3, 0xe0, 0x0, 0x1f, 0x0, 0x0,
    0xf0, 0x0, 0xf, 0x80, 0x0, 0x7c, 0x0, 0x7,
    0xc0, 0x0, 0x3e, 0x0, 0x1, 0xe0, 0x0, 0x1f,
    0x0, 0x0, 0xf8, 0x0, 0x7, 0x80, 0x0,

    /* U+38 "8" */
    0x0, 0x20, 0x0, 0x1f, 0xf8, 0x3, 0xff, 0xe0,
    0x3f, 0xff, 0x83, 0xe0, 0x3e, 0x1e, 0x0, 0xf1,
    0xe0, 0x3, 0xcf, 0x0, 0x1e, 0x78, 0x0, 0xf3,
    0xc0, 0x7, 0x9e, 0x0, 0x3c, 0xf0, 0x1, 0xe3,
    0xc0, 0x1e, 0x1e, 0x0, 0xf0, 0x7c, 0x1f, 0x0,
    0xff, 0xf0, 0x1, 0xfe, 0x0, 0x7f, 0xfc, 0x7,
    0xc1, 0xf8, 0x78, 0x3, 0xc7, 0x80, 0xf, 0x3c,
    0x0, 0x7b, 0xc0, 0x1, 0xfe, 0x0, 0xf, 0xf0,
    0x0, 0x7f, 0x80, 0x3, 0xfc, 0x0, 0x1f, 0xe0,
    0x0, 0xff, 0x80, 0xf, 0x3e, 0x0, 0x79, 0xf8,
    0xf, 0xc7, 0xff, 0xfc, 0x1f, 0xff, 0xc0, 0x3f,
    0xf8, 0x0, 0x0, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x0, 0x3f, 0xf0, 0x3, 0xff, 0xe0,
    0x3f, 0xff, 0x83, 0xe0, 0x7c, 0x3e, 0x1, 0xf1,
    0xe0, 0x7, 0x9f, 0x0, 0x1e, 0xf0, 0x0, 0xf7,
    0x80, 0x7, 0xbc, 0x0, 0x3d, 0xe0, 0x1, 0xff,
    0x0, 0xf, 0xf8, 0x0, 0x7f, 0xc0, 0x3, 0xfe,
    0x0, 0x1f, 0x78, 0x1, 0xfb, 0xc0, 0xf, 0xdf,
    0x0, 0xfe, 0x7e, 0x1f, 0xf1, 0xff, 0xf7, 0x87,
    0xff, 0x3c, 0xf, 0xe1, 0xe0, 0x0, 0xe, 0x0,
    0x0, 0xf0, 0x0, 0x7, 0x80, 0x0, 0x3c, 0x0,
    0x3, 0xc0, 0x0, 0x1e, 0x0, 0x1, 0xe0, 0xc0,
    0x3f, 0x7, 0xff, 0xf0, 0x3f, 0xfe, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x0,

    /* U+41 "A" */
    0x0, 0x3e, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x1f,
    0xc0, 0x0, 0xf, 0xe0, 0x0, 0xf, 0x78, 0x0,
    0x7, 0xbc, 0x0, 0x3, 0xde, 0x0, 0x1, 0xef,
    0x80, 0x1, 0xe3, 0xc0, 0x0, 0xf1, 0xe0, 0x0,
    0x78, 0xf0, 0x0, 0x7c, 0x3c, 0x0, 0x3c, 0x1e,
    0x0, 0x1e, 0xf, 0x0, 0x1f, 0x7, 0xc0, 0xf,
    0x1, 0xe0, 0x7, 0x80, 0xf0, 0x3, 0xc0, 0x7c,
    0x3, 0xe0, 0x1e, 0x1, 0xe0, 0xf, 0x0, 0xf0,
    0x7, 0x80, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xf0,
    0x3f, 0xff, 0xf8, 0x3e, 0x0, 0x3e, 0x1e, 0x0,
    0xf, 0xf, 0x0, 0x7, 0x8f, 0x80, 0x3, 0xe7,
    0xc0, 0x1, 0xf3, 0xc0, 0x0, 0x79, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0x7, 0x80,

    /* U+48 "H" */
    0xf0, 0x0, 0x7f, 0x80, 0x3, 0xfc, 0x0, 0x1f,
    0xe0, 0x0, 0xff, 0x0, 0x7, 0xf8, 0x0, 0x3f,
    0xc0, 0x1, 0xfe, 0x0, 0xf, 0xf0, 0x0, 0x7f,
    0x80, 0x3, 0xfc, 0x0, 0x1f, 0xe0, 0x0, 0xff,
    0x0, 0x7, 0xf8, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3, 0xfc,
    0x0, 0x1f, 0xe0, 0x0, 0xff, 0x0, 0x7, 0xf8,
    0x0, 0x3f, 0xc0, 0x1, 0xfe, 0x0, 0xf, 0xf0,
    0x0, 0x7f, 0x80, 0x3, 0xfc, 0x0, 0x1f, 0xe0,
    0x0, 0xff, 0x0, 0x7, 0xf8, 0x0, 0x3f, 0xc0,
    0x1, 0xfe, 0x0, 0xf, 0xf0, 0x0, 0x78,

    /* U+4D "M" */
    0xfc, 0x0, 0x7f, 0xf8, 0x0, 0xff, 0xf8, 0x3,
    0xff, 0xf0, 0x7, 0xff, 0xe0, 0xf, 0xfe, 0xe0,
    0x3b, 0xfd, 0xc0, 0x77, 0xfb, 0x80, 0xef, 0xf3,
    0x83, 0x9f, 0xe7, 0x7, 0x3f, 0xce, 0xe, 0x7f,
    0x8e, 0x38, 0xff, 0x1c, 0x71, 0xfe, 0x38, 0xe3,
    0xfc, 0x3b, 0x87, 0xf8, 0x77, 0xf, 0xf0, 0xee,
    0x1f, 0xe0, 0xf8, 0x3f, 0xc1, 0xf0, 0x7f, 0x83,
    0xe0, 0xff, 0x3, 0x81, 0xfe, 0x0, 0x3, 0xfc,
    0x0, 0x7, 0xf8, 0x0, 0xf, 0xf0, 0x0, 0x1f,
    0xe0, 0x0, 0x3f, 0xc0, 0x0, 0x7f, 0x80, 0x0,
    0xff, 0x0, 0x1, 0xfe, 0x0, 0x3, 0xfc, 0x0,
    0x7, 0xf8, 0x0, 0xf, 0xf0, 0x0, 0x1e,

    /* U+56 "V" */
    0xf8, 0x0, 0xf, 0xbc, 0x0, 0x7, 0x9f, 0x0,
    0x3, 0xcf, 0x80, 0x3, 0xe3, 0xc0, 0x1, 0xf1,
    0xe0, 0x0, 0xf0, 0xf8, 0x0, 0xf8, 0x7c, 0x0,
    0x7c, 0x1e, 0x0, 0x3c, 0xf, 0x0, 0x1e, 0x7,
    0xc0, 0x1f, 0x1, 0xe0, 0xf, 0x80, 0xf0, 0x7,
    0x80, 0x78, 0x3, 0xc0, 0x3e, 0x3, 0xe0, 0xf,
    0x1, 0xe0, 0x7, 0x80, 0xf0, 0x3, 0xe0, 0x78,
    0x0, 0xf0, 0x78, 0x0, 0x78, 0x3c, 0x0, 0x3c,
    0x1e, 0x0, 0xf, 0x1f, 0x0, 0x7, 0x8f, 0x0,
    0x3, 0xc7, 0x80, 0x1, 0xe3, 0xc0, 0x0, 0x7b,
    0xc0, 0x0, 0x3d, 0xe0, 0x0, 0x1e, 0xf0, 0x0,
    0x7, 0x78, 0x0, 0x3, 0xf8, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0xfe, 0x0, 0x0, 0x3e, 0x0, 0x0,

    /* U+6B "k" */
    0xf0, 0x0, 0x7, 0x80, 0x0, 0x3c, 0x0, 0x1,
    0xe0, 0x0, 0xf, 0x0, 0x0, 0x78, 0x0, 0x3,
    0xc0, 0x0, 0x1e, 0x0, 0x0, 0xf0, 0x0, 0x7,
    0x80, 0x0, 0x3c, 0x0, 0xf9, 0xe0, 0xf, 0x8f,
    0x0, 0xf8, 0x78, 0xf, 0x83, 0xc0, 0xf8, 0x1e,
    0xf, 0x80, 0xf0, 0xf8, 0x7, 0x8f, 0x80, 0x3c,
    0xf0, 0x1, 0xff, 0x80, 0xf, 0xfe, 0x0, 0x7f,
    0xf8, 0x3, 0xf3, 0xc0, 0x1f, 0x1f, 0x0, 0xf0,
    0x7c, 0x7, 0x81, 0xf0, 0x3c, 0x7, 0x81, 0xe0,
    0x3e, 0xf, 0x0, 0xf8, 0x78, 0x3, 0xe3, 0xc0,
    0xf, 0x1e, 0x0, 0x7c, 0xf0, 0x1, 0xf7, 0x80,
    0x7, 0xc0,

    /* U+6D "m" */
    0x0, 0x0, 0x3, 0xdf, 0x8f, 0xcf, 0xff, 0x7f,
    0xbf, 0xff, 0xfe, 0xf8, 0xfc, 0x7b, 0xc1, 0xe0,
    0xff, 0x7, 0x83, 0xfc, 0x1e, 0xf, 0xf0, 0x78,
    0x3f, 0xc1, 0xe0, 0xff, 0x7, 0x83, 0xfc, 0x1e,
    0xf, 0xf0, 0x78, 0x3f, 0xc1, 0xe0, 0xff, 0x7,
    0x83, 0xfc, 0x1e, 0xf, 0xf0, 0x78, 0x3f, 0xc1,
    0xe0, 0xff, 0x7, 0x83, 0xfc, 0x1e, 0xf, 0xf0,
    0x78, 0x3f, 0xc1, 0xe0, 0xff, 0x7, 0x83, 0xfc,
    0x1e, 0xf, 0xf0, 0x78, 0x3c,

    /* U+6E "n" */
    0x0, 0x0, 0x1e, 0x3f, 0xe3, 0xdf, 0xfe, 0x7b,
    0xff, 0xef, 0xe0, 0x7d, 0xf8, 0x7, 0xbe, 0x0,
    0x7f, 0xc0, 0xf, 0xf0, 0x1, 0xfe, 0x0, 0x3f,
    0xc0, 0x7, 0xf8, 0x0, 0xff, 0x0, 0x1f, 0xe0,
    0x3, 0xfc, 0x0, 0x7f, 0x80, 0xf, 0xf0, 0x1,
    0xfe, 0x0, 0x3f, 0xc0, 0x7, 0xf8, 0x0, 0xff,
    0x0, 0x1f, 0xe0, 0x3, 0xfc, 0x0, 0x7f, 0x80,
    0xf, 0xf0, 0x1, 0xe0,

    /* U+7A "z" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x1f, 0x0, 0x7, 0x80, 0x3, 0xc0, 0x1, 0xf0,
    0x0, 0xf8, 0x0, 0x7c, 0x0, 0x1e, 0x0, 0xf,
    0x0, 0x7, 0x80, 0x3, 0xe0, 0x1, 0xf0, 0x0,
    0x78, 0x0, 0x3c, 0x0, 0x1e, 0x0, 0xf, 0x80,
    0x3, 0xc0, 0x1, 0xe0, 0x0, 0xf0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+3A9 "Ω" */
    0x0, 0xfe, 0x0, 0x3, 0xff, 0x80, 0x7, 0xff,
    0xc0, 0xf, 0x83, 0xe0, 0x1e, 0x0, 0xf0, 0x3c,
    0x0, 0x78, 0x3c, 0x0, 0x78, 0x78, 0x0, 0x3c,
    0x78, 0x0, 0x3c, 0x70, 0x0, 0x3c, 0xf0, 0x0,
    0x1e, 0xf0, 0x0, 0x1e, 0xf0, 0x0, 0x1e, 0xf0,
    0x0, 0x1e, 0xf0, 0x0, 0x1e, 0xf0, 0x0, 0x1e,
    0xf0, 0x0, 0x1e, 0xf0, 0x0, 0x1e, 0xf0, 0x0,
    0x1e, 0xf8, 0x0, 0x3e, 0x78, 0x0, 0x3c, 0x78,
    0x0, 0x3c, 0x7c, 0x0, 0x3c, 0x3c, 0x0, 0x78,
    0x3e, 0x0, 0x78, 0x1e, 0x0, 0xf0, 0xf, 0x0,
    0xe0, 0xf, 0x81, 0xe0, 0xff, 0xc3, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0xc3, 0xff,

    /* U+3BC "μ" */
    0xf0, 0x1, 0xe3, 0xc0, 0x7, 0x8f, 0x0, 0x1e,
    0x3c, 0x0, 0x78, 0xf0, 0x1, 0xe3, 0xc0, 0x7,
    0x8f, 0x0, 0x1e, 0x3c, 0x0, 0x78, 0xf0, 0x1,
    0xe3, 0xc0, 0x7, 0x8f, 0x0, 0x1e, 0x3c, 0x0,
    0x78, 0xf0, 0x1, 0xe3, 0xc0, 0x7, 0x8f, 0x0,
    0x1e, 0x3c, 0x0, 0x78, 0xf0, 0x1, 0xe3, 0xc0,
    0x7, 0x8f, 0x0, 0x3e, 0x3e, 0x0, 0xf8, 0xfc,
    0x7, 0xe3, 0xf8, 0x3f, 0x9f, 0xff, 0xef, 0xfd,
    0xff, 0x3f, 0xf1, 0xf0, 0x7b, 0xc0, 0x0, 0xf,
    0x0, 0x0, 0x3c, 0x0, 0x0, 0xf0, 0x0, 0x3,
    0xc0, 0x0, 0xf, 0x0, 0x0, 0x3c, 0x0, 0x0,
    0xf0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 433, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 433, .box_w = 8, .box_h = 13, .ofs_x = 9, .ofs_y = -6},
    {.bitmap_index = 14, .adv_w = 433, .box_w = 6, .box_h = 6, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 433, .box_w = 21, .box_h = 35, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 111, .adv_w = 433, .box_w = 19, .box_h = 33, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 433, .box_w = 20, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 433, .box_w = 21, .box_h = 35, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 367, .adv_w = 433, .box_w = 23, .box_h = 33, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 433, .box_w = 21, .box_h = 34, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 552, .adv_w = 433, .box_w = 21, .box_h = 35, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 644, .adv_w = 433, .box_w = 21, .box_h = 33, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 433, .box_w = 21, .box_h = 35, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 823, .adv_w = 433, .box_w = 21, .box_h = 35, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 915, .adv_w = 433, .box_w = 25, .box_h = 33, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 433, .box_w = 21, .box_h = 33, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 433, .box_w = 23, .box_h = 33, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1201, .adv_w = 433, .box_w = 25, .box_h = 33, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1305, .adv_w = 433, .box_w = 21, .box_h = 34, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1395, .adv_w = 433, .box_w = 22, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1464, .adv_w = 433, .box_w = 19, .box_h = 25, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 433, .box_w = 18, .box_h = 24, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1578, .adv_w = 433, .box_w = 24, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1671, .adv_w = 433, .box_w = 22, .box_h = 33, .ofs_x = 4, .ofs_y = -9}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xc, 0xe, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19, 0x21, 0x28, 0x2d,
    0x36, 0x4b, 0x4d, 0x4e, 0x5a, 0x389, 0x39c
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 925, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 23, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
lv_font_t dejaSansMono45 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 43,          /*The maximum line height required by the font*/
    .base_line = 9,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DEJASANSMONO45*/
