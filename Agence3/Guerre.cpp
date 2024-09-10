#pragma once
#include "Guerre.h"
#include "Vaisseau.h"
Guerre::Guerre() :Vaisseau()
{
}
Guerre::Guerre(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* _faction) :Vaisseau()
{
	niveau = _niveau;
	exp = _exp;
	capacite = _capacite;
	defense = _def;
	attaque = _att;
	vie = _vie;
	faction = _faction;
}
Guerre::~Guerre()
{}
std::string Guerre::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("je suis un vaisseau de Guerre");
	return info;
}