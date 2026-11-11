#include "Subsystems.h"
#include <iostream>

void SmartLights::on() {
    std::cout << "[Lights] Lights are turned ON.\n";
}

void SmartLights::dim() {
    std::cout << "[Lights] Dimming lights to 20%.\n";
}

void Projector::on() {
    std::cout << "[Projector] Projector is ON.\n";
}

void Projector::off() {
    std::cout << "[Projector] Projector is OFF.\n";
}

void SoundSystem::on() {
    std::cout << "[Sound] Audio system is ON.\n";
}

void SoundSystem::off() {
    std::cout << "[Sound] Audio system is OFF.\n";
}

void SoundSystem::setSurroundSound() {
    std::cout << "[Sound] Surround sound mode activated.\n";
}

void StreamingPlayer::on() {
    std::cout << "[Player] Streaming player is ON.\n";
}

void StreamingPlayer::off() {
    std::cout << "[Player] Streaming player is OFF.\n";
}

void StreamingPlayer::play(const std::string& movie) {
    std::cout << "[Player] Playing movie: '" << movie << "'.\n";
}
