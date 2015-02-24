#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);

}

//--------------------------------------------------------------

//--------------------------------------------------------------
void ofApp::draw(){

    ofDrawBitmapString("this code is based on w3_simpleHarmony of Animation By Code class, created by Xing Zhang, Feb 23 2015", 10, 20);

    for (float i = 1; i < 20; i++) {

        float sinOfTime = sin(ofGetElapsedTimef()*i);
        float offset = sinOfTime * 20;
        float x1 = i*80;
        float y1 = ofGetHeight()/3 + offset;
        float x2 = x1;
        float y2 = ofGetHeight()/2 - offset;


    ofSetColor(ofColor::black,90);
    ofCircle(x1, y1, 7);
    ofSetColor(ofColor::black,230);
    ofCircle(x2, y2, 7);
    }
}

void ofApp::update(){

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
