#include "ofApp.h"
#include <iostream>
#include <stdlib.h>



//--------------------------------------------------------------
void ofApp::setup(){
    age = 25;
    position = "Left Mid";
    preferredFoot = "Right";
    shoeSize = 9.5;
    injured = false;
    headWidth = 250;
    headLength = 300;
    eyeSize = 75;
    hair.r =0;
    hair.g = 0;
    hair.b = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(rand()%255,rand()%255,rand()%255);
    
    ofSetColor(0, 0,255);
    ofDrawEllipse(mouseX, mouseY, headWidth, headLength);
    ofSetColor(mouseX/5, mouseY, mouseY-70);
    ofDrawEllipse(mouseX + 50, mouseY - 50, eyeSize , eyeSize) ;
    ofDrawEllipse(mouseX - 50, mouseY - 50, eyeSize , eyeSize) ;
    ofDrawEllipse(mouseX, mouseY + 20, rand() % 50, rand() % 50);
    drawhair(hair.r, hair.g, hair.b);

    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'h'){
        headWidth = 350;

    }
    if (key == 'e'){
        eyeSize += 10;
        
    }
    
}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'h'){
        headWidth = 250;

    }}

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

void ofApp::drawhair(int r,int g,int b){
        ofSetColor(r, g, b);
    ofEllipse(mouseX, mouseY -120, 100, 100);
}
