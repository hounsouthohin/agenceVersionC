#pragma once
#include "Faction.h"
class FactionBleue : public Faction
{ 
	//Constructeur et surcharge
public:
	FactionBleue();
	FactionBleue(std::string _nom);
	FactionBleue(std::string _nom, int _capacite, int _attaque, int _defense, int _vie);
	~FactionBleue();

};

