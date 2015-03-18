#ifndef _OF_NETWORK_MANAGER
#define _OF_NETWORK_MANAGER

#include "ofMain.h"
#include "ofxNetwork.h"
#include "ofxJSON.h"
#include "ofPlayer.h"
#include "ofRoomLight.h"

#include "ofxAssimpModelLoader.h"
#include "ofxAssimpAnimation.h"

class ofNetworkManager {
    
    public:
        
        ofNetworkManager();
        void update(float roomWidth, float roomHeight, float roomDepth);
        void draw(int x, int y);
    
    
    private:
        ofxAssimpModelLoader model;
        ofxUDPManager connection;
        std::map<string, ofPlayer> players;
        ofRoomLight light;
        ofxJSONElement json;
        string message;
        float roomWidth;
        float roomHeight;
    
};

#endif
