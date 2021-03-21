/*
 * SettingsItem.cpp
 *
 *  Created on: Mar 7, 2021
 *      Author: dig
 */


#include "MenuSettings.h"

#include <stdio.h>
LV_FONT_DECLARE(dejaSansMono16);
LV_FONT_DECLARE(dejaSansMono20);
LV_FONT_DECLARE(dejaSansMono25);
LV_FONT_DECLARE(tlwgmono16);
LV_FONT_DECLARE(tlwgmono20);
LV_FONT_DECLARE(tlwgmonoBold20);

#define FONT &dejaSansMono25
#define PADDING 4

int speed = 23;
int res =5;

int MenuSettings::nrItems;
int MenuSettings::selectedItem;
lv_obj_t * MenuSettings::list1;
lv_obj_t * MenuSettings::selected_btn;
MenuSetttingsDesrc_t * MenuSettings::table;
bool  MenuSettings::changed;

#define NR_BUTTONS_VISIBLE 6
#define BUTTONHEIGHT (LV_VER_RES_MAX/NR_BUTTONS_VISIBLE)
#define MAXCHARSPERLINE 19  // 24 for 16

void * dummy ( void * arg){
	return NULL;
}
typedef void * lv_obj_user_data_t;
MenuSetttingsDesrc_t menuSettingsDescrTable[] =
{
		{"1ConvSpeed",2,100,1,SETTINGSTYPE_INT,&speed , dummy},
		{"2Resolution",2,6,1,SETTINGSTYPE_INT,&res, dummy },
		{"3ss3",2,100,1,SETTINGSTYPE_INT,&speed , dummy},
		{"4Resodsdlution",2,6,1,SETTINGSTYPE_INT,&res , dummy},
		{"5sdsd",2,100,1,SETTINGSTYPE_INT,&speed, dummy },
		{"6Rdddn",2,6,1,SETTINGSTYPE_INT,&res, dummy },
		{"7ddff",2,100,1,SETTINGSTYPE_INT,&speed, dummy },
		{"8s",2,6,1,SETTINGSTYPE_INT,&res, dummy },
		{"",0,0,0,SETTINGSTYPE_INT,NULL , dummy} // last
};

extern lv_indev_t *kb_indev;
int key;

bool keyboard_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data);

char *  MenuSettings::printItem ( int item ) {
	static char line [MAXCHARSPERLINE + 1];
	char value [MAXCHARSPERLINE + 1];
	void * x = table[item].var;
	int v = *(int *)x;

	snprintf(value ,MAXCHARSPERLINE ," %d", v  );

	setNameAndValue((char *) table[item].name,  value, line, MAXCHARSPERLINE);
	return line;
}

//v_obj_t * MenuSettings::list1;
void MenuSettings::nextItem ( void){
	selected_btn = lv_list_get_next_btn(list1, selected_btn); // getnext  button
	lv_list_focus_btn(list1,selected_btn);
//	lv_list_set_btn_selected(list1, selected_btn);
}

void MenuSettings::prevItem ( void){
	selected_btn = lv_list_get_prev_btn(list1, selected_btn); // getnext  button
	lv_list_focus_btn(list1,selected_btn);
//	lv_list_set_btn_selected(list1, selected_btn);
}

void MenuSettings::decrItem( lv_obj_t * obj){

	lv_obj_t * button =  lv_list_get_btn_selected(list1);
	intptr_t x = (intptr_t) button->user_data;
	int idx = (int) x;
	if (table[idx].var != NULL){
		int * p = (int *) table[idx].var;
		if (* p > table[idx].minVal){
			(*p)--;
			changed = true;
			lv_obj_t * label = lv_obj_get_child(button, NULL);
			lv_label_set_text(label,  printItem (idx));
		}
	}
}



void MenuSettings::incrItem( lv_obj_t * obj){
	lv_obj_t * button =  lv_list_get_btn_selected(list1);
	intptr_t x = (intptr_t) button->user_data;
	int idx = (int) x;
	if (table[idx].var != NULL){
		int * p = (int *) table[idx].var;
		if (* p < table[idx].maxVal){
			(*p)++;
			changed = true;
			lv_obj_t * label = lv_obj_get_child(selected_btn, NULL);
			lv_label_set_text(label,  printItem (idx));
		}
	}
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
			case LV_KEY_LEFT:
				decrItem(obj);
				break;
			case LV_KEY_RIGHT:
				incrItem(obj);



			default:
				break;
			}
		}

	}
}




MenuSettings::MenuSettings(MenuSetttingsDesrc_t * menuSettings) {

	table = menuSettings;
	static lv_style_t menuStyle;

	lv_obj_t * screen;
	lv_style_init(&menuStyle);

	lv_style_set_bg_color(&menuStyle, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	lv_style_set_bg_color(&menuStyle, LV_STATE_FOCUSED, LV_COLOR_YELLOW);


	lv_style_set_text_color(&menuStyle, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_style_set_text_letter_space(&menuStyle, LV_STATE_DEFAULT, 1);
	lv_style_set_text_font(&menuStyle, LV_STATE_DEFAULT, FONT);

	lv_style_set_radius(&menuStyle, LV_STATE_DEFAULT, 0);
//	lv_style_set_bg_opa(&menuStyle, LV_STATE_DEFAULT, LV_OPA_COVER);

	lv_style_set_border_width(&menuStyle, LV_STATE_DEFAULT, 0);

	lv_style_set_pad_top(&menuStyle, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_bottom(&menuStyle, LV_STATE_DEFAULT, PADDING);
	lv_style_set_pad_left(&menuStyle, LV_STATE_DEFAULT, PADDING+2);
	lv_style_set_pad_right(&menuStyle, LV_STATE_DEFAULT, PADDING);


	screen = lv_obj_create(NULL, NULL);

	/*Create a list*/
	list1 = lv_list_create(screen, NULL);
	lv_obj_set_size(list1, LV_HOR_RES_MAX, LV_VER_RES_MAX);
	lv_obj_align(list1, NULL, LV_ALIGN_CENTER, 0, 0);

	lv_group_t * g = lv_group_create();

	int idx = 0;
	char * p;
	do  {
		lv_obj_t * list_btn;
		lv_obj_t * label;
		p = (char *)  table[idx].name;
		if ( strlen (p ) > 0){
			list_btn = lv_list_add_btn(list1,NULL,NULL);
			lv_obj_set_user_data(list_btn,  (lv_obj_user_data_t) nrItems);
			lv_obj_set_event_cb(list_btn, event_handler);
			lv_group_add_obj(g, list_btn);

			label = lv_label_create(list_btn, NULL);
			lv_label_set_text(label, printItem (nrItems));
			lv_obj_add_style(list_btn, LV_OBJ_PART_MAIN, &menuStyle);

			nrItems++;
		}
		idx++;
	} while (strlen ( p ) > 0);
	selected_btn = lv_list_get_next_btn(list1, NULL); // select first button
	lv_list_focus_btn(list1,selected_btn);
	selectedItem =0;
	lv_indev_set_group(kb_indev ,g);

	lv_scr_load(screen);


}



MenuSettings::~MenuSettings() {
	// TODO Auto-generated destructor stub
}

