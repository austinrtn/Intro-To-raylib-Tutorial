#include "Particle.h"

Particle::Particle() : x(0), y(0), r(0), color(WHITE) {}
Particle::Particle(float x, float y, float r, Color color) : x(x), y(y), r(r), color(color) {}

void Particle::setX(float x) {
    this->x = x;
}
void Particle::setY(float y){
    this->y = y;
}

void Particle::setR(float r) {
    this->r = r;
}

void Particle::setColor(Color color) {
    this->color = color;
}

void Particle::draw(){
    DrawCircle(x,y,r,color);
}

void Particle::update(){
    
}