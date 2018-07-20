/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (1200, 600);
	this->setBounds(0, 0, 1200, 600);
	anchorArray = std::vector<Anchor>(50);
	a.setBounds(100, 100, 200, 200);
	a.setColour(Colours::crimson);
	
	//a.setInFill(false);
	b.setBounds(20, 30, 50, 80);
	b.setType(Anchor::AnchorType::Markup);
	//addAndMakeVisible(m);
	addAndMakeVisible(a,0);//graphic problem
	addAndMakeVisible(b);

	for (int i = 0; i < anchorArray.size(); i++)
	{
		anchorArray[i].setBounds(std::rand()%this->getWidth(), std::rand() % this->getHeight(), 30+i, 30+i);
		anchorArray[i].setColour(Colours::hotpink);
		addAndMakeVisible(anchorArray[i]);
		anchorArray[i].setOpacity(0.2f);
	}
	
	a.setOpacity(0.6);
	
	//addChildComponent(a);
}

MainContentComponent::~MainContentComponent()
{

}

void MainContentComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
	//a.paint(g);
	//b.paint(g);

	for (int i = 0; i < anchorArray.size(); i++)
	{
		anchorArray[i].paint(g);
	}
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
