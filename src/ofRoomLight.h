#ifndef _OF_ROOM_LIGHT
#define _OF_ROOM_LIGHT

#include "ofMain.h"

class ofRoomLight {
    
public:
    
    ofRoomLight();
    void update(float width, float height, float depth);
    void draw();
    void enable();
    void disable();
    
    
private:
    
    ofLight light;
    
};

#endif
