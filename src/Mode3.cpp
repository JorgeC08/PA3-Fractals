#include "Mode3.h"

Mode3::Mode3(float x, float y, float size, int n, vector<ofColor> colors)
{
    this->x = x;
    this->y = y;
    this->size = size;
    this->n = n;
    this->colors = colors;
}

void Mode3::draw()
{
    int i = n;
    ofSetColor(colors[i]);
    drawHelper(x, y, size, n);
}

void Mode3::drawHelper(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawHelper(x, y, size / 2, n - 1);
    drawHelper((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawHelper((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}