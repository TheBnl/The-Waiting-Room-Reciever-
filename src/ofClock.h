#ifndef _OF_CLOCK
#define _OF_CLOCK

#include "ofMain.h"

class ofClock {
    
public:
    
    ofClock();
    void update(float x, float y, float z);
    void draw();
    
    
private:
 
    ofCylinderPrimitive clock;
    float x;
    float y;
    float z;
    
};

#endif
