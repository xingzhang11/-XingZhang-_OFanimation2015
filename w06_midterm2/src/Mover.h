//this code is based on 04_AttractionRepulsion by Bernardo created for 2015 OF animation class
//I want to make the particles get the pixel of the bg image

#pragma once

#include "ofMain.h"

class Mover {
public:

    void setup(float x, float y, float _mass);
    void update();
    void resetForces();
    void applyForce(ofVec2f force);
    void applyDampingForce(float damping);
    void checkEdges();
    void draw();

    ofVec2f pos, vel, acc;
    float mass;

};
