#include "Mode7.h"

Mode7::Mode7(float x, float y, int n)
{
    this->x = x;
    this->y = y;
    this->n = n;
}

void Mode7::draw()
{
    ofSetColor(255, 0, 0);
    drawHelper(x, y, n * 100);
}

void Mode7::drawHelper(float x, float y, int n)
{
    ofDrawCircle(x, y, n);
    if(n >= 10)
    {
        drawHelper(x + n / 2, y, n / 2);
        drawHelper(x - n / 2, y, n / 2);
        drawHelper(x, y + n / 2, n / 2);
        drawHelper(x, y - n / 2, n / 2);
    }
}