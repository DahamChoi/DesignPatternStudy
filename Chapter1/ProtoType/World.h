#pragma once

#include <vector>
#include "Object.h"

class World
{
private:
	std::vector<Object*> WorldObjects;

public:
	~World()
	{
		for (std::vector<Object*>::iterator it = WorldObjects.begin(); it != WorldObjects.end(); it++)
		{
			delete (*it);
		}
	}

	void AllObjectsBehavior()
	{
		for (std::vector<Object*>::iterator it = WorldObjects.begin(); it != WorldObjects.end(); it++)
		{
			(*it)->Behavior();
		}
	}

	void SpawnObjectInWorld(Object* SpawnedObject)
	{
		WorldObjects.push_back(SpawnedObject);
	}
};