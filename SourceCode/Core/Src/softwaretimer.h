/*
 * softwaretimer.h
 *
 *  Created on: Sep 21, 2023
 *      Author: ASUS
 */

#ifndef SRC_SOFTWARETIMER_H_
#define SRC_SOFTWARETIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;


void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

void timerRun();

#endif /* SRC_SOFTWARETIMER_H_ */
