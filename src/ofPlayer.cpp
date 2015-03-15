#include "ofPlayer.h"

ofPlayer::ofPlayer(string _name)
{
    name = _name;
    playerRadius = 50;
    x = ofRandom(playerRadius, ofGetWidth()-playerRadius);
    y = ofGetHeight()-playerRadius;
    z = ofRandom(playerRadius, (ofGetWidth()*1.5)-playerRadius);
}

void ofPlayer::draw()
{
    ofSetColor(0, 255, 0);
    ofFill();
    ofDrawSphere(x, y, -z, 50);
    ofSetColor(255, 255, 255);
}