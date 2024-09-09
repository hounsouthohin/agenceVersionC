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

Station::~Station() {};
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