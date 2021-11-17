#include "Mode6.h"

Mode6::Mode6(float x, float y, int n)
{
    this->x = x;
    this->y = y;
    this->n = n;
}

void Mode6::draw()
{
    ofSetColor(128, 0, 128);
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