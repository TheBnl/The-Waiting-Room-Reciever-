#include "ofRoomLight.h"

ofRoomLight::ofRoomLight()
{
    light.enable();
    light.setPointLight();
    
    ofFloatColor ambientColor(0.7,0.7,0.7,1);
    ofFloatColor diffuseColor(1,1,1);
    ofFloatColor specularColor(0,1,0);
    light.setAmbientColor(ambientColor);
    light.setDiffuseColor(diffuseColor);
    light.setSpecularColor(specularColor);
}

void ofRoomLight::update(float _width, float _height, float _depth)
{
    light.setPosition(_width*0.5, 20, -(_depth*0.5));
}

void ofRoomLight::draw()
{
    light.draw();
}

void ofRoomLight::enable()
{
    light.enable();
}

void ofRoomLight::disable()
{
    light.disable();
}