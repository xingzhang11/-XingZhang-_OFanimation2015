//w01 h02 interpolate something else other than position by Xing Zhang
//Based on 2_rectangleInterpolate2 of algo2012 by Zach Liberman

#pragma once

#include "ofMain.h"
#include "MyObj.h"

class ofApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased (int key);

		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased();

		rectangle myRectangle;
		float pct;

};
