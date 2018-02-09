//
//  Moon.cpp
//  Lab9
//
//  Created by Kyle Baker on 12/6/17.
//

#include "Moon.hpp"

Moon::Moon(int r){
    radius = r;
    setup(r);
}
void Moon::setup(int radius){
    sMoon.setRadius(radius);
    
    //setup for earth
    moon.load("moon.jpg");
    
    xPos = -250;
    yPos = 0;
    zPos = 0;
    sMoon.setPosition(xPos, yPos, zPos);
    
    sMoon.mapTexCoordsFromTexture(moon.getTexture());
}

void Moon::display(){
    if(xPos<0){
        xPos=xPos+1;
        zPos=zPos-2;
    }else if(xPos==700){
        xPos=-300;
        zPos=0;
    }else if(xPos>=0){
        xPos=xPos+1;
        zPos=zPos+2;
    }
    sMoon.setPosition(xPos, yPos, zPos);
    
    sMoon.rotate(0.5,0,1,0);//I know it is not technically correct, but I think it looks better!
    
    sMoon.setRadius(radius);
    moon.getTexture().bind();
    sMoon.draw();
}
