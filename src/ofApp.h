#pragma once

#include "ofMain.h"
#include "MultitouchReader.h"

#define MAXTOUCH 10

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void touchDown(int x, int y, int id) override;
		void touchUp(int x, int y, int id) override;
		void touchMoved(int x, int y, int id) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
	
	private:
		ofPoint touchPoints_[MAXTOUCH];
		bool touchDown_[MAXTOUCH];
#ifdef TARGET_LINUX
		MultitouchReader multiTouchReader;
#endif
};
