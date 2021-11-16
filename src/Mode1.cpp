#include "Mode1.h"

Mode1::Mode1(int x, int y, int n)
{
    this->x = x;
    this->y = y;
    this->n = n;
}

void Mode1::draw(int x, int y, int n)
{
    if (n != 0)
    {
        ofSetColor(0, 128, 128);
        ofDrawRectangle(x, y, 100, 100);
        draw(x + 100, y, n - 1);
        draw(x - 100, y, n - 1);
        draw(x, y + 100, n - 1);
        draw(x, y - 100, n - 1);
    }
}