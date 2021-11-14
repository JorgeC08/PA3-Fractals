#include "Mode1.h"

Mode1::Mode1(int x_pos, int y_pos, int n) : FractalMode(x_pos, y_pos, n)
{

}

void Mode1::drawMode1(int x, int y, int n)
{
    if (n != 0)
    {
        // ofDrawRectangle(x, y, 100, 100);
        drawMode1(x + 100, y, n - 1);
        drawMode1(x - 100, y, n - 1);
        drawMode1(x, y + 100, n - 1);
        drawMode1(x, y - 100, n - 1);
    }
}