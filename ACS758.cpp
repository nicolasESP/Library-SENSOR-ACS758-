#include "ACS758.h"
int offset = 511;

ACS758::ACS758(ACS758_type type, uint8_t _pin) {
	switch (type) {
		case ACS758_50B:
			sensitivity = 0.04;
			break;
        case ACS758_50U:
			sensitivity = 0.06;
			break;
		case ACS758_100B:
			sensitivity = 0.02;
			break;
        case ACS758_100U:
			sensitivity = 0.04;
			break;
        case ACS758_150B:
			sensitivity = 0.0133;
			break;
        case ACS758_150U:
			sensitivity = 0.0267;
			break;
		case ACS758_200B:
			sensitivity = 0.01;
			break;
        case ACS758_200U:
			sensitivity = 0.01;
			break;
		default:
			sensitivity = 0.02;
			break;
	}
	pin = _pin;
}


float ACS758::getCurrentDC() {
	float I = (offset - analogRead(pin)) / ADC_SCALE * VREF / sensitivity;
	return I;
}


}