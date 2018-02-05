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
#endif	/* APPLICATION_H */