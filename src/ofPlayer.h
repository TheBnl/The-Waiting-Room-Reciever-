#ifndef _OF_PLAYER
#define _OF_PLAYER

#include "ofMain.h"
//#include "ofxAssimpModelLoader.h"
//#include "ofxAssimpAnimation.h"

class ofPlayer {
    
public:
    
    ofPlayer(string name);
    void update(float _roomWidth);
    void draw();
    string getName();
    ofPoint getPosition();
    
    
private:
    string name;
    //ofxAssimpModelLoader player;
    float playerRadius;
    float x;
    float y;
    float z;
    
};

#endif
