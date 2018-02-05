/*
 * File:   link.c
 * Author: satos
 *
 * Created on 2017/05/17, 16:20
 */
#include "link.h"


static float p=0.005;
static float i=0.0002;
static float d=0.0005;

static int32_t speed,dir=0;
static float  now_error,sigma_error,delta_error,before_error=0;
static Q15_t ps=0;
void motor(){
}
