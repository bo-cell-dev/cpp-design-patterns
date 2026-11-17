#include "Logger.h"
#include <iostream>

int main() {
	Logger::getInstance().log("\nHello!\n");
	Logger::getInstance().log("Bye!\n");

	Logger& log1 = Logger::getInstance();
	Logger& log2 = Logger::getInstance();
	std::cout << [&log1, &log2]() { if (&log1 == &log2) return "Yes"; return "No";} ();
	std::cout << (&log1 == &log2 ? "Yes": "No");
	return 0;
}