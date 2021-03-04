/*
 * testGuiTask.c
 *
 *  Created on: Mar 2, 2021
 *      Author: dig
 */

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "MeasScreen.h"

extern "C" {


void testGuiTask(void *pvParameter){
	vTaskDelay(100);
	int cntr = 0;
	char str[20];
	MeasScreen measScreen;
	while( 1) {
		cntr+= 10;
		sprintf(str,"%d mv",cntr);
		measScreen.setDisplayText(str);

		vTaskDelay(1);
	}

}
}
