#pragma once
#include <raylib.h>

class Particle{
private: 
    float x;
    float y;
    float r;

    
    Color color;

public:
    Particle();
    Particle(float x, float y, float r, Color color);

    void setX(float x);
    void setY(float y);
    void setR(float r);
    void setColor(Color color);

    float getX(){return x;};
    float getY(){return y;};
    float getR(){return r;};
    Color getColor(){return color;};

    void draw();
    void update();
};