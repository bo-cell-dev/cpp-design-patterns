#include "Logger.h"
#include <iostream>

Logger::Logger(){
	std::cout << "Logger has been created <3" << std::endl;
}

Logger& Logger::getInstance() {
	static Logger inst;
	return inst;
}

void Logger::log(std::string mes) {
	std::cout << "log: " << mes<< std::endl;
}