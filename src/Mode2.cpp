#include "Mode2.h"

Mode2::Mode2(int length, int n, int x, int y, int d, vector<ofColor> colors)
{
    this->length = length;
    this->n = n;
    this->x = x;
    this->y = y;
    this->d = d;
    this->colors = colors;
}

void Mode2::draw()
{
    drawHelper(length, n, x, y, d);
    drawHelper(length - 100, n, x + 300, y, d);
    drawHelper(length - 100, n, x - 300, y, d);
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

        ofSetColor(colors[n]);
        ofDrawLine(x, y, x, y - length);
        ofSetColor(colors[n]);
        ofDrawLine(x, y - length, x, y - length*2);
        ofSetColor(colors[n]);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofSetColor(colors[n]);
        ofDrawLine(x, y - length, leftBranchX , leftBranchY);

        drawHelper(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawHelper(length / 2, n - 1, middleX, middleY, 30);
        drawHelper(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}