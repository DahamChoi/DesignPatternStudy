#pragma once

#include "Object.h"

#include <iostream>

class Sheep : public Object
{
private:
	int WoolColor;
	float TailLength;
	std::string* Name;		//	포인터를 사용하는 객체라고 가정

public:
	static Sheep* Create(int WoolColor, float TailLength, std::string* Name)
	{
		return new Sheep(WoolColor, TailLength, Name);
	}

	virtual ~Sheep() override 
	{
		delete Name;
	}
	
	virtual void Behavior() override
	{
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "This is Sheep" << std::endl;
		std::cout << "Sheep Name Is " << *Name << std::endl;
		std::cout << "Sheep WoolColor Is " << WoolColor << std::endl;
		std::cout << "Sheep TailLength Is " << TailLength << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;
	}

	virtual Sheep* Clone() const
	{
		return Sheep::Create(WoolColor, TailLength, Name);
	}

	Sheep* SetColor(int WoolColor)
	{
		this->WoolColor = WoolColor;
		return this;
	}

	Sheep* SetTailLength(float TailLength)
	{
		this->TailLength = TailLength;
		return this;
	}

	Sheep* SetName(std::string* Name)
	{
		this->Name = Name;
		return this;
	}

protected:
	Sheep(int WoolColor, float TailLength, std::string* Name)
	{
		this->WoolColor = WoolColor;
		this->TailLength = TailLength;
		this->Name = new std::string(*Name);
	}
};