//w01h01 click to change A to B by Xing Zhang
//Based on week 1 example 03 by Bernardo Santos Schorr on 1/31/15.

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    mouseFunction = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

    pct += 0.001;
    if(pct > 1.0f){
        pct = 0.0f;
    }
    obj.powUpdatePct(pct, 0.3);

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackgroundGradient(ofColor(255), ofColor(110));
    obj.draw();
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

    if(mouseFunction){
        obj.setinitPos(x,y);
        mouseFunction =0;
    }else{
        obj.setfinalPos(x,y);
        mouseFunction =1;
    }

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
