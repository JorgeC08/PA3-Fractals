#include "Mode1.h"

Mode1::Mode1(int x, int y, int n, vector<ofColor> colors)
{
    this->x = x;
    this->y = y;
    this->n = n;
    this->colors = colors;
}

void Mode1::draw()
{
    int i = n;
    ofSetColor(colors[i]);
    drawHelper(x, y, n);
}
void Mode1::drawHelper(int x, int y, int n)
{
    if (n != 0)
    {
        ofDrawRectangle(x, y, 100, 100);
        drawHelper(x + 100, y, n - 1);
        drawHelper(x - 100, y, n - 1);
        drawHelper(x, y + 100, n - 1);
        drawHelper(x, y - 100, n - 1);
    }
}