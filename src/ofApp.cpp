#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    image.resize(1024,768);
    
    sound.load("Music.mp3");
    sound.play();
    ofPoint center;
    for(int i{};i!=15000;i++)
    {
        center=ofPoint{ofRandom(-1,1), ofRandom(-1,1),ofRandom(-1,1)};//center vector
        center.normalize();//normalize the magnitude to 1
        center=center*_R;//enlargethe magnitude to the radius of the sphere
        verticies.push_back(center);
        xs.push_back(ofPoint{ofRandom(-r,r),ofRandom(-r,r),ofRandom(-r,r)});
        ys.push_back(ofPoint{ofRandom(-r,r),ofRandom(-r,r),ofRandom(-r,r)});
        zs.push_back(ofPoint{ofRandom(-r,r),ofRandom(-r,r),ofRandom(-r,r)});
    }
    
    ofEnableDepthTest();//enable z-buffering
    
    p.push_back(new Earth(65));
    p.push_back(new class Moon(30));
}

//--------------------------------------------------------------
void ofApp::update(){
    spinX+=0.1;
    spinY+=0.1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    image.draw(0,0);
    ofBackground(0);
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2,z);//translate the origin the middle screen
    ofPushMatrix();
    ofRotateY(spinY);
    
    ofSetColor(255);
    for(int i{};i!=verticies.size();i++)
    {
        ofPushMatrix();
        ofTranslate(verticies[i].x,verticies[i].y,verticies[i].z);
        ofDrawTriangle(xs[i],ys[i],zs[i]);
        ofPopMatrix();
    }
    ofPopMatrix();
    p[0]->display();
    p[1]->display();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
