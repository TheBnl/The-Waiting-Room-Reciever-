#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    glEnable(GL_DEPTH_TEST);
    
    networkManager = new ofNetworkManager();
    room = new ofRoom();
}

//--------------------------------------------------------------
void ofApp::update(){
    networkManager->update(room->getRoomWidth(), room->getRoomHeight(), room->getRoomDepth());
    room->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    room->draw();
    networkManager->draw(10, 15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
