#pragma once

#include "ofMain.h"
class FractalMode{
	public:
		virtual void draw(){};

		void setActivate(bool activate)
		{
			this->activate = activate;
		}
		bool getActivate()
		{
			return activate;
		}
		
	protected:
		bool activate;


};
