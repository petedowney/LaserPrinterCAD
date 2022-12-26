//
// Created by Pete Downey on 12/25/22.
//

#include <cstdio>
#include "Screen.h"

// Start Screen
// ----------------------
void Screen<ScreenTypes::startScreen>::update() {
    printf("1a");
}
void Screen<ScreenTypes::startScreen>::render() {
    printf("1b");
}
// ----------------------

// partCreationScreen
// ----------------------
void Screen<ScreenTypes::partCreationScreen>::update() {

    printf("2a");
}
void Screen<ScreenTypes::partCreationScreen>::render() {
    printf("2b");
}
// ----------------------

// PartAssemblyScreen
// ----------------------
void Screen<ScreenTypes::PartAssemblyScreen>::update() {

    printf("3a");
}
void Screen<ScreenTypes::PartAssemblyScreen>::render() {
    printf("3c");
}
// ----------------------

