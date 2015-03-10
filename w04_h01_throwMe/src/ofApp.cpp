#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    gravity.set(0, 0.3);
    isThrown = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

    mover.resetForces();
    mover.applyForce(gravity+throwVel);
    mover.applyDampingForce(0.01);
    mover.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    mover.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){



}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

    Mover mover;
    mover.setup(ofGetMouseX(), ofGetMouseY());
    throwVel.set(ofGetMouseX()-ofGetPreviousMouseX(), ofGetMouseY()-ofGetPreviousMouseY());
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
