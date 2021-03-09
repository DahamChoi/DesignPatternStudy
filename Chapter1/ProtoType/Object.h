#pragma once

#include <string>

class Object
{
public:
	virtual ~Object() {};
	virtual void Behavior() = 0;
	virtual Object* Clone() const = 0;
};