#include "SmsAlertListener.h"
#include <iostream>

void SmsAlertListener::update(const std::string& filename) {
	std::cout << "[SMS] Someone modified the file " << filename << std::endl;
}