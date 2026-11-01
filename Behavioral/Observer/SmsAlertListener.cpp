#include "SmsAlertListener.h"

void SmsAlertListener::update(const std::string& filename) {
	std::cout << "[SMS] Someone modified the file " << filename << std::endl;
}