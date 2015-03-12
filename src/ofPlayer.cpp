#include "ofPlayer.h"

ofPlayer::ofPlayer(string _name)
{
    name = _name;
    x = ofRandom(ofGetWidth());
    y = ofRandom(ofGetHeight());
}

void ofPlayer::draw()
{
    ofSetColor(0, 255, 0);
    ofFill();
    ofDrawSphere(x, y, 50);
}