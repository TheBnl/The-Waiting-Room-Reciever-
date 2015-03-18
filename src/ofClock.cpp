#include "ofClock.h"

ofClock::ofClock()
{
    clock.set(75, 20);
    clock.setResolution(12, 1);
    clock.rotate(90, 1.0, 0.0, 0.0);
}

void ofClock::update(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void ofClock::draw()
{
    clock.setPosition(x, y, -(z-20));
    clock.draw();
}