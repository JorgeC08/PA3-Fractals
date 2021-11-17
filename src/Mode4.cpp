#include "Mode4.h"

Mode4::Mode4(int x, int y, int n)
{
    this->x = x;
    this->y = y;
    this->n = n;
}

void Mode4::draw()
{
    ofSetColor(0, 255, 0);
    drawHelper(x, y, n);
}
void Mode4::drawHelper(int x, int y, float n)
{
    ofDrawCircle(x, y, n * 50);

    if (n > 1)
    {
        drawHelper(x, y, n * 0.75);
    }
}