#include "Mode2.h"

Mode2::Mode2(int length, int n, int x, int y, int d)
{
    this->length = length;
    this->n = n;
    this->x = x;
    this->y = y;
    this->d = d;
}

void Mode2::draw()
{
    drawHelper(length, n, x, y, d);
}

void Mode2::drawHelper(int length, int n, int x, int y, int d)
{
    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX , leftBranchY);


        drawHelper(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawHelper(length / 2, n - 1, middleX, middleY, 30);
        drawHelper(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}