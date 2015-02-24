// this code is based on 14_sinExample_atan of the ofBook.
#include "ofApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetVerticalSync(true);

    ofEnableAlphaBlending();
    ofBackground(30, 30, 30);

    myRectangle.pos.x = 100;
    myRectangle.pos.y = 50;

}

//--------------------------------------------------------------
void ofApp::update(){

    myRectangle.xenoToPoint(mouseX, mouseY);

}

//--------------------------------------------------------------
void ofApp::draw(){

    myRectangle.draw();
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
void ofApp::mouseReleased(){

}

//--------------------------------------------------------------
