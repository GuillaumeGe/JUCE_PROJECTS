/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
	Anchor<float> a;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

template <typename ValueType>
class Anchor : public Component, public Point<ValueType>
{
public:
	enum AnchorType {Delimiter,CurveModifier};

	Anchor(ValueType initialX, ValueType initialY,AnchorType type) :Point(initialX, initialY), Component()
	{
		this->type = type;
		this->radius = 20;
		focus = false;
	}
	Anchor(Point & other, AnchorType type) :Point(other),Component()
	{
		this->type = type;
		this->radius = 20;
		focus = false;
	}
	~Anchor()
	{

	}

	void draw(Graphics &g)
	{
		g.setColour(Colours::blue);
		g.drawEllipse(this->x, this->y, radius, radius, 2);
		if (focus)
		{
			g.setColour(Colours::white);
			g.fillEllipse(this->x, this->y, 5, 5);
		}
	}
	void setRadius(float value)
	{
		this->radius = value;
	}
	float getRadius(){ return this->radius; }
	void mouseUp(const MouseEvent &event)override
	{
		this->focus = false;
		this->repaint();
	}
	void mouseDrag(const MouseEvent &event)override
	{
		this->focus = true;
		this->setX(event.getMouseDownX() + event.getDistanceFromDragStartX());
		this->setY(event.getMouseDownY() + event.getDistanceFromDragStartY());
		this->repaint();
	}
	void mouseDown(const MouseEvent &event)override
	{
		this->focus = true;
		this->repaint();
	}

private:
	AnchorType type;

	bool focus;
	float radius;
};