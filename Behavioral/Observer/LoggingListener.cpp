#include "LoggingListener.h"
#include <iostream>

void LoggingListener::update(const std::string& filename) {
	std::cout << "[LOG] An action was performed on the file " << filename << std::endl;
}