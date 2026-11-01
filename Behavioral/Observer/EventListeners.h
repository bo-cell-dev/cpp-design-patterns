#pragma once
#include <string>

class EventListeners {
public:
	virtual void update(const std::string& filename) = 0;
	virtual ~EventListeners() = default;
};