#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    image.loadImage("wire.jpg");
    image.resize(200, 133);//resize it /4

    mesh.setMode(OF_PRIMITIVE_LINES);
    float intensityThreshold = 180.0;
    int w = image.getWidth();
    int h = image.getHeight();
    for (int x=0; x<w; ++x) {
        for (int y=0; y<h; ++y) {
            ofColor c = image.getColor(x, y);
            float intensity = c.getLightness();
            if (c.getLightness() > intensityThreshold) {
                ofVec3f pos(4*x, 4*y, 0.0);
                mesh.addVertex(pos);
                mesh.addColor(c);
            }
        }
    }


    float connectionDistance = 20;
    int numVerts = mesh.getNumVertices();
    for (int a=0; a<numVerts; ++a) {
    ofVec3f verta = mesh.getVertex(a);
    for (int b=a+1; b<numVerts; ++b) {
        ofVec3f vertb = mesh.getVertex(b);
        float distance = verta.distance(vertb);
        if (distance <= connectionDistance) {
            mesh.addIndex(a);
            mesh.addIndex(b);
        }
    }
}

    //this is for creating the orbit
    meshCentroid = mesh.getCentroid();
    for (int i=0; i<numVerts; ++i) {
    ofVec3f vert = mesh.getVertex(i);
    float distance = vert.distance(meshCentroid);
    float angle = atan2(vert.y-meshCentroid.y, vert.x-meshCentroid.x);
    distances.push_back(distance);
    angles.push_back(angle);

    orbiting = false;
    startOrbitTime = 0.0;
    meshCopy = mesh;
 }
}

//--------------------------------------------------------------
void ofApp::update(){

    if (orbiting) {
    int numVerts = mesh.getNumVertices();
    for (int i=0; i<numVerts; ++i) {
        ofVec3f vert = mesh.getVertex(i);
        float distance = distances[i];
        float angle = angles[i];
        float elapsedTime = ofGetElapsedTimef() - startOrbitTime;
        float speed = ofMap(distance, 0, 200, 1, 0.25, true);
        float rotatedAngle = elapsedTime * speed + angle;
        vert.x = distance * cos(rotatedAngle) + meshCentroid.x;
        vert.y = distance * sin(rotatedAngle) + meshCentroid.y;

        mesh.setVertex(i, vert);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofColor centerColor = ofColor(78, 78, 78);
    ofColor edgeColor(0, 0, 0);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    mesh.draw();
    //how to save an image??
    //image.saveImage("brightness.jpg");

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'o') {
    orbiting = !orbiting;           // This inverts the boolean
    startOrbitTime = ofGetElapsedTimef();
    mesh = meshCopy;            // This restores the mesh to its original values
}

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
