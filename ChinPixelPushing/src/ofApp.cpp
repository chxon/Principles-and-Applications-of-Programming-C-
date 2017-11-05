#include "ofApp.h"
#include <iostream>
//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    int size = sizeof(pixels);
    
    float phase = 0;
    float dphase = TWO_PI / 1024;
    
    float gPush = mouseY / 100.0;
    
    for (int i = 0; i < size; i += 4, phase += dphase){
        pixels[i] = sinf(phase) * 255; //Red
        pixels[i+1] = 255 - sinf(phase * gPush) * 255; //Green
        pixels[i+2] = sinf(phase * 1.2) * 255; // Blue
        pixels[i+3] = 255; // Alpha
    }
    
    tex.loadData(pixels, 1024, 768, GL_RGBA);
    
//    float phase = 0;
//    float dphase = TWO_PI / 1024;
//    
//    for (int i = 0; i < size; i++, phase += dphase){
//        pixels[i] = sinf(phase + phaseoff) * 255;
//    }
//    phaseoff += 0.01;
//    tex.loadData(pixels, 1024, 768, GL_LUMINANCE);
}

//--------------------------------------------------------------
void ofApp::draw(){
    tex.draw(0,0);

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
