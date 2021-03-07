
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

// fonts Ohm, micro  0x3A9 0x3BC 01234567890 .,mMnkVAHz
//LV_FONT_DECLARE(dejaSansMonoBold50);
LV_FONT_DECLARE(dejaSansMono50);
LV_FONT_DECLARE(dejaSansMono40);
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
//lv_indev_t *kb_indev;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

//0123456789 mMkVA


static lv_style_t measStyle1;

#define FONT &dejaSansMono50
#define PADDING 5

lv_obj_t * measScreen;


MeasScreen::MeasScreen() {

	lv_style_init(&measStyle1);

	lv_style_set_bg_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_BLUE);
	lv_style_set_radius(&measStyle1, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_opa(&measStyle1, LV_STATE_DEFAULT, LV_OPA_COVER);
	lv_style_set_bg_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_BLUE);
	lv_style_set_border_width(&measStyle1, LV_STATE_DEFAULT, 2);
	lv_style_set_border_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_YELLOW);

	lv_style_set_pad_top(&measStyle1, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_bottom(&measStyle1, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_left(&measStyle1, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_right(&measStyle1, LV_STATE_DEFAULT, PADDING);

	lv_style_set_text_color(&measStyle1, LV_STATE_DEFAULT, LV_COLOR_YELLOW);
	lv_style_set_text_letter_space(&measStyle1, LV_STATE_DEFAULT, 1);

	lv_style_set_text_font(&measStyle1, LV_STATE_DEFAULT, FONT);


	measScreen = lv_obj_create(NULL, NULL);


	display = lv_label_create(measScreen, NULL);
    lv_label_set_long_mode(display,LV_LABEL_LONG_CROP);
	lv_obj_add_style(display, LV_OBJ_PART_MAIN, &measStyle1);
	lv_label_set_align(display, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
	lv_obj_set_width(display, LV_HOR_RES_MAX - 2);
	lv_coord_t fontHeight = lv_font_get_line_height(FONT);
	lv_obj_set_height(display,fontHeight + 2* PADDING);

	statusLine = new StatusLine ( measScreen);
	statusLine->setText((char *)"hallo");
	//	lv_obj_align(display, NULL, LV_ALIGN_CENTER, 0,5);

	    	lv_scr_load(measScreen);




}

void MeasScreen::setDisplayText( char * text) {
	int len = strlen( text);

	if ( len >= MAXVALUECHARS )
		memcpy( measValue1,text, MAXVALUECHARS);
	else {
		memcpy( measValue1,text,len);
		for (int n = len; n< MAXVALUECHARS; n++)

			measValue1[MAXVALUECHARS] = 0;
	}

	lv_label_set_text(display, measValue1);
}

/**
 * @brief
 * @param value
 * @param name
 */
void MeasScreen::setValueAndName( char * value, char * name) {
	bool hasSymbol = false;
	int valLen = strlen(value);
	int nameLen = strlen(name);
	if (nameLen > MAXVALUECHARS)
		nameLen = MAXVALUECHARS;
	for (int n = 0 ; n < nameLen; n++) {
		if((uint8_t) name[n] == 0xef)
			hasSymbol = true;
	}
	if (hasSymbol) {  // assumend only 1 symbol
		memcpy ( &measValue1[MAXVALUECHARS+2-nameLen],name,nameLen); // set value at last positions of display
		nameLen -=2;  // subtract 2 extra characters for symbol
	}
	else
		memcpy ( &measValue1[MAXVALUECHARS -nameLen],name,nameLen); // set value at last positions of display

	int pos = MAXVALUECHARS-nameLen-valLen;
	if ( pos < 0) {
		valLen += pos; // does not fit
		pos = 0;
	}
	for ( int n = 0; n < pos; n++){
		measValue1[n] = ' '; // fill spaces at first part of line
	}
	memcpy(  &measValue1[pos],value, valLen);
	if (hasSymbol)
		measValue1[MAXVALUECHARS+2] = 0;
	else
		measValue1[MAXVALUECHARS] = 0;
	lv_label_set_text(display, measValue1);
	//lv_label_set_text(display, LV_SYMBOL_OK "Apply");
}



MeasScreen::~MeasScreen() {
	// TODO Auto-generated destructor stub
}

void makeMeasScreen( void){


}




