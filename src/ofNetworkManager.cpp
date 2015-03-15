#include "ofNetworkManager.h"

ofNetworkManager::ofNetworkManager()
{
    connection.Create();
    connection.Bind(11999);
    connection.SetNonBlocking(true);
}


void ofNetworkManager::update(float _roomWidth, float _roomHeight, float _roomDepth)
{
    char udpMessage[100000];
    connection.Receive(udpMessage,100000);
    string data = udpMessage;
    
    light.update(_roomWidth, _roomHeight, _roomDepth);
    
    if (data != "") {
        json = data;
        string status = json["status"].asString();
        string ip = json["ip"].asString();
        
        message = ip + " = " + status;
        
        /*
         * When a player connects add it to the player map
         */
        if (status == "connect") {
            players.insert ( std::pair<string, ofPlayer>(ip,ofPlayer(ip)) );
        }
        
        /*
         * When a player disconnects, verify that he exists and remove from the player map.
         */
        if (status == "disconnect") {
            if ( players.find(ip) != players.end() ) {
                players.erase(ip);
            }
            
        }
        
    }
}


void ofNetworkManager::draw(int x, int y)
{
    ofDrawBitmapString("Listening to port: 11999", x, y);
    ofDrawBitmapString(message, x, y + 25);
    
    light.enable();
    light.draw();
    /*
     * Iterate over the joined players and draw
     */
    typedef map<string, ofPlayer>::iterator it_type;
    for(it_type iterator = players.begin(); iterator != players.end(); iterator++) {
        iterator->second.draw();
    }
    light.disable();
}