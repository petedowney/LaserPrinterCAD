//
// Created by Pete Downey on 12/24/22.
//

#ifndef LASERPRINTERCAD_PROGRAM_H
#define LASERPRINTERCAD_PROGRAM_H

#include <string>
#include <glm/glm.hpp>
#include "Screens/ScreenManager.h"

class Program {

public:
    Program();
    float getScreenWidth();
    float getScreenHeight();
    glm::vec2 getScreenDimensions();
    std::string getWindowTitle();


    void run();
private:
    glm::vec2 screenDimensions = {1200, 750};
    char* const WINDOW_TITLE = "LC-CAD";

    ScreenManager screenManager;

    void render();
    void update();
};


#endif //LASERPRINTERCAD_PROGRAM_H
