#pragma once

#include "ofMain.h"
struct hairColour {
    int r;
    int g;
    int b;
    
};
class ofApp : public ofBaseApp{

	public:
        int age;
        string position;
        string hairColour;
        string preferredFoot;
        float shoeSize;
        bool injured;
        int headWidth;
        int headLength;
        int eyeSize;


        struct hairColour hair;
    
		void setup();
		void update();
		void draw();
        void drawhair(int r, int g, int b);

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
		
};
