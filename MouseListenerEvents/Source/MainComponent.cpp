/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (700, 500);

	addAndMakeVisible(valueLabel);
	valueLabel.setText("0", dontSendNotification);
	for (int i = 0; i < 16; i++)
	{
		//s[i] = new Slider();
		//s[i]->setRange(0, 100);
		//
		//s[i]->setSliderStyle(Slider::SliderStyle::LinearBarVertical);
		//s[i]->setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox,false,0,0);
		////s[i]->setValue(5, NotificationType::dontSendNotification);
		////s[i]->addListener(this);
		//this->addAndMakeVisible(s[i]);

		//s[i] = new Slider();
		//s[i]->setRange(0, 100);

		s[i].setSliderStyle(Slider::SliderStyle::LinearBarVertical);
		s[i].setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, false, 0, 0);
		s[i].getLookAndFeel().setColour(Slider::ColourIds::trackColourId, Colours::greenyellow);
		s[i].getLookAndFeel().setColour(Slider::ColourIds::backgroundColourId, Colours::green);
		s[i].setRange(-1.0, 1.0);
		s[i].setValue(0);
		//s[i].onValueChange = [this] { valueLabel.setText(->getValue()); };//lamdba function
		//s[i]->setValue(5, NotificationType::dontSendNotification);
		//s[i]->addListener(this);
		this->addAndMakeVisible(s[i]);
		valueLabel.attachToComponent(&s[i], true);
	}


}

MainComponent::~MainComponent()
{

}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
	/*Font mainComponentFont("Times New Roman", 20.0f, Font::bold | Font::italic);



    g.setFont (mainComponentFont);
    g.setColour (Colours::white);
    g.drawText("SYNTHIA!", 20, 40, 200, 40, Justification::centred, true);*/

}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	valueLabel.setBounds(0, 0, 200, 20);
	for (int i = 0; i < 16; i++)
	{
		s[i].setBounds(i * 15, 50, 15, 200);
	}
	
}
