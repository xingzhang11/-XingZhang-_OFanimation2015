//w01 h02 interpolate something else other than position by Xing Zhang
//Based on 2_rectangleInterpolate2 of algo2012 by Zach Liberman

#pragma once
#include "ofMain.h"

class rectangle {

	public:

        rectangle();

		void draw();
		void interpolateByPct(float myPct);

		ofPoint		pos;
		ofPoint		posa;
		ofPoint		posb;
		float		pct;	// what pct are we between "a" and "b"


		float		radius;

		float		radiusa;
		float		radiusb;


};
