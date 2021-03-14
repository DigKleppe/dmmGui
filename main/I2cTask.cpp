///*
// * I2cTask.cpp
// *
// *  Created on: Jun 7, 2020
// *      Author: dig
// *
// *      reads touchkeys
// */
//
#include "I2cTask.h"
#include "mpr121.h"


#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "keys.h"

uint32_t mprKeys;

 esp_err_t i2c_master_init(void)
{
    int i2c_master_port = 1;   // I2C_MASTER_NUM;
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = 21;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = 22;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.master.clk_speed = 400000;
    i2c_param_config(i2c_master_port, &conf);
    return i2c_driver_install(i2c_master_port, conf.mode, 0, 0, 0);
}



//
//void I2CTask(void *pvParameters) {
//
//	i2c_master_init();
//	MPR121 mpr121((uint8_t) MPR_ADDRESS, (i2c_port_t)1);
//	uint8_t i2cErr = 0;
//
//	while(1) {
//		mprKeys = mpr121.readTouchBits();
//		keysTimerHandler_ms(2);
//		vTaskDelay(2);
//		if (i2cErr)
//			printf("*** %d ****\n", i2cErr);
//	//	if (mprKeys){
//	//		printf("\n%d",mprKeys);
//	//	}
//	}
//}
////
//myKey_t getKeyPins(void){
//	return mprKeys;
//}
//


