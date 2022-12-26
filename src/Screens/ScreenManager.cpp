//
// Created by Pete Downey on 12/24/22.
//

#include "ScreenManager.h"

ScreenManager::ScreenManager() {

    currentScreen = ScreenTypes::startScreen;

    // add each type of screen to map statement
    // screens.insert(std::make_pair(ScreenTypes::startScreen, std::shared_ptr<Screen>()));
    screens[ScreenTypes::startScreen] = (ScreenBase *)(new Screen<ScreenTypes::startScreen>());
    screens[ScreenTypes::partCreationScreen] = (ScreenBase *)(new Screen<ScreenTypes::partCreationScreen>());
    screens[ScreenTypes::PartAssemblyScreen] = (ScreenBase *)(new Screen<ScreenTypes::PartAssemblyScreen>());
}

void ScreenManager::render() {
    screens[currentScreen]->render();
}


void ScreenManager::update() {

    screens[currentScreen]->update();
}

ScreenTypes ScreenManager::getCurrentScreen() {
    return currentScreen;
}

void ScreenManager::setCurrentScreen(ScreenTypes newScreen) {
    currentScreen = newScreen;
}


