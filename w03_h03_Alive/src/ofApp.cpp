//this code is based on "04_sineSizeColor" of Animation By Code class, created by Xing Zhang

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    mouseFunction = 0;
    i = 1;

}

//--------------------------------------------------------------
void ofApp::update(){

    float sinOfTime = sin(ofGetElapsedTimef());
    size = ofMap(sinOfTime*i, -1, 1, 50, 200);
    alpha = ofMap(sinOfTime, -1, 1, 0, 255);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255, alpha);
    ofCircle(ofGetWindowSize()/2, size);

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

    if(mouseFunction){
        i=1;
        ofCircle(ofGetWindowSize()/2, size);
        mouseFunction = 0;
    }else{
        i=20;
        ofCircle(ofGetWindowSize()/2, size);
        mouseFunction = 1;
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
