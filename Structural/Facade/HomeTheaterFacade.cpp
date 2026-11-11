#include "HomeTheaterFacade.h"
#include <iostream>

HomeTheaterFacade::HomeTheaterFacade()
    : lights(std::make_unique<SmartLights>()),
    projector(std::make_unique<Projector>()),
    sound(std::make_unique<SoundSystem>()),
    player(std::make_unique<StreamingPlayer>()) {
}

void HomeTheaterFacade::watchMovie(const std::string& movie) 
{
    std::cout << std::endl;
    std::cout << "Get ready to watch a movie\n";
    lights->dim();
    projector->on();
    sound->on();
    sound->setSurroundSound();
    player->on();
    player->play(movie);
}

void HomeTheaterFacade::endMovie() {
    std::cout << std::endl;
    std::cout<< "Shutting movie theater down\n";
    player->off();
    sound->off();
    projector->off();
    lights->on();
}