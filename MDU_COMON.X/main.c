#include "Setting/configuration.h"
#include "Driver/driver.h"
#include "Task/task.h"
#include "Driver/uart.h"
#include "Application/motor.h"
#include <stdbool.h>
#include <stdlib.h>
 
int main(){  
    driver_setup();
    task_setup();
    
    timer_enable(true);
    for (;;){
        process_old();
        if(IEC0bits.CNIE==1){
         set_event(&motor);
        }else{
         set_event(&motor);
        }
    }
    __asm("reset");//初期化
    return 0;//決してここまで来ない
}