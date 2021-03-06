#pragma once

#include "ofMain.h"
#include "ofxCv.h"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    
    ofImage distorted;
    ofImage undistorted;
    
    ofxCv::Calibration calibration;
};
