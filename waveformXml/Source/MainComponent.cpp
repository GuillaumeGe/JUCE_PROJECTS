/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include <string>  

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
	nSample = 10;

	debugText = "";
	w = Wavetable("testform", 50);
	Random r(64);

	//Array<float> a(nSample);
	//a.fill(1);
	

	for (int i = 0; i < nSample; i++)
	{
		w.getRawDataPointer()->set(i,50);
	}
	w.getRawDataPointer()->set(nSample-1, 55.0f);
	if(w.exportToFile())
		debugText = "exported";
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText (debugText, getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
