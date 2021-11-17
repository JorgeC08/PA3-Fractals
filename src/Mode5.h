#pragma once

#include "FractalMode.h"
// #include <cmath>

class Mode5 : public FractalMode{
    public:
        Mode5(float x, float y, int n);
        void draw();
        void drawHelper(float x, float y, int n);
        void setN(int n)
        {
            this->n = n;
        }
        int getN()
        {
            return n;
        }
            

    private:
        float x;
        float y;
        int n;


};