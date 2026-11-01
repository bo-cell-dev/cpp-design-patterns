#include "ConcreteActions.h"

LightOnAction::LightOnAction(Light* targetLight): light(targetLight){}
void LightOnAction::execute(){
	light ->turnOn();
}

LightOffAction::LightOffAction(Light* targetLight) : light(targetLight) {}
void LightOffAction::execute() {
	light->turnOff();
}

GarageOpenAction::GarageOpenAction(GarageDoor* targetGarage):garage(targetGarage){}
void GarageOpenAction::execute() {
	garage->open();
}
