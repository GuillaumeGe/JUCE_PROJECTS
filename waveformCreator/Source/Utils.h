/*
  ==============================================================================

    Utils.h
    Created: 10 Jun 2018 8:01:33pm
    Author:  Guillaume

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h";
#include <vector>;
#include <string>;


template<typename T> T map(T value, T maxOrigin, T maxTarget);
float sine(float x, float frequency, float phase);
float sawtooth(float x, float frequency, float phase, int accuracy = 64);
float square(float x, float frequency, float phase, int accuracy = 64);

template<typename T> T map(T value, T maxOrigin, T maxTarget)
{
	return value / maxOrigin * maxTarget;
}

class FirstDegreeFunction
{
public:
	FirstDegreeFunction(float slope, float p);
	FirstDegreeFunction(Point<float> &A, Point<float> &B);
	FirstDegreeFunction(Segment &S);
	~FirstDegreeFunction();
	float operator()(float x);
	void setSlope(float value);
	void setYaxisCut(float value);
	void setName(String newName);
	float getSlope();
	float getYaxisCut();
	String getCanonEquation(bool showName = false);
	Point<float>* intersect(FirstDegreeFunction & g);
	bool isPerpendicularTo(FirstDegreeFunction & g);
	bool contains(Point<float> &p);
	FirstDegreeFunction* getPerpendicularFromPoint(Point<float> &P);
private:
	float m;
	float p;
	String name;
};

class SecondDegreeFunction
{

};

class Segment
{
public:
	Segment(Point<float> &A, Point<float> &B);
	~Segment();
	float getLength();
	Point<float>* getP1();
	Point<float>* getP2();
	Point<float>* getMiddlePoint();
private:
	Point<float> A;
	Point<float> B;
};

class GUI_Component
{
public:
	GUI_Component();
	GUI_Component(Colour &color, Colour &backgroundColor);
	Colour getBackgroundColor();
	Colour getColor();
	void setColor(Colour &newColor);
	void setBackgroundColor(Colour &newColor);

	int borderSize;
	Colour borderColor;
	int borderRadius;
	Font font;
	Colour backgroundColor;
	Colour color;
	
protected:

};

class Panel : public DrawableRectangle, public GUI_Component
{
public:
	Panel();
	Panel(DrawableRectangle &r);


};

