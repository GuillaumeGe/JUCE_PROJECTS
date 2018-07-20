/*
  ==============================================================================

    WavetableEditor.h
    Created: 28 Jun 2018 9:19:42pm
    Author:  Guillaume

  ==============================================================================
*/

#include "UserComponent.h"
#include "Wavetable.h"
#pragma once

class WavetableEditor :public Component
{
public :
	WavetableEditor(Wavetable & w, int width, int height);
	~WavetableEditor();

private:
	int nSample_;
	std::vector<MidVerticalBar> sliderArray_;
	Wavetable wavetable_;
};

class WavetableVisualiser :public Component
{
public :
	WavetableVisualiser(Wavetable & w, int width, int height);
	WavetableVisualiser();

private:
	Path shape_;
};