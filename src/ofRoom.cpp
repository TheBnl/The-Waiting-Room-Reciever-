#include "ofRoom.h"

ofRoom::ofRoom()
{
    width = ofGetWidth();
    height = ofGetHeight();
    depth = width*1.5;
    
    roof.set(width, 1, depth);
    leftWall.set(1, height, depth);
    backWall.set(width, height, 1);
    rightWall.set(1, height, depth);
    floor.set(width, 1, depth);
    
    //light = *new ofRoomLight();
    
    //camera.setupPerspective();
    //camera.setNearClip(0);
    //camera.setFarClip(depth+20);
    //camera.rotate(-10.0, 1.0, 0, 0);
}

void ofRoom::update()
{
    width = ofGetWidth();
    height = ofGetHeight();
    depth = width*1.5;
    
    roof.set(width, 1, depth);
    roof.setPosition(width*0.5, 0, -depth*0.5);
    leftWall.set(1, height, depth);
    leftWall.setPosition(0, height*0.5, -depth*0.5);
    backWall.set(width, height, 1);
    backWall.setPosition(width*0.5, height*0.5, -depth);
    rightWall.set(1, height, depth);
    rightWall.setPosition(width, height*0.5, -depth*0.5);
    floor.set(width, 1, depth);
    floor.setPosition(width*0.5, height, -depth*0.5);
    
    light.update(width, height, depth);
    
    //camera.setFarClip(depth+20);
    //camera.setPosition(width*0.5, height*0.5, depth*0.8);
}

void ofRoom::draw()
{
    //camera.begin();
    light.enable();
    
    light.draw();
    
    ofSetColor(255, 255, 255);
    roof.draw();
    ofSetColor(175, 175, 175);
    leftWall.draw();
    rightWall.draw();
    ofSetColor(155, 155, 155);
    backWall.draw();
    ofSetColor(145, 145, 145);
    floor.draw();
    
    ofSetColor(255, 0, 0);
    ofDrawSphere(0, 0, 0, 10);
    ofDrawSphere(0, 0, -depth, 10);
    ofDrawSphere(0, height, -depth, 10);
    ofDrawSphere(0, height, 0, 10);
    ofDrawSphere(width, 0, 0, 10);
    ofDrawSphere(width, 0, -depth, 10);
    ofDrawSphere(width, height, -depth, 10);
    ofDrawSphere(width, height, 0, 10);
    ofSetColor(255,255,255);

    light.disable();
    //camera.end();
}

float ofRoom::getRoomWidth()
{
    return width;
}

float ofRoom::getRoomHeight()
{
    return height;
}

float ofRoom::getRoomDepth()
{
    return depth;
}