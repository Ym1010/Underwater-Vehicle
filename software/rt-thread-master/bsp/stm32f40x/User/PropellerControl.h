#ifndef __PROPELLERCONTROL_H
#define __PROPELLERCONTROL_H

#include "DataType.h"
#include "propeller.h"

void Propeller_Control(void);
void Propeller_Output(void);
void robot_upDown(float depth); 
void Horizontal_Propeller_Power_Clear(void);//水平方向推力清零


void robotForward(void);  //前进
void robotBackAway(void); //后退

void turnRight(void);  //右转
void turnLeft(void);  //左转

void moveLeft(void);  //左移
void moveRight(void);  //右移


extern int32 Expect_Depth;
#endif



