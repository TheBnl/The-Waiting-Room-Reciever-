#include "ofPlayer.h"

ofPlayer::ofPlayer(string _name)
{
    name = _name;
    playerRadius = 50;
    x = ofRandom(playerRadius, ofGetWidth()-playerRadius);
    y = ofGetHeight()-playerRadius;
    z = ofRandom(playerRadius, (ofGetWidth()*1.5)-playerRadius);
    
    cout << "creating player " + name + " at x, y, z" + ofToString(x) + ", " + ofToString(y) + ", " + ofToString(z) << endl;
    //player.loadModel("stickmannocomputer.dae");
    //player.setPosition(x, y, z);
}

void ofPlayer::draw()
{
    ofSetColor(0, 255, 0);
    ofFill();
    //player.drawFaces();
    ofDrawSphere(x, y, -z, 50);
    ofSetColor(255, 255, 255);
}

string ofPlayer::getName()
{
    return name;
}

ofPoint ofPlayer::getPosition()
{
    return ofPoint(x, y, z);
}