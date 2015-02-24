// this code is based on 14_sinExample_atan of the ofBook.
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ofMain.h"

class rectangle
{
    public:
        rectangle();

        void draw();
        void xenoToPoint(float catchX, float catchY);

        ofPoint pos;
        ofPoint prevPos;

        float angle;
        float catchUpSpeed;
};

#endif // RECTANGLE_H
