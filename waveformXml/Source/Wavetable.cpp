/*
  ==============================================================================

    Wavetable.cpp
    Created: 28 Jun 2018 1:37:02pm
    Author:  Guillaume

  ==============================================================================
*/

#include "Wavetable.h"



Wavetable::Wavetable(String name, int sampleNumber)
{
	this->name_ = name;
	this->data_ = Array<float>(sampleNumber);
	this->data_.fill(0.0f);
}

Wavetable::Wavetable(Wavetable & c)
{
	this->name_ = c.name_;
	this->data_ = c.data_;
}

Wavetable::~Wavetable()
{

}

bool Wavetable::exportToFile()
{
	XmlElement xmlDoc("Wavetable");
	XmlElement tagName("Name");
	XmlElement tagNumber("nSample");
	XmlElement tagData("Data");

	tagName.addTextElement(this->name_);
	tagNumber.addTextElement(String(std::to_string(this->data_.size())));
	int val = this->data_.size();
	for (int i = 0; i < data_.size(); i++)
	{
		XmlElement tagValue("Value");
		tagValue.setAttribute(Identifier("id"), i);
		String valueTmp = String(std::to_string(this->data_[i]));
		tagValue.addTextElement(valueTmp);
		tagData.addChildElement(&tagValue);
	}
	xmlDoc.addChildElement(&tagName);
	xmlDoc.addChildElement(&tagNumber);
	xmlDoc.addChildElement(&tagData);
	String x = xmlDoc.getAllSubText();

	xmlDoc.createTextElement("test");
	xmlDoc.createDocument(String());
	
	return 1;
}

bool Wavetable::importFromFile(File& file)
{
	std::unique_ptr<XmlElement> xml (XmlDocument::parse(file));
	name_ = xml->getChildByName("Name")->getAllSubText();

	if (xml != nullptr)
	{
		Array<float> tmp(0);
		tmp.clear();
		this->data_.clear();
		XmlElement * rd = xml->getChildByName("Data");
		for (int i = 0; i < rd->getNumChildElements(); i++)
		{
			String t = rd->getChildByAttribute(StringRef("id"), StringRef(String(std::to_string(i))))->getAllSubText();
			tmp.add(strtof(t.toStdString().c_str(), 0));
		}
		this->data_ = tmp;
		return 1;
	}
	else
	{
		return 0;
	}
}

void Wavetable::assign(Array<float> & rawData)
{
	this->data_ = rawData;
}

void Wavetable::setName(String newName)
{
	this->name_ = newName;
}

int Wavetable::getSampleNumber()
{
	return this->data_.size();
}

void Wavetable::addSample(float value)
//Value have to be between -1.0 and 1.0
{
	if(value >= -1.0 && value <= 1.0)
		this->data_.add(value);
}

String Wavetable::getName()
{
	return this->name_;
}

void Wavetable::setSampleNumber(int newLength)
{
	this->data_.resize(newLength);
}

Array<float>* Wavetable::getRawDataPointer()
{
	return &this->data_;
}

void Wavetable::deleteLastSample()
{

}