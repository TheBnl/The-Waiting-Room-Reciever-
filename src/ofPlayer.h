#ifndef _OF_PLAYER
#define _OF_PLAYER

#include "ofMain.h"

class ofPlayer {
    
public:
    
    ofPlayer(string name);
    void update();
    void draw();
    
    
private:
    string name;
    float x;
    float y;
    
};

#endif
