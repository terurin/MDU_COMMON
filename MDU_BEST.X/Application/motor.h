

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#ifndef APPLICATION_H//XC_HEADER_TEMPLATE_H
#define	APPLICATION_H//XC_HEADER_TEMPLATE_H
#include "../Setting/types.h"
#include "../Setting/configuration.h"
#include "../Task/task.h"
#include "../Driver/uart.h"
#include "../Driver/encoder.h"
#include "../Driver/pwm.h"
#include "../Driver/timer.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <xc.h> // include processor files - each processor file is guarded.  
void motor();
void motor_ac();
void set_motor_dt();
void set_motor_speed(int32_t);

Q15_t pid_limit(Q15_t,Q15_t,double,double);
float float_limit(float,float,float,float);
Q16_16 ConvertQ16_16(float);
void set_p(float);
void set_i(float);
void set_d(float);
float get_pid(char);
void change_pid(int);

void dmotor();
void set_dmotor(float get_dt);
#endif	/* APPLICATION_H */