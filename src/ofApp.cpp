#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    for(int i = 0; i < 15; i++){
        ofColor dif = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
        colors.push_back(dif);
    }
    ofSetBackgroundColor(0, 0, 0);
    mode1 = new Mode1(ofGetWidth() / 2, ofGetHeight() / 2, var, colors);            // Square
    mode2 = new Mode2(200, var, ofGetWidth() / 2, ofGetHeight() - 50, 30, colors);  // Trees
    mode3 = new Mode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, var, colors);        // Sierpinski
    mode4 = new Mode4(ofGetWidth() / 2, ofGetHeight() / 2, var, colors);    
    mode5 = new Mode5(ofGetWidth() / 2, ofGetHeight() / 2, var, colors);
    mode6 = new Mode6(ofGetWidth() / 2, ofGetHeight() / 2, var, colors);
    mode7 = new Mode7(ofGetWidth() / 2, ofGetHeight() / 2, var, colors);

    Fractals.push_back(mode1);
    Fractals.push_back(mode2);
    Fractals.push_back(mode3);
    Fractals.push_back(mode4);
    Fractals.push_back(mode5);
    Fractals.push_back(mode6);
    Fractals.push_back(mode7);
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
    mode5->setN(var);
    mode6->setN(var);
    mode7->setN(var);

    if(animation){
        count++;
        if(var < 5 && !restAnim){
            sumAnim = true;
        }
        if(var == 5){
            sumAnim = false;
            restAnim = true;
        }
        if(var == 0){
            sumAnim = true;
            restAnim = false;
        }
        if((count % 20 == 0) && restAnim){
            var--;
        }
        if((count % 20 == 0) && sumAnim){
            var++;
        }
    }
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
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        mode1->setActivate(!mode1->getActivate());
        break;
    case '2':
        mode2->setActivate(!mode2->getActivate());
        break;
    case '3':
        mode3->setActivate(!mode3->getActivate());
        break;
    case '4':
        mode4->setActivate(!mode4->getActivate());
        break;
    case '5':
        mode5->setActivate(!mode5->getActivate());
        break;
    case '6':
        mode6->setActivate(!mode6->getActivate());
        break;
    case '7':
        mode7->setActivate(!mode7->getActivate());
        break;

    // Para aumentar y disminuir el tamaño
    case '=':
        var += 1;
        break;
    case '-':
        if(var != 0)
        {
            var -= 1;
        }
        break;
    // Para activar y desactivar la animacion
    case ' ':
        animation = true;
        break;
    case 'c':
        animation = false;
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