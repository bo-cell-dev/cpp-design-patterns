#pragma once
#include "EventListeners.h"
#include <vector>

class EventManager {
private:
	std::vector<EventListeners*> listeners;
public:
	EventManager() = default;
	void subscribe(EventListeners* listener);
	void unsubscribe(EventListeners* listener);
	void notify(const std::string& filename);
};