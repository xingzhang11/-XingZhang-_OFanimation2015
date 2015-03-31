//this code is based on 04_AttractionRepulsion by Bernardo created for 2015 OF animation class
//I want to make the particles get the pixel of the bg image

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);

    for (int y = 0; y < ofGetWidth(); y+=20) {
        for (int x = 0; x < ofGetWidth(); x+=20) {
            Mover mover;
            mover.setup(x, y, 0.5);
            moverList.push_back(mover);
        }
    }

    //load the image, get pixel from it
    img.loadImage("wire.jpg");
    px = img.getPixels();



}

//--------------------------------------------------------------
void ofApp::update(){

    ofVec2f mousePos = ofVec2f(ofGetMouseX(), ofGetMouseY());

    for (int i = 0; i < moverList.size(); i++) {

        ofVec2f repulsion;
        ofVec2f attraction;

        ofVec2f diff = mousePos - moverList[i].pos;

        float dist = diff.length();

        if (dist < 100) {
            repulsion.set(diff.getNormalized()* -0.1);
        } else if (dist < 200){
            attraction.set(diff.getNormalized()* 0.1);
        }

        moverList[i].resetForces();
        moverList[i].applyForce(repulsion);
        moverList[i].applyForce(attraction);
        moverList[i].applyDampingForce(0.02);
        moverList[i].checkEdges();
        moverList[i].update();

    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < moverList.size(); i++) {
        int cx, cy;
        cx = moverList[i].pos.x;
        cy = moverList[i].pos.y;
        //i changed this line many times so that not to get the code crashed...
        //this is the combination that crashes the least to me...
        ofSetColor(px[cy*img.width+cx*img.height]);
        moverList[i].draw();
    }
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
