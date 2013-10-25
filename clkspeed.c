/*
 * clkspeed.c
 *
 *  Created on: Oct 24, 2013
 *      Author: C15Alex.Strom
 */
#include<Msp430.h>
#include"clkspeed.h"


void clkspeed1Mhz(){
	P1DIR = BIT4;
	P1SEL = BIT4;
	DCOCTL &= ~0;
	BCSCTL1 =CALBC1_1MHZ;
	DCOCTL = CALDCO_1MHZ;
}


void clkspeed8Mhz(){
	P1DIR = BIT4;
	P1SEL = BIT4;
	DCOCTL &= ~0;
	BCSCTL1 =CALBC1_8MHZ;
	DCOCTL = CALDCO_8MHZ;
}

void clkspeed12Mhz(){
	P1DIR = BIT4;
	P1SEL = BIT4;
	DCOCTL &= ~0;
	BCSCTL1 =CALBC1_12MHZ;
	DCOCTL = CALDCO_12MHZ;
}

void clkspeed16Mhz(){
	P1DIR = BIT4;
	P1SEL = BIT4;
	DCOCTL &= ~0;
	BCSCTL1 =CALBC1_16MHZ;
	DCOCTL = CALDCO_16MHZ;
}
