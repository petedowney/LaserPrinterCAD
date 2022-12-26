//
// Created by Pete Downey on 12/24/22.
//

#ifndef LASERPRINTERCAD_SCREEN_H
#define LASERPRINTERCAD_SCREEN_H

#include "raylib.h"
//#include "Program.h"

// different screentypes defined here
enum class ScreenTypes {
    startScreen,
    partCreationScreen,
    PartAssemblyScreen,
};

// general methods are named here
class ScreenInterface {

public:
    virtual void update() = 0;
    virtual void render() = 0;

private:
};

// so outside calls can use this as a name
class ScreenBase : public ScreenInterface {};


template <ScreenTypes ScreenType>
class Screen : public ScreenBase {
public:
    virtual void update() = 0;
    virtual void render() = 0;

};

template <>
class Screen<ScreenTypes::startScreen> {
public:
    virtual void update();
    virtual void render();
};

template <>
class Screen<ScreenTypes::partCreationScreen> {
public:
    virtual void update();
    virtual void render();
};

template <>
class Screen<ScreenTypes::PartAssemblyScreen> {
public:
    virtual void update();
    virtual void render();
};



#endif //LASERPRINTERCAD_SCREEN_H
