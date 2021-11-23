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
    drawHelper(x, y, n, n);
}
void Mode1::drawHelper(int x, int y, int n, int newColor)
{
    if (n != 0)
    {
        ofSetColor(colors[newColor]);
        ofDrawRectangle(x, y, 100, 100);
        drawHelper(x + 100, y, n - 1, newColor + 2);
        drawHelper(x - 100, y, n - 1, newColor + 4);
        drawHelper(x, y + 100, n - 1, newColor + 6);
        drawHelper(x, y - 100, n - 1, newColor + 8);
    }
}