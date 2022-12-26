//
// Created by Pete Downey on 12/24/22.
//

#ifndef LASERPRINTERCAD_SCREENMANAGER_H
#define LASERPRINTERCAD_SCREENMANAGER_H

#include <map>
#include "Screen.h"

class ScreenManager {

public:

    ScreenManager();
    void update();
    void render();
    ScreenTypes getCurrentScreen();
    void setCurrentScreen(ScreenTypes newScreen);

private:
    ScreenTypes currentScreen;
    std::map<ScreenTypes, ScreenBase *> screens;

};


#endif //LASERPRINTERCAD_SCREENMANAGER_H
