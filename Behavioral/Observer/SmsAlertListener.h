#pragma once
#include "EventListeners.h"

class SmsAlertListener: public EventListeners {
public:
	SmsAlertListener() = default;
	void update(const std::string& filename) override;
};