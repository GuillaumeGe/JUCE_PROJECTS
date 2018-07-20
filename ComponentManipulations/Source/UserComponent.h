/*
  ==============================================================================

    UserComponent.h
    Created: 13 Jul 2018 9:34:49pm
    Author:  Guillaume

  ==============================================================================
*/
#include "../JuceLibraryCode/JuceHeader.h"
#pragma once
class Markup :public Component
{
private:
	Point<float> coord;
	float trackPosition;

public:
	

	Markup(float xPosition, float yPosition,float trackPositionInSecond, bool fillIn = true):Component("MarkupAnchor")
	{
		
	}
	Markup()
	{

	}
	~Markup()
	{

	}
	void setTrackPosition(float positionInSecond)
	{
		trackPosition = positionInSecond;
		this->repaint();
	}
	void paint(Graphics &g)override
	{

	}
	void mouseDown(const MouseEvent &event)override
	{

	}

	void mouseDrag(const MouseEvent &event)override
	{

	}
};

class Anchor :public Component
{
public:
	enum AnchorType { Markup, Point, HollowPoint,Cursor};
	Anchor()
	{
		//Anchor::Anchor(0, 0, 50, 50, AnchorType::Point, true);
		this->fill = true;
		this->type = AnchorType::Point;
		this->setBounds(0,0,20,20);
		lookColour = Colours::white;

	}
	Anchor(float x, float y, float width, float height, AnchorType type, bool fill = true):Component("Anchor")
	{
		this->fill = fill;
		this->type = type;
		this->setBounds(x, y, width, height);
		lookColour = Colours::white;
		std::cout << "Anchor created at " << x << ";" << y << std::endl;
	}
	~Anchor()
	{

	}
	void paint(Graphics &g)override
	{
		//g.setColour(Colours::yellow);
		//g.fillRect(this->getScreenBounds());
		
		//g.setColour(Colours::blue);
		//g.fillRect(this->getBounds());
		
		Path triangle;
		juce::Point<float> leftEdge(this->getBounds().getX(), this->getBounds().getY() + 3* this->getBounds().getHeight() / 4);
		juce::Point<float> rightEdge(this->getBounds().getX() + this->getBounds().getWidth(), this->getBounds().getY() + 3 * this->getBounds().getHeight() / 4);
		juce::Point<float> bottomEdge(this->getBounds().getCentre().x, this->getBounds().getY() + this->getBounds().getHeight());
		triangle.addTriangle(leftEdge, rightEdge, bottomEdge);

		switch (type)
		{
		case Markup:

			if (fill)
			{
				g.setColour(lookColour);
				g.fillPath(triangle);
				g.fillRect(this->getPosition().x, this->getPosition().y, this->getWidth(), 3 * this->getHeight() / 4);
			}
			else
			{
				//g.strokePath(tri,PathStrokeType::curved,)
				//g.drawRect(leftEdge.x, leftEdge.y - 3 * h / 4, w, 3 * h / 4, 2);
			}
			break;
		case Point:
			float ratio = 0.15f;
			float colorReducer = 0.2; 
			
			Rectangle<float> reducedArea = this->getBounds().toFloat().reduced(ratio*this->getBounds().getWidth()).toFloat();
			if (fill)
			{
				g.setColour(lookColour);
				g.fillEllipse(this->getBounds().toFloat());
				Colour altC = lookColour.darker(colorReducer);
				g.setColour(altC);
				g.fillEllipse(reducedArea);
			}
			else
			{
				g.setColour(lookColour);
				g.drawEllipse(this->getBounds().toFloat(),2);
				Colour altC = lookColour.darker(colorReducer);
				g.setColour(altC);
				g.drawEllipse(reducedArea,2);
			}
			break;

		}
	}
	void setType(AnchorType type)
	{
		this->type = type;
	}
	AnchorType getType() { return type; }

	void setInFill(bool fill)
	{
		this->fill = fill;
	}
	void setPosition(juce::Point<float> centerPosition)
	{

		Rectangle<int> initR = this->getBounds();
		this->setBounds(centerPosition.x-initR.getWidth()/2,
			centerPosition.y-initR.getHeight()/2,
			initR.getWidth(),
			initR.getHeight());
		this->toFront(false);
		this->getParentComponent()->repaint();
		//this->repaint();
	}
	void mouseDown(const MouseEvent &event)override
	{
		std::cout << "Down at "<< event.getPosition().x << ";" << event.getPosition().y << std::endl;
	}

	void mouseDrag(const MouseEvent &event)override
	{
		Rectangle<int> initR = this->getBounds();
		this->setPosition(juce::Point<float>(initR.getX() + event.getPosition().x, initR.getY() + event.getPosition().y));
		std::cout << "mouse at : " << event.getPosition().x << ";" << event.getPosition().y << std::endl;
		//std::cout << "mouse at : " << getMouseXYRelative().x << ";" << getMouseXYRelative().y << std::endl;
		std::cout << initR.getX() << ";" << initR.getY() << std::endl;
		//this->setPosition(juce::Point<float>(event.getPosition().x, event.getPosition().y));
	}

	void setOpacity(float alpha)
	{
		lookColour = lookColour.withAlpha(alpha);
	}

	void setColour(Colour c)
	{
		lookColour = c;
	}

	Colour getColour() { return lookColour; }

private:
	//juce::Point<float> center;
	bool fill;
	bool isFocusable;
	AnchorType type;
	Colour lookColour;
	MouseListener mL;
};