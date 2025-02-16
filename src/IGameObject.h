#pragma once

class IGameObject{
protected: 
    float x, y;

public:
    IGameObject() {}
    virtual ~IGameObject() {}

    virtual void update(){}
    virtual void draw(){}

    virtual void setx(float x){this->x = x;}
    virtual void setY(float y){this->y = y;}

    virtual float getX(){return x;}
    virtual float getY(){return y;}
};