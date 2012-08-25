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

using namespace ci;
using namespace ci::app;
using namespace std;

class homeWork1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void homeWork1App::setup()
{
}

void homeWork1App::mouseDown( MouseEvent event )
{
}

void homeWork1App::update()
{
}

void homeWork1App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( homeWork1App, RendererGl )
