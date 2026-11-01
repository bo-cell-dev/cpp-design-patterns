#pragma once
#include "EventListeners.h"

class LoggingListener: public EventListeners {
public:
	void update(const std::string& filename) override;
};