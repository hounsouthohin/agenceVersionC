#pragma once
#include <string>;
#include"Faction.h"
class Vaisseau
{
private: 
	Faction* faction;
protected:
	int attaque;
	int defense;
	int capacite;
	std::string nom; 
	int niveau;
	int exp;
	int vie;
	//Constructeur et surcharge
public:
	Vaisseau();
	Vaisseau(Faction* faction);
	Vaisseau(std::string _nom, int _niveau, int _exp, int _capacite,Faction* _faction);
	Vaisseau(int _niveau, int _exp, int _capacite,int _vie,int _def,int _att, Faction* _faction);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};