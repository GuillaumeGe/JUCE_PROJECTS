/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "Utils.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
	std::cout << "Initializing" << std::endl;
    setSize (1336, 700);
	nSample = 8;
	s = std::vector<MidVerticalBar>(nSample);
	auto sliderWidth = this->getWidth() / nSample;
	auto sliderHeight = 2 * this->getHeight() / 3;

	for (int i = 0; i < nSample; i++)
	{
		float val = sine(i*(2 * float_Pi) / nSample, 1, -3 * float_Pi / 4);
		currentWaveTable.getRawData().set(i, val);

		std::cout << currentWaveTable.getRawData().indexOf(i) <<std::endl;

		s[i].setValue(val);
		addAndMakeVisible(s[i]);
		
		//s[i].getLookAndFeel().setColour(Slider::trackColourId, c);
		s[i].setBounds(i*sliderWidth, (this->getHeight() / 3)/2, sliderWidth, sliderHeight);
		s[i].setLookAndFeel(new MidVerticalBarLook());
	}
	//currentWaveTable.exportToFile();
}

MainContentComponent::~MainContentComponent()
{

}

void MainContentComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
	
	//for (int i = 0; i < 16; i++)
	//{
	//	u[i]->draw(g);
	//}

	


	/*g.drawRect(0,0,10,10);*/
    /*g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);*/
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	auto sliderWidth = this->getWidth() / nSample;
	for (int i = 0; i < nSample; i++)
	{
		s[i].setBounds(i*sliderWidth, 50, 50, 200);
	}
	

}
