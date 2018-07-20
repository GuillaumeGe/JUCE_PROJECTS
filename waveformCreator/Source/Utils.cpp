/*
  ==============================================================================

    Utils.cpp
    Created: 10 Jun 2018 8:01:33pm
    Author:  Guillaume

  ==============================================================================
*/

#include "Utils.h";

float sine(float x, float frequency, float phase)
{
	//x value must be between 0 and 2pi or more
	//frequency between 10Hz & 20 000Hz
	//phase value between -2pi and 2pi
	return sin((x + phase)*frequency);
}

float sawtooth(float x, float frequency, float phase, int accuracy)
{
	float value = 0;
	for (int i = 1; i<accuracy + 1; i++)
	{
		value += (2 / i)*sin(i*(x + phase)*frequency);
	}
	return value;
}

float square(float x, float frequency, float phase, int accuracy)
{
	float value = 0;
	for (int i = 1; i<accuracy + 1; i += 2)
	{
		value += (1 / i)*sin(i*(x + phase)*frequency);
	}
	return value;
}

GUI_Component::GUI_Component()
{
	color = Colours::white;
	backgroundColor = Colours::black;
}

GUI_Component::GUI_Component(Colour &color, Colour &backgroundColor)
{
	this->color = color;
	this->backgroundColor = backgroundColor;
}

Panel::Panel(DrawableRectangle & r)::DrawableRectangle(r)
{
	
}



FirstDegreeFunction::FirstDegreeFunction(float slope, float p)
{
	this->m = slope;
	this->p = p;
	this->name = "f";
}

FirstDegreeFunction::FirstDegreeFunction(Point<float> &A, Point<float> &B)
{
	FirstDegreeFunction((B.y - A.y) / (B.x - A.x), A.y - (this->m*A.x));
	//this->m = (B.y - A.y) / (B.x - A.x);
	//this->p = A.y - (this->m*A.x);
	//this->name = "f";
}
FirstDegreeFunction::FirstDegreeFunction(Segment &S)
{
	FirstDegreeFunction(S.getP1(), S.getP2());
	/*this->m = (S.getP2()->y - S.getP1()->y) / (S.getP2()->x - S.getP1()->x);
	this->p = S.getP1()->y - (this->m*S.getP1()->x);
	this->name = "f";*/
}
FirstDegreeFunction::~FirstDegreeFunction() {}
float FirstDegreeFunction::operator()(float x) { return this->m * x + this->p; }
void FirstDegreeFunction::setSlope(float value) { this->m = value; }
void FirstDegreeFunction::setYaxisCut(float value) { this->p = value; }
void FirstDegreeFunction::setName(String newName) { this->name = newName; }
float FirstDegreeFunction::getSlope() { return this->m; }
float FirstDegreeFunction::getYaxisCut() { return this->p; }
Point<float>*  FirstDegreeFunction::intersect(FirstDegreeFunction &g)
//Returns the point of intersection 
//If there's no intersect then returns nullptr
{
	if (this->m - g.m != 0)
	{
		//this = f(x) -- g = g(x)
		//CE mf-mg != 0
		float x = (g.p - this->p) / (this->m - g.m);
		float y = g(x);
		return &Point<float> (x, y);
	}
	else
	{
		return nullptr;
	}
	
}
bool FirstDegreeFunction::isPerpendicularTo(FirstDegreeFunction & g)
{
	if (this->m * g.m == -1) { return true; }
	else { return false; }
}
bool FirstDegreeFunction::contains(Point<float> &p)
//Returns true if the given Point belongs to the function
{
	if (p.y == FirstDegreeFunction::operator()(p.x))
		return true;
	else
		return false;
}
String FirstDegreeFunction::getCanonEquation(bool showName)
{
	String result;
	if (showName && name != "")
	{
		result = this->name + "(x) = ";
	}
	result += StringRef(std::to_string(this->m) + "x + " + std::to_string(this->p));
	return result;
}
FirstDegreeFunction* FirstDegreeFunction::getPerpendicularFromPoint(Point<float> &P)
{
	float m2 = -1 / this->m;
	float p2 = P.y - (m2*P.x);
	FirstDegreeFunction alt(m2, p2);
	alt.setName(this->name + "'");
	return &alt;
}

Segment::Segment(Point<float> &A, Point<float> &B)
{
	this->A = A;
	this->B = B;
}
Segment::~Segment() {}
float Segment::getLength()
{
	return sqrt(pow((this->B.x - this->A.x), 2) + pow((this->B.y - this->A.y), 2));
}
Point<float>* Segment::getP1()
{
	return &A;
}
Point<float>* Segment::getP2()
{
	return &B;
}

Point<float>* Segment::getMiddlePoint()
{
	Point<float> C((this->A.x + this->B.x) / 2, (this->A.y + this->B.y) / 2);
	return &C;
}