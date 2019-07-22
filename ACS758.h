#ifndef ACS758_h
#define ACS758_h

#include <Arduino.h>

#define ADC_SCALE 1023.0
#define VREF 5.0
#define 0.004887585532746823069403714565


enum ACS758_type {ACS758_50B,ACS758_50U, ACS758_100B,ACS758_100U,ACS758_150B,ACS758_150U, ACS758_200B,ACS758_200U};

class ACS758 {
public:
	ACS758(ACS758_type type, uint8_t _pin);
private:
	float offset = 511.0;
	float sensitivity;
	uint8_t pin;
};

#endif