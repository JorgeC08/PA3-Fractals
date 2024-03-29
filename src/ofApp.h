#pragma once
#include<cmath>

#include "ofMain.h"
#include "FractalMode.h"
#include "Mode1.h"
#include "Mode2.h"
#include "Mode3.h"
#include "Mode4.h"
#include "Mode5.h"
#include "Mode6.h"
#include "Mode7.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void drawMode1(int x, int y, int n);
		void drawMode2(int length, int n, int x, int y, int d);
		void drawMode3(float x, float y, float size, int n);
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	private:

		vector<FractalMode*> Fractals;
		Mode1 *mode1;
		Mode2 *mode2;
		Mode3 *mode3;
		Mode4 *mode4;
		Mode5 *mode5;
		Mode6 *mode6;
		Mode7 *mode7;
		
		vector<ofColor> colors;

		int var = 1;

		// Background music

		ofSoundPlayer backgrounfTheme;

		// Animation
		int count = 0;
		bool animation = false;
		bool restAnim = false;
		bool sumAnim = false;
	
};
