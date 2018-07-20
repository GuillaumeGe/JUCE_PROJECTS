/*
  ==============================================================================

    Wavetable.h
    Created: 28 Jun 2018 1:37:02pm
    Author:  Guillaume

  ==============================================================================
*/

#pragma once
#include <vector>
#include <string>
#include "../JuceLibraryCode/JuceHeader.h"

class Wavetable
{
public:
	Wavetable(String name = "userWavetable", int sampleNumber = 0);
	Wavetable(Wavetable & c);
	~Wavetable();
	bool exportToFile();
	void assign(Array<float>& rawData);
	void addSample(float value);
	void deleteLastSample();
	bool importFromFile(File& file);
	int getSampleNumber();
	void setSampleNumber(int newLength);
	String getName();
	void setName(String newName);
	Array<float>* getRawDataPointer();
private:
	String name_;
	Array<float> data_;
};