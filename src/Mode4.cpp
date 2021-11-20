#include "Mode4.h"

Mode4::Mode4(int x, int y, int n, vector<ofColor> colors)
{
    this->x = x;
    this->y = y;
    this->n = n;
    this->colors = colors;
}

void Mode4::draw()
{
    int i = n;
    ofSetColor(colors[i]);
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