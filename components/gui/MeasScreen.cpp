
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdlib.h>
#include <unistd.h>
#include "MeasScreen.h"

#include "lvgl.h"

LV_FONT_DECLARE(deja50);
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/


/**********************
 *  STATIC VARIABLES
 **********************/
lv_indev_t *kb_indev;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/


static lv_style_t measStyle1;

lv_obj_t * measScreen;


MeasScreen::MeasScreen() {
	lv_style_init(&measStyle1);

	lv_style_set_bg_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_BLUE);

	lv_style_set_radius(&measStyle1, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_opa(&measStyle1, LV_STATE_DEFAULT, LV_OPA_COVER);
	lv_style_set_bg_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_SILVER);
	lv_style_set_border_width(&measStyle1, LV_STATE_DEFAULT, 2);
	lv_style_set_border_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_BLUE);

	lv_style_set_pad_top(&measStyle1, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_bottom(&measStyle1, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_left(&measStyle1, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_right(&measStyle1, LV_STATE_DEFAULT, 10);

	lv_style_set_text_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_YELLOW);
	lv_style_set_text_letter_space(&measStyle1, LV_STATE_DEFAULT, 5);
	lv_style_set_text_line_space(&measStyle1, LV_STATE_DEFAULT, 20);

	lv_style_set_text_font(&measStyle1, LV_STATE_DEFAULT,  &deja50);

	 measScreen = lv_obj_create(NULL, NULL);
	display = lv_label_create(measScreen, NULL);
	lv_obj_add_style(display, LV_OBJ_PART_MAIN, &measStyle1);
	lv_label_set_align(display, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
	lv_label_set_text(display, "8123.54mV");
	lv_obj_set_width(display, 318);

	lv_obj_align(display, NULL, LV_ALIGN_CENTER, 0,5);

	lv_scr_load(measScreen);

}

void MeasScreen::setDisplayText( char * text) {
	lv_label_set_text(display, text);
}

MeasScreen::~MeasScreen() {
	// TODO Auto-generated destructor stub
}

void makeMeasScreen( void){


}




