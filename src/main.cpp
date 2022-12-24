#include <iostream>
#include "raylib.h"
#include <glm/glm.hpp>

#define SCREEN_WIDTH (800)
#define SCREEN_HEIGHT (450)
#define WINDOW_TITLE "LPCAD"

void update();
void render();

glm::vec2 position;
glm::vec2 velocity;

int main() {

//glm::vec2 = {0,0};
    position = {SCREEN_WIDTH / 2,SCREEN_HEIGHT / 2};
    velocity = {(float)((rand()/RAND_MAX) - .5) * 5, (float)((rand()/RAND_MAX) - .5) * 5};

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(WHITE);

        update();
        render();

        EndDrawing();
    }
    return 0;
}

void update() {

    position += velocity;

    if (position.x < 0 or position.x > SCREEN_WIDTH)
        velocity.x *= -1;

    if (position.y < 0 or position.y > SCREEN_HEIGHT)
        velocity.y *= -1;

}

void render() {

    DrawCircle(position.x, position.y, 5, RED);

}