#include "Mode5.h"

Mode5::Mode5(float x, float y, int n)
{
    this->x = x;
    this->y = y;
    this->n = n;
}

void Mode5::draw()
{
    ofSetColor(128, 0, 128);
    drawHelper(x, y, n);
    // drawHelper(x, y, n * 100);
}

void Mode5::drawHelper(float x, float y, int n)
{
   ofDrawCircle(x, y, n * 10);
   //ofDrawCircle(x, y, n);

   if(n > 1)
   {
       drawHelper(x + n / 2, y, n / 2);
       drawHelper(x - n / 2, y, n / 2);
   }
}