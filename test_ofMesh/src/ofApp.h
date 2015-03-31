//I want to explore OF with image, so I follow a tutorial from OF website to go through this code
//the idea is to understand how it works first, then I want to add attraction and repulsion to it 

#pragma once

#include "ofMain.h"

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

		ofImage image;
		ofMesh mesh;

        // for orbit
		ofMesh meshCopy;
		bool orbiting;
		float startOrbitTime;

		vector<float> distances;
		vector<float> angles;
		ofVec3f meshCentroid;
};
