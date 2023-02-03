// ************************************************************
// demoheader.h
// Created by Tristan Hall 03/02/2023
//
// This is a basic header  file to learn how to use Git in Arduino context.

#pragma once
#include <Arduino.h>
#include <JrkG2.h>				// Library for motor driver
#include <avr/wdt.h>            // Library for watchdog related stuff
#include <avr/eeprom.h>			// Library for EEPROM handling

#define STUFF 500

unsigned int value0;
unsigned int value1;

class demo {
private:
	volatile char flag0;
	volatile char flag1;
public:
	int counter;


	demo(void);	// constructor declaration
}