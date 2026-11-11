#pragma once
#include <string>

class SmartLights {
public:
	void on();
	void dim();
};

class Projector {
public:
	void on();
	void off();
};

class SoundSystem {
public:
	void on();
	void off();
	void setSurroundSound();
};

class StreamingPlayer {
public:
	void on();
	void off();
	void play(const std::string& movie);
};