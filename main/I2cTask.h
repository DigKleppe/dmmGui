/*
 * I2cTask.h
 *
 *  Created on: Jun 7, 2020
 *      Author: dig
 */

#ifndef MAIN_I2CTASK_H_
#define MAIN_I2CTASK_H_

class I2cTask {
public:
	I2cTask();
	virtual ~I2cTask();
};


void I2CTask(void *pvParameters);

#endif /* MAIN_I2CTASK_H_ */
