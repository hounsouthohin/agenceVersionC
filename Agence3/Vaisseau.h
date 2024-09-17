#pragma once
#include <string>
#include"Faction.h"
class Vaisseau
{
protected:
	Faction* faction;
	int valeurMarchande;
	int attaque;
	int defense;
	int capacite;
	std::string nom;
	int niveau;
	int exp;
	int vie;
	//Constructeur et surcharge
public:
	Vaisseau(Faction* _faction);
	Vaisseau();
	Vaisseau(std::string _nom, int _niveau, int _exp, int _capacite, Faction* _faction,int _valeurMarchande);
	Vaisseau(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* _faction,int _valeurMarchande);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();
	int getValeurMarchande();

	virtual std::string to_string();
};