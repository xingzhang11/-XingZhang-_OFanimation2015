#pragma once

#include "ofMain.h"


class Mover
{
    public:

    void setup(float x, float y);
    void update();
    void resetForces();
    void applyForce(ofVec2f force);
    void applyDampingForce(float damping);
    void draw();

    ofVec2f pos, vel, acc;
};


