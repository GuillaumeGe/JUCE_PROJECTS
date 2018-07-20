/*
  ==============================================================================

    WavetableEditor.cpp
    Created: 28 Jun 2018 9:19:42pm
    Author:  Guillaume

  ==============================================================================
*/

#include "WavetableEditor.h"

WavetableEditor::WavetableEditor(Wavetable & w, int width, int height)
{
	this->setSize(width, height);
	nSample_ = 128;
	wavetable_ = 
	sliderArray_ = std::vector<MidVerticalBar>(this->nSample_);
}