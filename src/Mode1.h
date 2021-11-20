#pragma once

#include "FractalMode.h"

class Mode1 : public FractalMode{
        public:
                Mode1(int x, int y, int n, vector<ofColor> colors);
                void draw();
                void drawHelper(int x, int y, int n);
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
                int n;



};