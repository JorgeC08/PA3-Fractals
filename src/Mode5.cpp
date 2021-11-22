#include "Mode5.h"

Mode5::Mode5(float x, float y, int n, vector<ofColor> colors)
{
    this->x = x;
    this->y = y;
    this->n = n;
    this->colors = colors;
}

void Mode5::draw()
{
    drawHelper(x, y, n);
}

void Mode5::drawHelper(float x, float y, int n)
{    
    int i = n;
    ofSetColor(colors[i]);
    ofDrawCircle(x, y, n * 10);

   if(n > 1)
   {
       drawHelper(x + n / 2, y, n / 2);
       drawHelper(x - n / 2, y, n / 2);
   }
}