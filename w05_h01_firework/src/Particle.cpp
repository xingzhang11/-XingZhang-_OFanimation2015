#include "Particle.h"

Particle::Particle() {
    pos.set(ofGetWindowSize()/2);
    vel.x = ofRandom(-2, 2);
    vel.y = ofRandom(-0.5, -6);
    lifespan = 255;
}

void Particle::setup() {

}

void Particle::resetForces() {
    acc *= 0;
}

void Particle::applyForce(ofVec2f force) {
    acc += force;
}

void Particle::update() {

    choice = ofRandom(4);
    if (choice == 0) pos.x++;
    if (choice == 1) pos.y++;
    if (choice == 2) pos.x--;
    if (choice == 3) pos.y--;

    vel += acc;
    pos += vel;

    if (lifespan > 0) lifespan -= 3.0;

}

void Particle::draw() {

    ofSetColor(lifespan);
    ofCircle(pos, 5);
}

