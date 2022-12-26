//
// Created by Pete Downey on 12/24/22.
//

#ifndef LASERPRINTERCAD_PROGRAM_H
#define LASERPRINTERCAD_PROGRAM_H

#include <string>
#include <glm/glm.hpp>
#include "Screens/ScreenManager.h"

static glm::vec2 screenDimensions = {1200, 750};
static char* const WINDOW_TITLE = "LC-CAD";
static float getScreenWidth();
static float getScreenHeight();
static glm::vec2 getScreenDimensions();
static std::string getWindowTitle();

class Program {

public:
    Program();

    void run();
private:
    ScreenManager screenManager;

    void render();
    void update();
};


#endif //LASERPRINTERCAD_PROGRAM_H
