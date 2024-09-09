#pragma once
#include "Faction.h"
class FactionRouge : public Faction
{
	//Constructeur et surcharge
public:
	FactionRouge();
	FactionRouge(std::string _nom);
	FactionRouge(std::string _nom, int _capacite, int _attaque, int _defense, int _vie);
	~FactionRouge();
	
};

