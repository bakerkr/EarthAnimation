#pragma once

#include "ofMain.h"
#include "Planet.hpp"
#include "Moon.hpp"
#include "Earth.hpp"
#include <vector>

class ofApp : public ofBaseApp{//inherited
        float _R{300},r{1};
        vector<ofPoint> verticies;
        vector<ofPoint> xs;
        vector<ofPoint> ys;
        vector<ofPoint> zs;
        float spinX{},spinY{},z{350};
        ofSoundPlayer sound;
    
        vector <Planet*> p;
        
        ofSpherePrimitive Moon;
        ofImage moon;
    
    ofImage image{"background.jpg"};
    
	public:
		void setup();
		void update();
		void draw();
    
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void rotate();
};
