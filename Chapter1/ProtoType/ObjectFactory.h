#pragma once

#include <map>
#include <memory>
#include <string>

#include "Object.h"
#include "Sheep.h"
#include "Wolf.h"

class ObjectFactory
{
private:
	std::map<std::string, Object*> Factories;

public:
	ObjectFactory()
	{
		Factories["Sheep"] = Sheep::Create( 5, 20.f, new std::string("CHOI") );
		Factories["Wolf"] = Wolf::Create(10, 10.f);
	}

	~ObjectFactory()
	{
		delete Factories["Sheep"];
		delete Factories["Wolf"];
	}

	Object* CreateObject(const std::string& Key)
	{
		return Factories[Key]->Clone();
	}
};