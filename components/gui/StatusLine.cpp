/*
 * StatusLine.cpp
 *
 *  Created on: Mar 7, 2021
 *      Author: dig
 */

#include <StatusLine.h>


static lv_style_t statusLineStyle;

StatusLine::StatusLine(lv_obj_t * parent) {

	lv_style_init(&statusLineStyle);

		lv_style_set_bg_color(&statusLineStyle, LV_STATE_DEFAULT, LV_COLOR_BLUE);

		lv_style_set_radius(&statusLineStyle, LV_STATE_DEFAULT, 0);
		lv_style_set_bg_opa(&statusLineStyle, LV_STATE_DEFAULT, LV_OPA_COVER);
		lv_style_set_bg_color(&statusLineStyle, LV_STATE_DEFAULT, LV_COLOR_BLUE);
		lv_style_set_border_width(&statusLineStyle, LV_STATE_DEFAULT, 2);
		lv_style_set_border_color(&statusLineStyle, LV_STATE_DEFAULT, LV_COLOR_YELLOW);

		lv_style_set_pad_top(&statusLineStyle, LV_STATE_DEFAULT, 5);
		lv_style_set_pad_bottom(&statusLineStyle, LV_STATE_DEFAULT, 5);
		lv_style_set_pad_left(&statusLineStyle, LV_STATE_DEFAULT,5);
		lv_style_set_pad_right(&statusLineStyle, LV_STATE_DEFAULT, 5);

		lv_style_set_text_color(&statusLineStyle, LV_STATE_DEFAULT, LV_COLOR_YELLOW);
		lv_style_set_text_letter_space(&statusLineStyle, LV_STATE_DEFAULT, 5);
		lv_style_set_text_line_space(&statusLineStyle, LV_STATE_DEFAULT, 20);

		lv_style_set_text_font(&statusLineStyle, LV_STATE_DEFAULT,  &lv_font_montserrat_24);

		statusLine = lv_label_create(parent, NULL);
	    lv_label_set_long_mode(statusLine,LV_LABEL_LONG_CROP);
		lv_obj_add_style(statusLine, LV_OBJ_PART_MAIN, &statusLineStyle);
		memset( text,' ' , MAXCHARS);
		text[MAXCHARS+1]= 0;
		lv_label_set_text(statusLine,text);

	   	lv_obj_set_width (statusLine, LV_HOR_RES_MAX-4);
		lv_obj_set_height(statusLine, 40);

		lv_obj_set_x(statusLine, 0);
		lv_coord_t coord =lv_obj_get_height(statusLine);
		lv_obj_set_y(statusLine, LV_VER_RES_MAX-coord);



		//	lv_label_set_align(display, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/

	//	lv_obj_set_size(btn1, 200, 50);

	//	lv_obj_set_width(display, 318);
		//	lv_obj_align(display, NULL, LV_ALIGN_CENTER, 0,5);

}

void StatusLine::setText(char * str){
	int len = strlen(str);
	if ( len >= MAXCHARS){
		len = MAXCHARS;
	}
	memcpy( text, str, len);
	for ( int n = len; n<MAXCHARS;n++)
		text[n] = ' ';
	lv_label_set_text(statusLine,text);
}



StatusLine::~StatusLine() {
	// TODO Auto-generated destructor stub
}

