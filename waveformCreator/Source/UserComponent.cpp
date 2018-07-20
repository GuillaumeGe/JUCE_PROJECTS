#include "UserComponent.h"


MidVerticalBar::MidVerticalBar():Slider()
{
	this->setSliderStyle(Slider::SliderStyle::LinearBarVertical);
	this->setTextBoxStyle(NoTextBox, true, 0, 0);
	//this->setLookAndFeel(&this->c);
	this->setRange(Range<double>(-1.0, 1.0), 0.05);
	this->setValue(0, NotificationType::dontSendNotification);
}

MidVerticalBar::~MidVerticalBar()
{

}

//void MidVerticalBar::mouseDrag(const MouseEvent &)
//{
//	MouseCursor * cursor = &getMouseCursor();
//	cursor->WaitCursor;
//	
//}


//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

CustomComponentLook::CustomComponentLook()
{
	this->thickness_ = 0;
	this->fillInlineColour_ = Colours::orangered;
	this->fillOutlineColour_ = Colours::darkgrey;
	this->backgroundColour_ = Colours::transparentWhite;
}

CustomComponentLook::~CustomComponentLook()
{

}

void CustomComponentLook::setFillColour(Colour &c)
{
	this->fillInlineColour_ = c;
}

void CustomComponentLook::setOutlineFillCoulour(Colour &c)
{
	this->fillOutlineColour_ = c;
}

void CustomComponentLook::setThickness(int newValue)
{
	this->thickness_ = newValue;
}

void CustomComponentLook::setBackgroundColour(Colour &c)
{
	this->backgroundColour_ = c;
}

MidVerticalBarLook::MidVerticalBarLook() :CustomComponentLook()
{

}

MidVerticalBarLook::~MidVerticalBarLook()
{

}

void MidVerticalBarLook::drawLinearSlider(Graphics& g, int x, int y, int width, int height,
	float sliderPos,
	float minSliderPos,
	float maxSliderPos,
	const Slider::SliderStyle style, Slider& slider)
{

	const auto trackWidth = width;
	const Point<float> startPoint(slider.isHorizontal() ? x : x + width * 0.5f,
		slider.isHorizontal() ? y + height * 0.5f : height / 2 + y);
	const Point<float> endPoint(slider.isHorizontal() ? width + x : startPoint.x,
		slider.isHorizontal() ? startPoint.y : y);

	/*Path backgroundTrack;
	backgroundTrack.startNewSubPath(startPoint);
	backgroundTrack.lineTo(endPoint);
	g.setColour(this->backgroundColour_);
	g.strokePath(backgroundTrack, PathStrokeType(trackWidth, PathStrokeType::curved, PathStrokeType::square));*/

	
	Point<float> minPoint, maxPoint;

	const float kx = x + width;
	const float ky = sliderPos;
	const auto thumbWidth = trackWidth;
	const auto thumbHeight = 10;

	minPoint = startPoint;
	maxPoint = { kx, ky };


	Path valueTrack;
	//valueTrack.startNewSubPath(Point<float>(minPoint.x - thumbWidth / 2, minPoint.y));
	//valueTrack.lineTo(Point<float>(maxPoint.x - thumbWidth / 2, maxPoint.y + (maxPoint.y > height/2 ? -thumbHeight / 2: thumbHeight / 2)));
	g.setColour(this->fillOutlineColour_);
	//g.strokePath(valueTrack, PathStrokeType(trackWidth, PathStrokeType::curved, PathStrokeType::square));
	g.fillRect(Rectangle<float>(x, maxPoint.y - thumbHeight / 2, thumbWidth, (startPoint.y-maxPoint.y)));
	g.setColour(this->fillInlineColour_);
	g.fillRect(Rectangle<float>(x, maxPoint.y - thumbHeight / 2, thumbWidth, thumbHeight));

		/*const auto isTwoVal = (style == Slider::SliderStyle::TwoValueVertical || style == Slider::SliderStyle::TwoValueHorizontal);
		const auto isThreeVal = (style == Slider::SliderStyle::ThreeValueVertical || style == Slider::SliderStyle::ThreeValueHorizontal);

		const auto trackWidth = width;

		const Point<float> startPoint(slider.isHorizontal() ? x : x + width * 0.5f,
			slider.isHorizontal() ? y + height * 0.5f : height/2 + y);

		const Point<float> endPoint(slider.isHorizontal() ? width + x : startPoint.x,
			slider.isHorizontal() ? startPoint.y : y);

		Path backgroundTrack;
		backgroundTrack.startNewSubPath(startPoint);
		backgroundTrack.lineTo(endPoint);
		g.setColour(slider.findColour(Slider::backgroundColourId));
		g.strokePath(backgroundTrack, PathStrokeType(trackWidth, PathStrokeType::curved, PathStrokeType::rounded));

		Path valueTrack;
		Point<float> minPoint, maxPoint, thumbPoint;

		const auto kx = slider.isHorizontal() ? sliderPos : (x + width * 0.5f);
		const auto ky = slider.isHorizontal() ? (y + height * 0.5f) : sliderPos;

		minPoint = startPoint;
		maxPoint = { kx, ky };


		const auto thumbWidth = trackWidth;

		valueTrack.startNewSubPath(minPoint);
		valueTrack.lineTo(isThreeVal ? thumbPoint : maxPoint);
		g.setColour(this->fillOutlineColour_);
		g.strokePath(valueTrack, PathStrokeType(trackWidth, PathStrokeType::curved, PathStrokeType::rounded));

		g.setColour(this->fillInlineColour_);
		g.fillRect(Rectangle<float>(thumbWidth, height/20).withCentre(isThreeVal ? thumbPoint : maxPoint));*/
}


