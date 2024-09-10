#include "Station.h"
#include<vector>
#include<string>
#include "Station.h"
#include "Factory.h"
Station::Station() :platinumDisponible(0), vieStation(0), vecVaisseau(0) {};
Station::Station(int _platinumDisponible, int _vieStation, std::vector<Vaisseau*> _vecVaisseau) 
{
	platinumDisponible = _platinumDisponible;
	vieStation = _vieStation;
	vecVaisseau = _vecVaisseau; 
}

Station::~Station() 
{
	for (auto it = vecVaisseau.begin(); it != vecVaisseau.end(); ++it) 
	{
		if (*it != NULL) {
			delete *it;
			*it = nullptr;
		}
		
	}
};
std::vector<Vaisseau*> Station:: getVaisseauDispo() 
{
	return vecVaisseau;
};
void Station::ajouterVaisseau(Vaisseau* vaisseau)
{
	vecVaisseau.push_back(vaisseau);
};
void Station::init() 
{
	for (int i = 0; i < 3; i++) 
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
	}
}
std::string Station::to_string()
{
	std::string info;
	info.append("PlatinumDisponible : " + std::to_string(platinumDisponible) + "\n");
	info.append("vie restante : " + std::to_string(vieStation) + "\n");
	info.append("Nombre de vaisseaux disponibles : " + std::to_string(vecVaisseau.size()) + "\n");
	return info;
}