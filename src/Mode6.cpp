#include "Mode6.h"

Mode6::Mode6(float x, float y, int n, vector<ofColor> colors)
{
    this->x = x;
    this->y = y;
    this->n = n;
    this->colors = colors;
}

void Mode6::draw()
{
    int i = n;
    ofSetColor(colors[i]);
    drawHelper(x, y, n * 100);
}

void Mode6::drawHelper(float x, float y, int n)
{
   ofDrawCircle(x, y, n);

   if(n > 1)
   {
       drawHelper(x + n / 2, y, n / 2);
       drawHelper(x - n / 2, y, n / 2);
   }
}