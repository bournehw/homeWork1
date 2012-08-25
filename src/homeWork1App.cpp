/**
* @file homeWork1.cpp
* A simple app to display a cat picture using Cinder.
* @author Harrison Bourne
* @date 8-25-2012
* @course CSE 274
* @assignment Homework 1 phase 0
**/

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/Rand.h"
#include "Resources.h"
#include <cmath>

using namespace ci;
using namespace ci::app;
using namespace std;

class homeWork1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

	private:
	float red_;
	float green_;
	float blue_;
	float fadeRed_;
	float fadeGreen_;
	float fadeBlue_;
	int frameCount_;
};


void homeWork1App::setup()
{
	red_ = 0;
	green_ = 0;
	blue_ = 0;
	fadeRed_ = 0;
	fadeGreen_ = 0;
	fadeBlue_ = 0;
	frameCount_ = 0;
}

void homeWork1App::mouseDown( MouseEvent event )
{
}

void homeWork1App::update()
{	if(frameCount_%200==0||frameCount_==0){
		red_ = Rand::randFloat( 1.0f );
		//green_ = Rand::randFloat( 1.0f );
		//blue_ = Rand::randFloat( 1.0f );
	}
	if(frameCount_%400==0||frameCount_==0){
		green_ = Rand::randFloat( 1.0f );
	}
	if(frameCount_%600==0||frameCount_==0){
		blue_ = Rand::randFloat( 1.0f );
	}

	if(abs(red_-fadeRed_)>.005){
		fadeRed_ += .005f*((red_-fadeRed_)/abs(red_-fadeRed_));
	}
	if(abs(green_-fadeGreen_)>.005){
		fadeGreen_ += .005f*((green_-fadeGreen_)/abs(green_-fadeGreen_));
	}
	if(abs(blue_-fadeBlue_)>.005){
		fadeBlue_ += .005f*((blue_-fadeBlue_)/abs(blue_-fadeBlue_));
	}

	frameCount_++;
}

void homeWork1App::draw()
{

	gl::clear( Color( fadeRed_, fadeGreen_, fadeBlue_) ); 

}

CINDER_APP_BASIC( homeWork1App, RendererGl )
