#pragma once

class FractalMode{
	public:
		FractalMode(int x_pos, int y_pos, int n);
		void drawMode1(int x, int y, int n);
		void drawMode2(int length, int n, int x, int y, int d);
		void drawMode3(float x, float y, float size, int n);
		// void keyPressed(int key);
		// void keyReleased(int key);
		// void mouseMoved(int x, int y);
		// void mouseDragged(int x, int y, int button);
		// void mousePressed(int x, int y, int button);
		// void mouseReleased(int x, int y, int button);
	private:
        int x_pos;
        int y_pos;
        int n;


};
