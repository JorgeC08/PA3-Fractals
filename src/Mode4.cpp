#include "Mode4.h"

Mode4::Mode4(int x, int y, int n)
{
    this->x = x;
    this->y = y;
    this->n = n;
}

void Mode4::draw()
{
    drawHelper(x, y, n);
}
void Mode4::drawHelper(int x, int y, float n)
{
    ofDrawEllipse(x, y, n, n);

    if (n > 1)
    {
        ofSetColor(0, 128, 128);
        drawHelper(x, y, n * 0.75);
    }
}