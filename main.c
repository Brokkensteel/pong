#include "raylib.h"
#include "bola.h"







int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1024;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(120);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------

    Ball ball;
    ball.posX = 512;
    ball.posY = 360;
    ball._size = 10;
    ball.speed = 360;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {

        ball.posX += (ball.speed * (float)GetFrameTime());
        if(ball.posX >= 1024 || ball.posX <= 0)
        {
            ball.speed *= -1;
        }






        //-----------------------------DRAWING------------------------------------------------

        BeginDrawing();

        ClearBackground(BLACK);

        DrawCircle(ball.posX, ball.posY, ball._size, WHITE);





        EndDrawing();
    }


    return 0;
}
