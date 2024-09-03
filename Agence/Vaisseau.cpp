#include "Vaisseau.h";
#include"Faction.h";
#include <string>;
Vaisseau::Vaisseau() :nom("Vaisseau Galactique"), niveau(0), exp(0), capacite(0), attaque(0), defense(0), vie(0)
{
	factionRouge = Faction("Faction rouge", 150, 200,350,400);
	factionBleue = Faction("Faction bleue", 100, 150, 250, 350);
}
Vaisseau::Vaisseau(std::string _nom, int _niveau, int _exp, int _capacite) :attaque(0), defense(0), vie(0)
{
	nom = _nom;
	niveau = _niveau;
	exp = _exp;
	capacite = _capacite;
	factionRouge = Faction("Faction rouge", 150, 200, 350, 400);
	factionBleue = Faction("Faction bleue", 100, 150, 250, 350);
}

Vaisseau::~Vaisseau() {}
int Vaisseau::getAtt() { return attaque; }
int Vaisseau::getDef() { return defense; }
int Vaisseau::getVie() { return vie; }
std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");
	info.append("attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("defense : " + std::to_string(this->getDef()) + "\n");
	info.append("Vie: " + std::to_string(this->getVie()) + "\n");
	info.append("exp : " + std::to_string(this->exp) + "\n");
	info.append("niveau : " + std::to_string(this->niveau) + "\n");
	info.append("capacite : " + std::to_string(this->capacite) + "\n");
	return info;
}