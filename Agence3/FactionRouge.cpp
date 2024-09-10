#include "FactionRouge.h"
#include <string>
FactionRouge::FactionRouge() :Faction()
{
	nom = "";
	capacite = 0;
	attaque = 0;
	defense = 0;
	vie = 0;
}
FactionRouge::FactionRouge(std::string _nom) :Faction(_nom)
{

	nom = _nom;
	capacite = 0;
	attaque = 0;
	defense = 0;
	vie = 0;
}
FactionRouge::FactionRouge(std::string _nom, int _capacite, int _attaque, int _defense, int _vie) :Faction(_nom, _capacite, _attaque, _defense, _vie)
{
	nom = _nom;
	capacite = _capacite;
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
}

FactionRouge::~FactionRouge() {};

