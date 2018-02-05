

/*
 * File:   dta_motor.c
 * Author: satos
 *
 * Created on 2016/09/23, 14:59
 */
#include "motor.h"
/*static float p=0.4;

static int8_t dir=0;
static int8_t cnt=0;
static float dt,ddt,dtx,dtp=0;*/
static float dt=0,bf_dt=0,dt_true=0;
void dmotor(){
    static uint8_t ct=0;
    if(ct>10){
        if(dt-dt_true!=0){
            dt+=(dt_true-bf_dt)/50;
            if(abs((int)(1000*(dt_true-dt)))<15){
                dt=dt_true;
                bf_dt=dt_true;
            }
        }
        //ct=0;
    }
    pwm_dts(ConvertQ15(dt));
    ct++;
          /*ddt=dt-dtp;
          float u=ddt*p;
           
           if(dt==0){
               dtp=float_limit(dtp,u,-0.95,0.95);
             }else if(dt>0){
               dtp=float_limit(dtp,u,0.15,0.95);
             }else if(dt<0){
               dtp=float_limit(dtp,u,-0.95,-0.15);
           }
            pwm_dts(ConvertQ15(dtp));
         if(PDC2+PDC3==0 && dtx!=0){
           if(cnt>=1){
            dt=dtx;
            dtx=0;
            cnt=0;
           }else{
           cnt++;
           }
          }*/
           
}
void set_dmotor(float get_dt){
    dt_true=get_dt;
    
        /*set_motor_dt();
        int8_t sign = (get_dt>0)-(get_dt<0);
        dt=get_dt;
        if((dir*sign)<0){
        dt=0;
        dtx=get_dt;
        }
        dir=sign;*/
}