#include <memory>
#include "ConcreteActions.h"
#include "DeviceReceivers.h"

class RemoteControl {
private:
	std::unique_ptr<IAction> slot;
public:
	void setAction(std::unique_ptr<IAction> newAction){
		slot = std::move(newAction);
	}
	void pressButton() {
		if (slot) {
			slot->execute();
		}
	}
};

int main() {

	Light livingRoomLight;
	GarageDoor mainGarage;

	RemoteControl remote;

	remote.setAction(std::make_unique<LightOnAction>(&livingRoomLight));
	remote.pressButton();

	remote.setAction(std::make_unique<GarageOpenAction>(&mainGarage));
	remote.pressButton();

	remote.setAction(std::make_unique<LightOffAction>(&livingRoomLight));
	remote.pressButton();
	return 0;
}