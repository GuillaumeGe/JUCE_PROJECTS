/*
  ==============================================================================

    UserComponent.h
    Created: 25 Jun 2018 7:46:16pm
    Author:  Guillaume

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"

class MidVerticalBar :public Slider
{
public:
	class CSLook : public LookAndFeel_V4 {
	public:
		void drawLinearSlider(Graphics &, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle, Slider &);
	private:
	};
private:
	CSLook customStyle_;
};



