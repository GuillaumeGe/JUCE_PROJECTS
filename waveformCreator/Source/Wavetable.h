/*
  ==============================================================================

    Wavetable.h
    Created: 28 Jun 2018 1:37:02pm
    Author:  Guillaume

  ==============================================================================
*/

#pragma once
#include "Utils.h"

class Wavetable
{
public:
	Wavetable(String name = "userWavetable");
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
	Array<float> getRawData();

private:
	String name_;
	Array<float> data_;
};