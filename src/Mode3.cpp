#include "Mode3.h"

Mode3::Mode3(float x, float y, float size, int n)
{
    this->x = x;
    this->y = y;
    this->size = size;
    this->n = n;
}

void Mode3::draw(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    draw(x, y, size / 2, n - 1);
    draw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    draw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}