//
// Created by Pete Downey on 12/24/22.
//

#ifndef LASERPRINTERCAD_SCREEN_H
#define LASERPRINTERCAD_SCREEN_H

// Implement this class for all other screenBased classes

class Screen {
public:
    virtual void update() = 0;
    virtual void render() = 0;
};


#endif //LASERPRINTERCAD_SCREEN_H
