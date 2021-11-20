#pragma once

#include "FractalMode.h"

class Mode7 : public FractalMode{
    public:
        Mode7(float x, float y, int n, vector<ofColor> colors);
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