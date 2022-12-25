//
// Created by Pete Downey on 12/24/22.
//

#include "Program.h"
#include "raylib.h"
#include "Screens/ScreenManager.h"

Program::Program() {

    screenManager = {};
}

void Program::run() {

    InitWindow((int)screenDimensions.x, (int)screenDimensions.y, WINDOW_TITLE);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(WHITE);

        update();
        render();

        EndDrawing();
    }

}

void Program::update() {

    screenManager.update();
}

void Program::render() {

    screenManager.render();
}

float Program::getScreenWidth() {
    return screenDimensions.x;
}

float Program::getScreenHeight() {
    return screenDimensions.y;
}

glm::vec2 Program::getScreenDimensions() {
    return screenDimensions;
}

std::string Program::getWindowTitle() {
    return WINDOW_TITLE;
}

