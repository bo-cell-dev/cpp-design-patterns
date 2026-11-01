#include "SmsAlertListener.h"
#include "EventListeners.h"
#include "LoggingListener.h"
#include "EventManager.h"

int main() {
	std::string filename = "Main string Example";
	EventManager* em = new EventManager();
	SmsAlertListener* smsal = new SmsAlertListener();
	LoggingListener* ll = new LoggingListener();

	em->subscribe(smsal);
	em->subscribe(ll);
	em->notify(filename);
	em->unsubscribe(smsal);
	em->notify("Hello world!");
	return 0;
}