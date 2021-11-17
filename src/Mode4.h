#pragma once

#include "FractalMode.h"
// #include <cmath>

class Mode4 : public FractalMode{
        public:
                Mode4(int x, int y, int n);
                void draw();
                void drawHelper(int x, int y, float n);
                

        private:
                int x;
                int y;
                float n;


};