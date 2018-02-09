//
//  Moon.hpp
//  Lab9
//
//  Created by Kyle Baker on 12/6/17.
//

#ifndef Moon_hpp
#define Moon_hpp

#include <stdio.h>
#include "Planet.hpp"
#include "ofApp.h"

class Moon: public Planet{
public:
    Moon();
    Moon(int);
    virtual void display();
    virtual void setup(int);
    
private:
    ofSpherePrimitive sMoon;
    ofImage moon;
    
    float xPos;
    float yPos;
    float zPos;
};

#endif /* Moon_hpp */
