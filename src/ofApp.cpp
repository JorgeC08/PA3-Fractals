#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundColor(0, 0, 0);
    Mode1* mod1 = new Mode1(ofGetWidth() / 2, ofGetHeight() / 2, var);
    Mode2* mod2 = new Mode2(200, var, ofGetWidth() / 2, ofGetHeight() - 50, 30);
    Mode2* mod2smallelft = new Mode2(100, var, ofGetWidth() / 3.99, ofGetHeight() - 50, 30);
    Mode2* mod2small1right = new Mode2(100, var, ofGetWidth() / 1.32, ofGetHeight() - 50, 30);
    Mode3* mod3 = new Mode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, var);

    Fractals.push_back(mod1);
    Fractals.push_back(mod2);
    Fractals.push_back(mod2smallelft);
    Fractals.push_back(mod2small1right);
    Fractals.push_back(mod3);
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    // ofSetBackgroundColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if (mode1)
    {
        ofSetColor(0, 128, 128);
        drawMode1(ofGetWidth() / 2, ofGetHeight() / 2, var);
        if(increase){
            var++;
            increase = false;
        }
        if(decrease){
            var -= 1;
            decrease = false;
            if(var < 0){
                var = 0;
            }
        }
    }
    if (mode2)
    {
        ofSetColor(220, 20, 60);
        drawMode2(200, var, ofGetWidth() / 2, ofGetHeight() - 50, 30);
        drawMode2(100, var, ofGetWidth() / 3.99, ofGetHeight() - 50, 30);
        drawMode2(100, var, ofGetWidth() / 1.32, ofGetHeight() - 50, 30);
        if(increase){
            var++;
            increase = false;
        }
        if(decrease){
            var -= 1;
            decrease = false;
            if(var < 0){
                var = 0;
            }
        }
    }
    if (mode3)
    {
        ofSetColor(128, 0, 128);
        drawMode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, var);
        if(increase){
            var++;
            increase = false;
        }
        if(decrease){
            var -= 1;
            decrease = false;
            if(var < 0){
                var = 0;
            }
        }
    }
}
void ofApp::drawMode1(int x, int y, int n)
{
    if (n != 0)
    {
        ofDrawRectangle(x, y, 100, 100);
        drawMode1(x + 100, y, n - 1);
        drawMode1(x - 100, y, n - 1);
        drawMode1(x, y + 100, n - 1);
        drawMode1(x, y - 100, n - 1);
    }
}
void ofApp::drawMode2(int length, int n, int x, int y, int d)
{
    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX , leftBranchY);


        drawMode2(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawMode2(length / 2, n - 1, middleX, middleY, 30);
        drawMode2(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}

void ofApp::drawMode3(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawMode3(x, y, size / 2, n - 1);
    drawMode3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawMode3((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        mode1 = !mode1;
        Fractals[0]->setActivate(true);
        break;
    case '2':
        mode2 = !mode2;
        break;
    case '3':
        mode3 = !mode3;
        break;
    case '4':
        mode1 = false;
        mode2 = false;
        mode3 = false;
        break;

    // Para aumentar y disminuir el tamaño
    case '=':
        increase = true;
        break;
    case '-':
        decrease = true;
        break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}