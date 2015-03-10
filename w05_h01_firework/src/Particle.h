//walker+particle


#pragma once

#include "ofMain.h"

class Particle {
public:

    Particle();

    void setup();

    void resetForces();
    void applyForce(ofVec2f force);

    void update();
    void draw();

    ofVec2f pos, vel, acc;
    int choice;
    float lifespan;

};
