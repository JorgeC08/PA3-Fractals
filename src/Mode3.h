#pragma once

#include "FractalMode.h"
// #include <cmath>

class Mode3 : public FractalMode{
    public:
        Mode3(float x, float y, float size, int n);
        void draw(float x, float y, float size, int n);
            

    private:
        float x;
        float y;
        float size;
        int n;


};