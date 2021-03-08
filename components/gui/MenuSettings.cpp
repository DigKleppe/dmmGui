/*
 * SettingsItem.cpp
 *
 *  Created on: Mar 7, 2021
 *      Author: dig
 */

#include "MenuSettings.h"
#include <stdio.h>

#define FONT &lv_font_montserrat_24
#define PADDING 5

int speed = 23;
int res =5;

MenuSetttingsDesrc_t menuSettingsDescrTable[] =
{
		{"1ConvSpeed",2,100,1,SETTINGSTYPE_INT,&speed },
		{"2Resolution",2,6,1,SETTINGSTYPE_INT,&res },
		{"3ss3",2,100,1,SETTINGSTYPE_INT,&speed },
		{"4Resodsdlution",2,6,1,SETTINGSTYPE_INT,&res },
		{"5sdsd",2,100,1,SETTINGSTYPE_INT,&speed },
		{"6Rdddn",2,6,1,SETTINGSTYPE_INT,&res },
		{"7ddff",2,100,1,SETTINGSTYPE_INT,&speed },
		{"8s",2,6,1,SETTINGSTYPE_INT,&res },
		{"",0,0,0,SETTINGSTYPE_INT,NULL } // last
};




extern lv_indev_t *kb_indev;
int key;

bool keyboard_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data);



lv_obj_t * MenuSettings::list1;

void MenuSettings::nextItem ( void){
	lv_list_up(list1);
}

void MenuSettings::prevItem ( void){
	lv_list_down(list1);
}
void MenuSettings::event_handler(lv_obj_t * obj, lv_event_t event)
{

	if(event == LV_EVENT_CLICKED) {
		printf("Clicked: %s\n", lv_list_get_btn_text(obj));
	}
	if ( event == LV_EVENT_KEY ){

		key = lv_indev_get_key(kb_indev);
		if (key) {
			printf("Key: %s  k %d  e %d\n", lv_list_get_btn_text(obj),key,event );
			switch ( key){
			case LV_KEY_DOWN:
				nextItem();
				break;
			case LV_KEY_UP:
				prevItem();
				break;
			default:
				break;
			}
		}

	}
}

MenuSettings::MenuSettings(MenuSetttingsDesrc_t * menuSettings) {
	static lv_style_t menuStyle;


	lv_obj_t * screen;
	lv_style_init(&menuStyle);

	lv_style_set_bg_color(&menuStyle, LV_STATE_DEFAULT, LV_COLOR_BLUE);
	lv_style_set_radius(&menuStyle, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_opa(&menuStyle, LV_STATE_DEFAULT, LV_OPA_COVER);
	lv_style_set_bg_color(&menuStyle, LV_STATE_DEFAULT, LV_COLOR_BLUE);
	lv_style_set_border_width(&menuStyle, LV_STATE_DEFAULT, 2);
	lv_style_set_border_color(&menuStyle, LV_STATE_DEFAULT, LV_COLOR_YELLOW);

	lv_style_set_pad_top(&menuStyle, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_bottom(&menuStyle, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_left(&menuStyle, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_right(&menuStyle, LV_STATE_DEFAULT, PADDING);

	lv_style_set_text_color(&menuStyle, LV_STATE_DEFAULT, LV_COLOR_YELLOW);
	lv_style_set_text_letter_space(&menuStyle, LV_STATE_DEFAULT, 1);

	lv_style_set_text_font(&menuStyle, LV_STATE_DEFAULT, FONT);

	screen = lv_obj_create(NULL, NULL);

	/*Create a list*/
	list1 = lv_list_create(screen, NULL);
	lv_obj_set_size(list1, 300, 200);
	lv_obj_align(list1, NULL, LV_ALIGN_CENTER, 0, 0);

	lv_group_t * g = lv_group_create();

	int idx = 0;
	char * p;
	do  {
		lv_obj_t * list_btn;
		lv_obj_t * label;
		p = (char *)  menuSettings[idx].name;
		if ( strlen (p ) > 0){
			list_btn = lv_list_add_btn(list1,NULL,NULL);
			label = lv_label_create(list_btn, NULL);
			lv_label_set_text(label, p);
			lv_obj_set_event_cb(list_btn, event_handler);
			lv_group_add_obj(g, list_btn);
		}
		idx++;
	} while (strlen ( p ) > 0);
	lv_obj_t * list_btn = lv_list_get_next_btn(list1, NULL); // select first button
	lv_list_focus(list_btn, LV_ANIM_OFF);
	lv_indev_set_group( kb_indev,g);
	//lv_page_set_scrlbar_mode(list1, LV_SCRLBAR_MODE_ON);
	lv_scr_load(screen);
}



MenuSettings::~MenuSettings() {
	// TODO Auto-generated destructor stub
}

