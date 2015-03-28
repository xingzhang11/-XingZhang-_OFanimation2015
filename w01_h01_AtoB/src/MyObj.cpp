//w01h01 click to change A to B by Xing Zhang
//Based on week 1 example 03 by Bernardo Santos Schorr on 1/31/15.


#include "MyObj.h"


MyObj::MyObj(){
}

void MyObj::setinitPos(float _x, float _y){

    initPos.set(_x, _y);
}

void MyObj::setfinalPos(float _x, float _y){

    finalPos.set(_x, _y);
}

void MyObj::update(float pct){

    pos = initPos*(1.0 - pct) + finalPos * pct;

}

void MyObj::powUpdatePct(float _pct, float _shaper){

    float powPct = powf(_pct, _shaper);
    pos = initPos*(1.0 - powPct) + finalPos*powPct;
}


void MyObj::draw(){

    ofSetColor(255);
    ofLine(initPos, finalPos);

    ofSetColor(ofColor::black);
    ofCircle(initPos, 10);

    ofSetColor(ofColor::white);
    ofCircle(finalPos, 10);

    ofSetColor(ofColor::pink);
    ofCircle(pos, 20);
}
