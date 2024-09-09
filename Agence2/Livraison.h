#pragma once
#include "Vaisseau.h"
class Livraison : public Vaisseau
{
public:
	Livraison();
	Livraison(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* faction);
	~Livraison();
};