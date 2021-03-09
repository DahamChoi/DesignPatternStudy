#include <iostream>

#include "ObjectFactory.h"
#include "World.h"

int main()
{
    ObjectFactory Factory;
    World MyWorld;

    MyWorld.SpawnObjectInWorld(
        static_cast<Sheep*>(Factory.CreateObject("Sheep"))->SetName(new std::string("HOYAHO")));
    MyWorld.SpawnObjectInWorld(
        static_cast<Sheep*>(Factory.CreateObject("Sheep"))->SetColor(10)->SetTailLength(40.f));
    MyWorld.SpawnObjectInWorld(
        static_cast<Sheep*>(Factory.CreateObject("Sheep")));

    MyWorld.SpawnObjectInWorld(
        static_cast<Wolf*>(Factory.CreateObject("Wolf"))->SetAgressiveness(124.f));
    MyWorld.SpawnObjectInWorld(
        static_cast<Wolf*>(Factory.CreateObject("Wolf"))->SetInteligence(40));
    MyWorld.SpawnObjectInWorld(
        static_cast<Wolf*>(Factory.CreateObject("Wolf")));

    MyWorld.AllObjectsBehavior();
}