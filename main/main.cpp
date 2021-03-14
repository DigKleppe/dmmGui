#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "driver/gpio.h"

#include "MeasScreen.h"



/* Littlevgl specific */
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#include "lvgl_helpers.h"

/*********************
 *      DEFINES
 *********************/
#define TAG "demo"

/**********************
 *  STATIC PROTOTYPES
 **********************/

void guiTask(void *pvParameter);
void testGuiTask(void *pvParameter);


/**********************
 *   APPLICATION MAIN
 **********************/
void app_main() {



    /* If you want to use a task to create the graphic, you NEED to create a Pinned task
     * Otherwise there can be problem such as memory corruption and so on.
     * NOTE: When not using Wi-Fi nor Bluetooth you can pin the guiTask to core 0 */
    xTaskCreatePinnedToCore(guiTask, "gui", 4096*2, NULL, 0, NULL, 1);
    xTaskCreatePinnedToCore(testGuiTask, "testgui", 4096, NULL, 0, NULL, 1);
  //  xTaskCreatePinned(testGuiTask, "testgui", 4096, NULL, 0, NULL, 1);
}

}






