#include <raylib.h>
#include "Particle.h"

void loop();

Particle particle;

int main() {
    particle = Particle(600,400, 20, WHITE);
    InitWindow(1200, 800, "Particles");
    SetTargetFPS(60);

    loop();
    CloseWindow();
    return 0;
}

void loop(){
    while(WindowShouldClose() == false){
        BeginDrawing();
        
        particle.draw();
        ClearBackground(BLACK);

        EndDrawing();
    }
}