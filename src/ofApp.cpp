#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundColor(0, 0, 0);
    mode1 = new Mode1(ofGetWidth() / 2, ofGetHeight() / 2, var);
    mode2 = new Mode2(200, var, ofGetWidth() / 2, ofGetHeight() - 50, 30);
    mode3 = new Mode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, var);
    mode4 = new Mode4(ofGetWidth() / 2, ofGetHeight() / 2, var);

    Fractals.push_back(mode1);
    Fractals.push_back(mode2);
    Fractals.push_back(mode3);
    Fractals.push_back(mode4);
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    // ofSetBackgroundColor(0, 0, 0);]
    mode1->setN(var);
    mode2->setN(var);
    mode3->setN(var);
    mode4->setN(var);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    for(unsigned int i = 0; i < Fractals.size(); i++)
    {
        if(Fractals[i]->getActivate() == true)
        {
            Fractals[i]->draw();
        }
    }
    // if (mode1->getActivate() == true)
    // {
    //     mode1->draw();
        // ofSetColor(0, 128, 128);
        // drawMode1(ofGetWidth() / 2, ofGetHeight() / 2, var);
        // if(increase){
        //     var++;
        //     increase = false;
        // }
        // if(decrease){
        //     var -= 1;
        //     decrease = false;
        //     if(var < 0){
        //         var = 0;
        //     }
        // }
    // }
    // if (mode2)
    // {
    //     ofSetColor(220, 20, 60);
    //     drawMode2(200, var, ofGetWidth() / 2, ofGetHeight() - 50, 30);
    //     drawMode2(100, var, ofGetWidth() / 3.99, ofGetHeight() - 50, 30);
    //     drawMode2(100, var, ofGetWidth() / 1.32, ofGetHeight() - 50, 30);
    //     if(increase){
    //         var++;
    //         increase = false;
    //     }
    //     if(decrease){
    //         var -= 1;
    //         decrease = false;
    //         if(var < 0){
    //             var = 0;
    //         }
    //     }
    // }
    // if (mode3)
    // {
    //     ofSetColor(128, 0, 128);
    //     drawMode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, var);
    //     if(increase){
    //         var++;
    //         increase = false;
    //     }
    //     if(decrease){
    //         var -= 1;
    //         decrease = false;
    //         if(var < 0){
    //             var = 0;
    //         }
    //     }
    // }
// }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        mode1->setActivate(true);
        break;
    case '2':
        mode2->setActivate(true);
        break;
    case '3':
        mode3->setActivate(true);
        break;
    case '4':
        mode4->setActivate(true);
        break;
    case '5':
        mode1->setActivate(false);
        mode2->setActivate(false);
        mode3->setActivate(false);
        mode4->setActivate(false);
        break;

    // Para aumentar y disminuir el tamaño
    case '=':
        // increase = true;
        var += 1;
        break;
    case '-':
        // decrease = true;
        if(var != 0)
        {
            var -= 1;
        }
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