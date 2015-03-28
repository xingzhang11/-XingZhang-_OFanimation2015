//w01h01 click to change A to B by Xing Zhang
//Based on week 1 example 03 by Bernardo Santos Schorr on 1/31/15.

#pragma once

#include "ofMain.h"
#include "MyObj.h"

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

    MyObj obj;
    float pct;
    bool mouseFunction;

};
