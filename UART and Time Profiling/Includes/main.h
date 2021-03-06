/*
 * main.h
 *
 *  Created on: Oct 10, 2016
 *      Author: VIJOY-PC
 */

#ifndef INCLUDES_MAIN_H_
#define INCLUDES_MAIN_H_

/*----------------------------------------------------------------------------
 * include headers of the files you are using in this file
 -----------------------------------------------------------------------------*/

#include "nvic.h"
#include "uart.h"
#include "led.h"
#include "MKL25Z4.h"
#include "logger.h"
#include "cbuffer.h"
#include "profiler.h"
#include "memory.h"
#include "data.h"
#include "unitest.h"

#include <stdint.h>
#include <math.h>


extern int8_t next;					//color control
extern float b_color;				//brightness control

/*------------------------------------------------------------------------------*/
 // SWITCHES
  #define DEBUG 			// uncomment this to enable log function (FRDM/BBB)
  #define FRDM	 			// uncomment this for serial debug (FRDM)
 // #define BBB   			// uncomment this for printf debug (BBB)
  #define RGB_INTERACT   	// uncomment this to enable RGB LED Control from terminal
 // #define BUFFER_INERACT	// uncomment this to attach circular buffers to uart
 // #define UNIT_TEST       // uncomment this to perform circular buffer test log
 // #define LOGGER_TEST		// uncomment this to enaable log test samples
 // #define PROFILE			// uncomment this to enable profile samples
/*-------------------------------------------------------------------------------*/


#endif /* INCLUDES_MAIN_H_ */
