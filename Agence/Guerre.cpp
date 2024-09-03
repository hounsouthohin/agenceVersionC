#include "Guerre.h";
Guerre::Guerre() :Vaisseau("Guerre",100,150, 450, new Faction("FactionRouge", 120, 230, 340, 500), new Faction("FactionBleue", 100, 190, 300, 400))
{}
Guerre::~Guerre()
{}
std::string Vaisseau::to_string()
{
	std::string info;
	info.append("je suis un vaisseau de Guerre");
	info.append("Nom : " + nom + "\n");
	info.append("attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("defense : " + std::to_string(this->getDef()) + "\n");
	info.append("Vie: " + std::to_string(this->getVie()) + "\n");
	info.append("exp : " + std::to_string(this->exp) + "\n");
	info.append("niveau : " + std::to_string(this->niveau) + "\n");
	info.append("capacite : " + std::to_string(this->capacite) + "\n");
	return info;
}