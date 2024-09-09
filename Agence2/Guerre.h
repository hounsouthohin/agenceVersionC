#pragma once
#include "Vaisseau.h"
class Guerre : public Vaisseau
{
public:
	Guerre();
	Guerre(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* faction);
	~Guerre();

	std::string to_string() override;
};