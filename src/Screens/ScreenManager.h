//
// Created by Pete Downey on 12/24/22.
//

#ifndef LASERPRINTERCAD_SCREENMANAGER_H
#define LASERPRINTERCAD_SCREENMANAGER_H


class ScreenManager {

public:
    enum ScreenTypes {
        startScreen,
        partCreationScreen,
        PartAssemblyScreen,
    };
    ScreenManager();
    void update();
    void render();

private:

};


#endif //LASERPRINTERCAD_SCREENMANAGER_H
