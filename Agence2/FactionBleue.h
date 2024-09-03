#pragma once
#include "Faction.h";
class FactionBleue : Faction
{

	int attaque;
	int defense;
	int capacite;
	std::string nom;
int vie; protected:

	//Constructeur et surcharge
public:
	FactionBleue();
	FactionBleue(std::string _nom);
	FactionBleue(std::string _nom, int _capacite, int _attaque, int _defense, int _vie);
	~FactionBleue();

};

