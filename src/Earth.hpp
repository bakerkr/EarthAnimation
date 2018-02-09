//
//  Earth.hpp
//  Lab9
//
//  Created by Kyle Baker on 12/6/17.
//

#ifndef Earth_hpp
#define Earth_hpp

#include <stdio.h>
#include "Planet.hpp"
#include "ofApp.h"

class Earth: public Planet{
public:
    Earth();
    Earth(int);
    virtual void display();
    virtual void setup(int);

private:
    ofSpherePrimitive sEarth;
    ofImage earth;
};

#endif /* Earth_hpp */
