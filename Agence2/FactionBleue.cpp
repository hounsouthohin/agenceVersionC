#include "FactionBleue.h"
#include <string>;
FactionBleue::FactionBleue() :nom(""), capacite(0), attaque(0), defense(0), vie(0) {}
FactionBleue::FactionBleue(std::string _nom) :capacite(0), attaque(0), defense(0), vie(0)
{
	_nom = "Faction rouge";
}
FactionBleue::FactionBleue(std::string _nom, int _capacite, int _attaque, int _defense, int _vie)
{
	nom = _nom;
	capacite = _capacite;
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
}
FactionBleue::~FactionBleue() {};
