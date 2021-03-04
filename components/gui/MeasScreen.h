/*
 * MeasScreen.h
 *
 *  Created on: Mar 2, 2021
 *      Author: dig
 */

#ifndef COMPONENTS_GUI_MEASSCREEN_H_
#define COMPONENTS_GUI_MEASSCREEN_H_

#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

class MeasScreen {
public:
	MeasScreen();
	virtual ~MeasScreen();
private:
	lv_obj_t * display;

public:
	void setDisplayText( char * text);
};

#endif /* COMPONENTS_GUI_MEASSCREEN_H_ */
