#pragma once
#include "DeviceReceivers.h"
#include <iostream>

void Light::turnOn() {
	std::cout << "[Light] Turned on" << std::endl;
}

void Light::turnOff() {
	std::cout << "[Light] Turned off" << std::endl;
}

void GarageDoor::open() {
	std::cout << "[Garage] Opened" << std::endl;
}