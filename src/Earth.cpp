//
//  Earth.cpp
//  Lab9
//
//  Created by Kyle Baker on 12/6/17.
//

#include "Earth.hpp"

Earth::Earth(int r){
    radius = r;
    setup(r);
}
void Earth::setup(int radius){
    sEarth.setRadius(radius);
    earth.load("earth.jpg");
    sEarth.setPosition(0,0,0);
    sEarth.mapTexCoordsFromTexture(earth.getTexture());
}

void Earth::display(){
    sEarth.rotate(0.5,0,1,0);
    earth.getTexture().bind();
    sEarth.draw();
}
