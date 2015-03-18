#ifndef _OF_ROOM
#define _OF_ROOM

#include "ofMain.h"
#include "ofRoomLight.h"
#include "ofClock.h"

class ofRoom {
    
public:
    
    ofRoom();
    void update();
    void draw();
    float getRoomWidth();
    float getRoomHeight();
    float getRoomDepth();
    
    
private:
    
    ofBoxPrimitive interior;
    
    ofBoxPrimitive roof;
    ofBoxPrimitive leftWall;
    ofBoxPrimitive rightWall;
    ofBoxPrimitive backWall;
    ofBoxPrimitive floor;
    
    ofCamera camera;
    ofRoomLight light;
    ofClock clock;
    float width;
    float height;
    float depth;
    
};

#endif
