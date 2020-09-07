#include <iostream>
#include <raylib.h>
#include <entt.hpp>

int main() {
	InitWindow(1280, 720, "Andora");
    SetTargetFPS(60);
    entt::registry registry;
    
	while (!WindowShouldClose()) {
		BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(100, 100, 50, 50, BLUE);
		EndDrawing();
    }
    return 0;
}