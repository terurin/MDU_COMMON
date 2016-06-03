/* 
 * File:   encoder.h
 * Author: TERU
 *
 * Created on 2016/03/23, 2:54
 */

#ifndef ENCODER_H
#define	ENCODER_H
#include <stdint.h>
#include <stdbool.h>

void encoder_setup();

inline int16_t encoder_value();
inline void encoder_direction(bool);

#endif	/* ENCODER_H */

