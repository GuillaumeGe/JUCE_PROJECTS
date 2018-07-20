#pragma once
#include "./Utils.h";


class MidVerticalBar:public Slider
{
public:
	MidVerticalBar();
	~MidVerticalBar();
private:
	//MidVerticalBarLook c;
	/*void mouseDrag(const MouseEvent &) override;*/
};

//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

class CustomComponentLook : public LookAndFeel_V4
{
public:
	CustomComponentLook();
	~CustomComponentLook();
	void setFillColour(Colour &c);
	void setOutlineFillCoulour(Colour &c);
	void setBackgroundColour(Colour &c);
	void setThickness(int newValue);
protected:
	float thickness_;
	Colour fillInlineColour_;
	Colour fillOutlineColour_;
	Colour backgroundColour_;
};

class MidVerticalBarLook : public CustomComponentLook
{
public:

	MidVerticalBarLook();
	~MidVerticalBarLook();

	void drawLinearSlider(Graphics& g, int x, int y, int width, int height,
		float sliderPos,
		float minSliderPos,
		float maxSliderPos,
		const Slider::SliderStyle style, Slider& slider) override;
	/*void drawRotarySlider(Graphics& g, int x, int y, int width, int height,
		float sliderPos,
		const float rotaryStartAngle,
		const float rotaryEndAngle,
		Slider& slider) override;*/
};











