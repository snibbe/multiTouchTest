#include "ofApp.h"
/*
Add User to the Input Group: On many Linux systems, including Ubuntu, there is an input group that provides access to input devices. You can add your user to this group to grant them permission to access input devices. Here's how to do it:

bash

sudo usermod -aG input your_username
*/
// ofPoint myMouse;

//--------------------------------------------------------------
void ofApp::setup(){
#ifdef TARGET_LINUX
    multiTouchReader.startMultitouch();
#endif
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);

	for (int i=0; i<MAXTOUCH; i++) {
		if (touchDown_[i]) {
			ofDrawCircle(touchPoints_[i], 20);
		}
	}
    // ofDrawCircle(myMouse,20);
}

//--------------------------------------------------------------
void ofApp::exit() {
#ifdef TARGET_LINUX
    multiTouchReader.stopMultitouch();
#endif
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// int step = 10;  
	// if(key == 'w') myMouse.y = myMouse.y - step;  
	// if(key == 's') myMouse.y = myMouse.y + step;  
	// if(key == 'a') myMouse.x = myMouse.x - step;  
	// if(key == 'd') myMouse.x = myMouse.x + step;  
	if (key =='f') ofToggleFullscreen();
	if (key == 'q') ofExit();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

void ofApp::touchDown(int x, int y, int id)
{
	// Handle touch down event
	touchDown_[id] = true;
	touchPoints_[id] = ofPoint(x, y);
}

void ofApp::touchMoved(int x, int y, int id)
{
	// Handle touch move event
	touchPoints_[id] = ofPoint(x, y);

	// printf("OF touchMoved: %i, %i %i\n", id, x, y);
}

void ofApp::touchUp(int x, int y, int id)
{
	// Handle touch up event
	touchDown_[id] = false;
	touchPoints_[id] = ofPoint(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	// myMouse.x = x;  
	// myMouse.y = y;  
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
