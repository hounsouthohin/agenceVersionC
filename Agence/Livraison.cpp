#include "Livraison.h";
Livraison::Livraison() :Vaisseau("Livraison", 12, 25, 35, new Faction("FactionRouge",120,230,340,500),new Faction("FactionBleue",100,190,300,400))
{}
Livraison::~Livraison()
{}
std::string Vaisseau::to_string()
{
	std::string info;
	info.append("je suis un vaisseau de livraison");
	info.append("Nom : " + nom + "\n");
	info.append("attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("defense : " + std::to_string(this->getDef()) + "\n");
	info.append("Vie: " + std::to_string(this->getVie()) + "\n");
	info.append("exp : " + std::to_string(this->exp) + "\n");
	info.append("niveau : " + std::to_string(this->niveau) + "\n");
	info.append("capacite : " + std::to_string(this->capacite) + "\n");
	return info;
}