/*
 * SettingsItem.h
 *
 *  Created on: Mar 7, 2021
 *      Author: dig
 */

#ifndef SETTINGS_MENUSETTINGSITEM_H_
#define SETTINGS_MENUSETTINGSITEM_H_

#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

typedef enum { SETTINGSTYPE_INT, SETTINGSTYPE_FLOAT } settingsTtype_t;

typedef struct {
	const char * name;
	int minVal;
	int maxVal;
	float step;
	settingsTtype_t type;
	void * var;
	// void (*fun_ptr)(int);
}MenuSetttingsDesrc_t;



class MenuSettings{
public:
	MenuSettings(MenuSetttingsDesrc_t *);
    static lv_obj_t * list1;
	virtual ~MenuSettings();
private:
	lv_obj_t * lastButton;

	static void event_handler(lv_obj_t * obj, lv_event_t event);
	static void nextItem( void);
	static void prevItem( void);


};

#endif /* SETTINGS_MENUSETTINGSITEM_H_ */
