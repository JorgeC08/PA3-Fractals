#pragma once

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
	private:
		bool activate;


};