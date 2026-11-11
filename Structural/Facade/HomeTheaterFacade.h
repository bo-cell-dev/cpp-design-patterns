#pragma once
#include <memory>
#include <string>
#include "Subsystems.h"

class HomeTheaterFacade {
private:
	std::unique_ptr<SmartLights> lights;
	std::unique_ptr<Projector> projector;
	std::unique_ptr<SoundSystem> sound;
	std::unique_ptr<StreamingPlayer> player;
public:
	HomeTheaterFacade();
	void watchMovie(const std::string& movie);
	void endMovie();
};