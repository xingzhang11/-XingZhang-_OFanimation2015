//
//  MyObj.cpp
//  01_simpleClass
//
//  Created by Bernardo Santos Schorr on 1/31/15.
//
//

//w01 h02 interpolate something else other than position by Xing Zhang
//Based on 2_rectangleInterpolate2 of algo2012 by Zach Liberman


#include "MyObj.h"

rectangle::rectangle(){

}

//------------------------------------------------------------------
void rectangle::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position

    ofSetColor(198,246,55);
    ofCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, radius);
}


//------------------------------------------------------------------
void rectangle::interpolateByPct(float myPct){
	pct = myPct;

	pos.x = (1-pct) * posa.x + (pct) * posb.x;
	pos.y = (1-pct) * posa.y + (pct) * posb.y;

	radius = (1-pct) * radiusa + (pct) * radiusb;

}
