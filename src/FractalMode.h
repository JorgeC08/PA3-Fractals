#pragma once

#include "ofMain.h"
class FractalMode{
	public:
		virtual void draw() = 0;

		void setActivate(bool activate)
		{
			this->activate = activate;
		}
		bool getActivate()
		{
			return this->activate;
		}
		vector<ofColor> colors;

	protected:
		bool activate = false;


};
