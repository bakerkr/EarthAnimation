//
//  Planet.hpp
//  Lab9
//
//  Created by Kyle Baker on 12/6/17.
//

#ifndef Planet_hpp
#define Planet_hpp

#include <stdio.h>

class Planet{
public:
    Planet();
    ~Planet();
    Planet(int);
    virtual void display();
    virtual void setup();
protected:
    int radius;    
};

#endif /* Planet_hpp */
