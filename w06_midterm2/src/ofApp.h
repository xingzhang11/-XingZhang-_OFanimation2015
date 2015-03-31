//this code is based on 04_AttractionRepulsion by Bernardo created for 2015 OF animation class
//I want to make the particles get the pixel of the bg image

#pragma once

#include "ofMain.h"
#include "Mover.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    vector <Mover> moverList;

    ofImage img;
    //not sure what this "unsigned char" means, but I got it in the error when I tried to make the poniter an int
    //error disappears when I changed it to unsigned char
    unsigned char *px;
};
