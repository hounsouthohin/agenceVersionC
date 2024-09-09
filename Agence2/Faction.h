#pragma once
#include <string>
class Faction
{
protected:
	int attaque;
	int defense;
	int capacite;
	std::string nom;
	int vie;

	//Constructeur et surcharge
public:
	Faction();
	Faction(std::string _nom);
	Faction(std::string _nom, int _capacite,int _attaque, int _defense, int _vie);
	~Faction();
	std::string getNom();
	int getAtt();
	int getDef();
	int getCap();
	int getVie();
};