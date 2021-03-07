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

	float cntr = 12340;
	char str[20];

	vTaskDelay(500);

	MeasScreen measScreen;
	while( 1) {
		cntr+= 10.1;
		sprintf(str,"%2.6f",cntr);
		measScreen.setValueAndName( str," "  LV_SYMBOL_MICRO "V");
		vTaskDelay(100);

	}

}
}

// /home/dig/.espressif/tools/openocd-esp32/v0.10.0-esp32-20200420/openocd-esp32/bin/openocd -f interface/ftdi/c232hm.cfg -f board/esp-wroom-32.cfg -c "program_esp /home/dig/projecten/littleVGL/dmmGui/build/dmm. 0x10000 verify"
