#include "EventManager.h"

void EventManager::subscribe(EventListeners* listener) {
	listeners.push_back(listener);
}

void EventManager::unsubscribe(EventListeners* listener) {
	std::erase(listeners, listener);
}

void EventManager::notify(const std::string& filename) {
	for (auto listener : listeners) {
		listener->update(filename);
	}
}