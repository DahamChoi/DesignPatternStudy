#pragma once

#include "Object.h"

#include <iostream>

class Wolf : public Object
{
private:
	int Inteligence;
	float Agressiveness;

public:
	static Wolf* Create(int Inteligence, float Agressiveness)
	{
		return new Wolf(Inteligence, Agressiveness);
	}

	virtual ~Wolf() override {}

	virtual void Behavior() override
	{
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "This is Wolf" << std::endl;
		std::cout << "Wolf Inteligence Is " << Inteligence << std::endl;
		std::cout << "Wolf Agressiveness Is " << Agressiveness << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;
	}

	virtual Wolf* Clone() const
	{
		return Wolf::Create(Inteligence, Agressiveness);
	}

	Wolf* SetInteligence(int Inteligence)
	{
		this->Inteligence = Inteligence;
		return this;
	}

	Wolf* SetAgressiveness(float Agressiveness)
	{
		this->Agressiveness = Agressiveness;
		return this;
	}

protected:
	Wolf(int Inteligence, float Agressiveness)
	{
		this->Inteligence = Inteligence;
		this->Agressiveness = Agressiveness;
	}
};