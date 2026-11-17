#pragma once
#include<string>

class Logger {
private:
	Logger();
public:
	Logger(const Logger&) = delete;
	Logger operator=(const Logger&) = delete;

	static Logger& getInstance();

	void log(std::string mes);
};