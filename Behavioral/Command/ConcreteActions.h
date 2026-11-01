#pragma once
#include "IAction.h"
#include "DeviceReceivers.h"
#pragma once 

class LightOnAction : public IAction {
private:
	Light* light;
public:
	LightOnAction(Light* targetLight);
	void execute() override;
};

class LightOffAction : public IAction {
private:
	Light* light;
public:
	LightOffAction(Light* targetLight);
	void execute() override;
};


class GarageOpenAction : public IAction {
private:
	GarageDoor* garage;
public:
	GarageOpenAction(GarageDoor* targetGarage);
	void execute() override;

};