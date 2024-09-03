#include "Faction.h";
#include <string>;
Faction::Faction():nom(""), capacite(0), attaque(0), defense(0), vie(0){}
Faction::Faction(std::string _nom) :capacite(0), attaque(0), defense(0), vie(0)
{
	_nom = "Nom de la faction";
}
Faction::Faction(std::string _nom, int _capacite, int _attaque,int _defense,int _vie)
{
	nom = _nom;
	capacite = _capacite;
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
}

Faction::~Faction() {}
std::string Faction::getNom() { return nom; }
