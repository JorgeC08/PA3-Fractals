#pragma once

#include "FractalMode.h"
// #include <cmath>

class Mode2 : public FractalMode{
    public:
        Mode2(int length, int n, int x, int y, int d);
        void draw();
        void drawHelper(int length, int n, int x, int y, int d);
            

    private:
        int length;
        int n;
        int x;
        int y;
        int d;


};