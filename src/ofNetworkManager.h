#ifndef _OF_NETWORK_MANAGER
#define _OF_NETWORK_MANAGER

#include "ofMain.h"
#include "ofxNetwork.h"
#include "ofxJSON.h"
#include "ofPlayer.h"

class ofNetworkManager {
    
    public:
        
        ofNetworkManager();
        void update();
        void draw(int x, int y);
    
    
    private:
    
        ofxUDPManager connection;
        //vector<ofPlayer> players;
        std::map<string, ofPlayer> players;
        ofxJSONElement json;
        string message;
    
};

#endif
