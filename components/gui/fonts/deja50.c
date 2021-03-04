#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 50 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef DEJA50
#define DEJA50 1
#endif

#if DEJA50

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2E "." */
    0xff, 0xff, 0xff, 0xfc,

    /* U+30 "0" */
    0x0, 0x8, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0xff,
    0xf8, 0x0, 0xff, 0xfe, 0x0, 0xff, 0xff, 0x80,
    0xfc, 0x7, 0xe0, 0xfc, 0x1, 0xf8, 0x7c, 0x0,
    0x7c, 0x3e, 0x0, 0x3e, 0x3e, 0x0, 0xf, 0x9f,
    0x0, 0x7, 0xcf, 0x80, 0x3, 0xef, 0xc0, 0x1,
    0xf7, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7,
    0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80,
    0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f,
    0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0xf, 0x9f, 0x0, 0x7, 0xcf, 0x80, 0x3, 0xe7,
    0xc0, 0x1, 0xf1, 0xf0, 0x1, 0xf0, 0xf8, 0x0,
    0xf8, 0x7e, 0x0, 0xfc, 0x1f, 0x80, 0xfc, 0x7,
    0xff, 0xfc, 0x1, 0xff, 0xfc, 0x0, 0x7f, 0xfc,
    0x0, 0x1f, 0xf8, 0x0, 0x0, 0x40, 0x0,

    /* U+31 "1" */
    0x3, 0xfc, 0x0, 0xff, 0xf0, 0xf, 0xff, 0xc0,
    0x3f, 0xff, 0x0, 0xff, 0xfc, 0x3, 0xc1, 0xf0,
    0x0, 0x7, 0xc0, 0x0, 0x1f, 0x0, 0x0, 0x7c,
    0x0, 0x1, 0xf0, 0x0, 0x7, 0xc0, 0x0, 0x1f,
    0x0, 0x0, 0x7c, 0x0, 0x1, 0xf0, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x0, 0x0, 0x7c, 0x0, 0x1,
    0xf0, 0x0, 0x7, 0xc0, 0x0, 0x1f, 0x0, 0x0,
    0x7c, 0x0, 0x1, 0xf0, 0x0, 0x7, 0xc0, 0x0,
    0x1f, 0x0, 0x0, 0x7c, 0x0, 0x1, 0xf0, 0x0,
    0x7, 0xc0, 0x0, 0x1f, 0x0, 0x0, 0x7c, 0x0,
    0x1, 0xf0, 0x0, 0x7, 0xc0, 0x0, 0x1f, 0x0,
    0x7f, 0xff, 0xfd, 0xff, 0xff, 0xf7, 0xff, 0xff,
    0xdf, 0xff, 0xff,

    /* U+32 "2" */
    0x0, 0x0, 0x0, 0x1f, 0xff, 0x1, 0xff, 0xff,
    0x87, 0xff, 0xff, 0x8f, 0xff, 0xff, 0x9f, 0x0,
    0x3f, 0xb8, 0x0, 0x3f, 0x40, 0x0, 0x3f, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x7c, 0x0, 0x0, 0xf8,
    0x0, 0x1, 0xf0, 0x0, 0x3, 0xe0, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xf0, 0x0, 0xf, 0xc0, 0x0,
    0x3f, 0x0, 0x0, 0xfc, 0x0, 0x3, 0xf0, 0x0,
    0xf, 0xc0, 0x0, 0x3f, 0x0, 0x0, 0xfc, 0x0,
    0x3, 0xf0, 0x0, 0xf, 0xc0, 0x0, 0x3f, 0x0,
    0x0, 0xfc, 0x0, 0x3, 0xf0, 0x0, 0xf, 0xc0,
    0x0, 0x3f, 0x0, 0x0, 0xfc, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0,

    /* U+33 "3" */
    0x0, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x7f, 0xff,
    0xe0, 0x7f, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x60,
    0x1, 0xfc, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x7e,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x7e, 0x0,
    0x0, 0xfc, 0x0, 0x3, 0xf8, 0x3, 0xff, 0xf8,
    0x3, 0xff, 0xe0, 0x3, 0xff, 0x80, 0x3, 0xff,
    0xe0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0x7e, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x3e, 0x80, 0x0, 0x7e,
    0xe0, 0x1, 0xfc, 0xff, 0xff, 0xf8, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0x80, 0x0,
    0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x1, 0xfc, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0xf, 0xf0, 0x0, 0x3, 0xfe, 0x0, 0x0, 0x7f,
    0xc0, 0x0, 0x1e, 0xf8, 0x0, 0x7, 0x9f, 0x0,
    0x0, 0xf3, 0xe0, 0x0, 0x3c, 0x7c, 0x0, 0xf,
    0xf, 0x80, 0x1, 0xe1, 0xf0, 0x0, 0x78, 0x3e,
    0x0, 0x1e, 0x7, 0xc0, 0x3, 0xc0, 0xf8, 0x0,
    0xf0, 0x1f, 0x0, 0x3c, 0x3, 0xe0, 0xf, 0x80,
    0x7c, 0x1, 0xe0, 0xf, 0x80, 0x7c, 0x1, 0xf0,
    0x1f, 0x0, 0x3e, 0x3, 0xc0, 0x7, 0xc0, 0xf8,
    0x0, 0xf8, 0x3e, 0x0, 0x1f, 0x7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x3e, 0x0, 0x0,
    0x7, 0xc0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x3e, 0x0,

    /* U+35 "5" */
    0x3f, 0xff, 0xf8, 0x3f, 0xff, 0xf8, 0x3f, 0xff,
    0xf8, 0x3f, 0xff, 0xf8, 0x3e, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x3e, 0xfe, 0x0, 0x3f,
    0xff, 0xc0, 0x3f, 0xff, 0xf0, 0x3f, 0xff, 0xf8,
    0x3c, 0x7, 0xfc, 0x20, 0x0, 0xfc, 0x0, 0x0,
    0x7e, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3f, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x7e, 0x80, 0x0, 0xfe, 0xf0, 0x1, 0xfc,
    0xff, 0xff, 0xf8, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xe0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xfc, 0x0, 0x7f,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x7f, 0xff, 0xe0,
    0x7e, 0x0, 0x30, 0x7e, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x7, 0x80, 0x0,
    0x7, 0xc1, 0xfc, 0x3, 0xe3, 0xff, 0xc1, 0xf3,
    0xff, 0xf0, 0xfb, 0xff, 0xfc, 0x7f, 0xe0, 0x7f,
    0x3f, 0xc0, 0x1f, 0x9f, 0xc0, 0x7, 0xef, 0xe0,
    0x1, 0xf7, 0xe0, 0x0, 0xff, 0xf0, 0x0, 0x3f,
    0xf8, 0x0, 0x1f, 0xfc, 0x0, 0xf, 0xbe, 0x0,
    0x7, 0xdf, 0x0, 0x3, 0xef, 0x80, 0x1, 0xf7,
    0xc0, 0x0, 0xf9, 0xf0, 0x0, 0xf8, 0xf8, 0x0,
    0x7c, 0x3e, 0x0, 0x7e, 0x1f, 0x80, 0x7e, 0x7,
    0xff, 0xfe, 0x1, 0xff, 0xfe, 0x0, 0x7f, 0xfe,
    0x0, 0xf, 0xfc, 0x0, 0x0, 0x0, 0x0,

    /* U+37 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0x7, 0xc0, 0x0,
    0xf, 0x80, 0x0, 0x3e, 0x0, 0x0, 0x7c, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0x7, 0xc0,
    0x0, 0x1f, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x7c,
    0x0, 0x1, 0xf0, 0x0, 0x3, 0xe0, 0x0, 0xf,
    0x80, 0x0, 0x1f, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0xf8, 0x0, 0x1, 0xf0, 0x0, 0x7, 0xe0, 0x0,
    0xf, 0x80, 0x0, 0x1f, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0xf8, 0x0, 0x1, 0xf0, 0x0, 0x7, 0xc0,
    0x0, 0xf, 0x80, 0x0, 0x3f, 0x0, 0x0, 0x7c,
    0x0, 0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0x7,
    0xc0, 0x0, 0xf, 0x80, 0x0, 0x3e, 0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x8, 0x0, 0x0, 0xff, 0xe0, 0x1, 0xff,
    0xfc, 0x3, 0xff, 0xff, 0x81, 0xff, 0xff, 0xc1,
    0xf8, 0x3, 0xf0, 0xf8, 0x0, 0xf8, 0xfc, 0x0,
    0x7e, 0x7c, 0x0, 0x1f, 0x3e, 0x0, 0xf, 0x9f,
    0x0, 0x7, 0xcf, 0x80, 0x3, 0xe7, 0xc0, 0x1,
    0xf1, 0xf0, 0x1, 0xf0, 0xfc, 0x1, 0xf8, 0x3f,
    0x3, 0xf8, 0xf, 0xff, 0xf0, 0x0, 0xff, 0xe0,
    0x0, 0xff, 0xf8, 0x1, 0xff, 0xff, 0x1, 0xf8,
    0xf, 0xc1, 0xf0, 0x1, 0xf1, 0xf0, 0x0, 0x7c,
    0xf8, 0x0, 0x3e, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0xff, 0xf0, 0x0,
    0x7c, 0xfc, 0x0, 0x7e, 0x7f, 0x0, 0x7f, 0x1f,
    0xff, 0xff, 0x7, 0xff, 0xff, 0x1, 0xff, 0xff,
    0x0, 0x3f, 0xfe, 0x0, 0x0, 0x40, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x0, 0x0, 0xff, 0xc0, 0x1, 0xff,
    0xf8, 0x1, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x81,
    0xf8, 0x7, 0xe1, 0xf8, 0x1, 0xf0, 0xf8, 0x0,
    0x7c, 0x7c, 0x0, 0x3e, 0x7c, 0x0, 0xf, 0xbe,
    0x0, 0x7, 0xdf, 0x0, 0x3, 0xef, 0x80, 0x1,
    0xf7, 0xc0, 0x0, 0xff, 0xe0, 0x0, 0x7f, 0xf0,
    0x0, 0x3f, 0xfc, 0x0, 0x1f, 0xbe, 0x0, 0x1f,
    0xdf, 0x80, 0xf, 0xef, 0xe0, 0xf, 0xf3, 0xf8,
    0x1f, 0xf8, 0xff, 0xff, 0x7c, 0x3f, 0xff, 0x3e,
    0xf, 0xff, 0x1f, 0x0, 0xfe, 0xf, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0,
    0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0, 0x1,
    0xf0, 0x0, 0x1, 0xf8, 0x30, 0x1, 0xf8, 0x1f,
    0xff, 0xf8, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xf8,
    0x0, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,

    /* U+41 "A" */
    0x0, 0x3, 0xf0, 0x0, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0x0, 0x7f, 0x80, 0x0, 0x0, 0x1f, 0xe0,
    0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x3, 0xff,
    0x0, 0x0, 0x0, 0xfb, 0xc0, 0x0, 0x0, 0x7c,
    0xf8, 0x0, 0x0, 0x1f, 0x3e, 0x0, 0x0, 0x7,
    0x87, 0xc0, 0x0, 0x3, 0xe1, 0xf0, 0x0, 0x0,
    0xf8, 0x3c, 0x0, 0x0, 0x7c, 0xf, 0x80, 0x0,
    0x1f, 0x3, 0xe0, 0x0, 0x7, 0xc0, 0x78, 0x0,
    0x3, 0xe0, 0x1f, 0x0, 0x0, 0xf8, 0x7, 0xc0,
    0x0, 0x3c, 0x0, 0xf8, 0x0, 0x1f, 0x0, 0x3e,
    0x0, 0x7, 0xc0, 0x7, 0x80, 0x3, 0xe0, 0x1,
    0xf0, 0x0, 0xf8, 0x0, 0x7c, 0x0, 0x3e, 0x0,
    0xf, 0x80, 0x1f, 0xff, 0xff, 0xe0, 0x7, 0xff,
    0xff, 0xf8, 0x3, 0xff, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xff, 0xc0, 0x3e, 0x0, 0x0, 0xf8, 0x1f,
    0x0, 0x0, 0x3e, 0x7, 0xc0, 0x0, 0xf, 0x83,
    0xf0, 0x0, 0x1, 0xf0, 0xf8, 0x0, 0x0, 0x7c,
    0x3e, 0x0, 0x0, 0x1f, 0x1f, 0x80, 0x0, 0x3,
    0xe7, 0xc0, 0x0, 0x0, 0xf9, 0xf0, 0x0, 0x0,
    0x3f,

    /* U+56 "V" */
    0x7c, 0x0, 0x0, 0xf, 0xdf, 0x0, 0x0, 0x3,
    0xe7, 0xc0, 0x0, 0x0, 0xf8, 0xf8, 0x0, 0x0,
    0x7c, 0x3e, 0x0, 0x0, 0x1f, 0x7, 0xc0, 0x0,
    0x7, 0xc1, 0xf0, 0x0, 0x3, 0xe0, 0x7c, 0x0,
    0x0, 0xf8, 0xf, 0x80, 0x0, 0x7e, 0x3, 0xe0,
    0x0, 0x1f, 0x0, 0xfc, 0x0, 0x7, 0xc0, 0x1f,
    0x0, 0x3, 0xe0, 0x7, 0xc0, 0x0, 0xf8, 0x0,
    0xf8, 0x0, 0x7e, 0x0, 0x3e, 0x0, 0x1f, 0x0,
    0xf, 0x80, 0x7, 0xc0, 0x1, 0xf0, 0x3, 0xe0,
    0x0, 0x7c, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x3e,
    0x0, 0x3, 0xe0, 0x1f, 0x0, 0x0, 0xf8, 0x7,
    0xc0, 0x0, 0x1f, 0x3, 0xf0, 0x0, 0x7, 0xc0,
    0xf8, 0x0, 0x1, 0xf0, 0x3e, 0x0, 0x0, 0x3e,
    0x1f, 0x0, 0x0, 0xf, 0x87, 0xc0, 0x0, 0x1,
    0xf1, 0xf0, 0x0, 0x0, 0x7c, 0xf8, 0x0, 0x0,
    0x1f, 0x3e, 0x0, 0x0, 0x3, 0xff, 0x0, 0x0,
    0x0, 0xff, 0xc0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0x7, 0xf8, 0x0, 0x0, 0x1, 0xfe, 0x0,
    0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0xf, 0xc0,
    0x0,

    /* U+6D "m" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0xf0, 0xff, 0x80,
    0x7f, 0xc3, 0xe7, 0xff, 0x83, 0xff, 0xc7, 0xdf,
    0xff, 0x8f, 0xff, 0xcf, 0xbf, 0xff, 0x3f, 0xff,
    0x9f, 0xe0, 0x3f, 0x70, 0x1f, 0xbf, 0x80, 0x3f,
    0xc0, 0x1f, 0x7e, 0x0, 0x7f, 0x0, 0x3f, 0xfc,
    0x0, 0x7e, 0x0, 0x3f, 0xf0, 0x0, 0xf8, 0x0,
    0x7f, 0xe0, 0x1, 0xf0, 0x0, 0xff, 0xc0, 0x3,
    0xe0, 0x1, 0xff, 0x80, 0x7, 0xc0, 0x3, 0xff,
    0x0, 0xf, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0x0,
    0xf, 0xfc, 0x0, 0x3e, 0x0, 0x1f, 0xf8, 0x0,
    0x7c, 0x0, 0x3f, 0xf0, 0x0, 0xf8, 0x0, 0x7f,
    0xe0, 0x1, 0xf0, 0x0, 0xff, 0xc0, 0x3, 0xe0,
    0x1, 0xff, 0x80, 0x7, 0xc0, 0x3, 0xff, 0x0,
    0xf, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0x0, 0xf,
    0xfc, 0x0, 0x3e, 0x0, 0x1f, 0xf8, 0x0, 0x7c,
    0x0, 0x3f, 0xf0, 0x0, 0xf8, 0x0, 0x7f, 0xe0,
    0x1, 0xf0, 0x0, 0xff, 0xc0, 0x3, 0xe0, 0x1,
    0xf0,

    /* U+3A9 "Ω" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xc0,
    0x0, 0x3, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff,
    0xf0, 0x0, 0x3f, 0xff, 0xff, 0x0, 0xf, 0xe0,
    0x7, 0xf0, 0x3, 0xf0, 0x0, 0x3f, 0x0, 0xfc,
    0x0, 0x3, 0xf0, 0x3f, 0x0, 0x0, 0x3f, 0x7,
    0xc0, 0x0, 0x3, 0xe1, 0xf8, 0x0, 0x0, 0x7e,
    0x3e, 0x0, 0x0, 0x7, 0xc7, 0xc0, 0x0, 0x0,
    0xf9, 0xf0, 0x0, 0x0, 0xf, 0xbe, 0x0, 0x0,
    0x1, 0xf7, 0xc0, 0x0, 0x0, 0x3e, 0xf8, 0x0,
    0x0, 0x7, 0xdf, 0x0, 0x0, 0x0, 0xfb, 0xe0,
    0x0, 0x0, 0x1f, 0x7c, 0x0, 0x0, 0x3, 0xef,
    0x80, 0x0, 0x0, 0x7d, 0xf0, 0x0, 0x0, 0xf,
    0x9f, 0x0, 0x0, 0x3, 0xe3, 0xe0, 0x0, 0x0,
    0x7c, 0x7c, 0x0, 0x0, 0xf, 0x87, 0xc0, 0x0,
    0x3, 0xe0, 0xfc, 0x0, 0x0, 0x7c, 0xf, 0x80,
    0x0, 0x1f, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x1f,
    0x80, 0x1, 0xf8, 0x1, 0xf8, 0x0, 0x7e, 0x0,
    0x1f, 0xc0, 0x1f, 0x80, 0x1, 0xfc, 0x7, 0xe0,
    0x1f, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xf8, 0x3f,
    0xff, 0xff, 0xff, 0x7, 0xff, 0xff, 0xff, 0xe0,
    0xff, 0xfe,

    /* U+3BC "μ" */
    0xf8, 0x0, 0x3e, 0x1f, 0x0, 0x7, 0xc3, 0xe0,
    0x0, 0xf8, 0x7c, 0x0, 0x1f, 0xf, 0x80, 0x3,
    0xe1, 0xf0, 0x0, 0x7c, 0x3e, 0x0, 0xf, 0x87,
    0xc0, 0x1, 0xf0, 0xf8, 0x0, 0x3e, 0x1f, 0x0,
    0x7, 0xc3, 0xe0, 0x0, 0xf8, 0x7c, 0x0, 0x1f,
    0xf, 0x80, 0x3, 0xe1, 0xf0, 0x0, 0x7c, 0x3e,
    0x0, 0xf, 0x87, 0xc0, 0x1, 0xf0, 0xf8, 0x0,
    0x3e, 0x1f, 0x0, 0x7, 0xc3, 0xe0, 0x0, 0xf8,
    0x7c, 0x0, 0x1f, 0xf, 0xc0, 0x7, 0xe1, 0xf8,
    0x0, 0xfc, 0x3f, 0x80, 0x3f, 0x87, 0xf8, 0x1f,
    0xf9, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xf3, 0xff,
    0xe7, 0xfc, 0x7f, 0xfc, 0x3e, 0x7, 0xcf, 0x80,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x7, 0xc0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 254, .box_w = 5, .box_h = 6, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 509, .box_w = 25, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 123, .adv_w = 509, .box_w = 22, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 509, .box_w = 23, .box_h = 37, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 509, .box_w = 24, .box_h = 38, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 443, .adv_w = 509, .box_w = 27, .box_h = 36, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 509, .box_w = 24, .box_h = 37, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 676, .adv_w = 509, .box_w = 25, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 795, .adv_w = 509, .box_w = 23, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 509, .box_w = 25, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1018, .adv_w = 509, .box_w = 25, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1137, .adv_w = 547, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1290, .adv_w = 547, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1443, .adv_w = 779, .box_w = 39, .box_h = 28, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1580, .adv_w = 611, .box_w = 35, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1742, .adv_w = 509, .box_w = 27, .box_h = 37, .ofs_x = 4, .ofs_y = -10}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8,
    0x9, 0xa, 0xb, 0x13, 0x28, 0x3f, 0x37b, 0x38e
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 46, .range_length = 911, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 16, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
lv_font_t deja50 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 47,          /*The maximum line height required by the font*/
    .base_line = 10,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DEJA50*/
