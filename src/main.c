#include <stdio.h>
#include <raylib.h>

#define WHEIGHT    800
#define WWIDTH     450

int
main(void)
{
	SetTargetFPS(60);
	InitWindow(WHEIGHT, WWIDTH, "nzm");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawRectangle(0, 0, 20, 10, DARKGRAY);
		EndDrawing();
	}

	CloseWindow();
}
