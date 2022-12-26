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
        update();
        render();
    }

}

void Program::update() {

    screenManager.update();
}

void Program::render() {
    BeginDrawing();

    ClearBackground(WHITE);
    screenManager.render();

    EndDrawing();
}

static float getScreenWidth() {
    return screenDimensions.x;
}

static float getScreenHeight() {
    return screenDimensions.y;
}

static glm::vec2 getScreenDimensions() {
    return screenDimensions;
}

static std::string getWindowTitle() {
    return WINDOW_TITLE;
}

