#pragma once

#include "FractalMode.h"

class Mode4 : public FractalMode{
        public:
                Mode4(int x, int y, int n, vector<ofColor> colors);
                void draw();
                void drawHelper(int x, int y, float n);
                void setN(int n)
                {
                this->n = n;
                }
                int getN()
                {
                return n;
                }
                

        private:
                int x;
                int y;
                float n;


};