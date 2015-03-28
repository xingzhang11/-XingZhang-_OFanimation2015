//w01h01 click to change A to B by Xing Zhang
//Based on week 1 example 03 by Bernardo Santos Schorr on 1/31/15.

#pragma once
#include "ofMain.h"

class MyObj{

    public:
        MyObj();
        void setinitPos(float _x, float _y);
        void setfinalPos(float _x, float _y);
        void update(float pct);
        void draw();
        void powUpdatePct(float _pct, float _shaper);

        ofVec2f pos;
        ofVec2f initPos, finalPos;
};
