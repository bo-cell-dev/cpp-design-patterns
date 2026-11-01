#include "LoggingListener.h"

void LoggingListener::update(const std::string& filename) {
	std::cout << "[LOG] An action was performed on the file " << filename << std::endl;
}