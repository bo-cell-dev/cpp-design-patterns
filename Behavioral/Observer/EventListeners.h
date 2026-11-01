#pragma once
#include <string>
#include <iostream>

class EventListeners {
public:
	virtual void update(const std::string& filename) = 0;
	virtual ~EventListeners() = default;
};