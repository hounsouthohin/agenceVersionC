#pragma once
#include <string>
#include <vector> 
#include"Vaisseau.h"
class Station
{
private:
	int platinumDisponible;
	int vieStation;
	std::vector<Vaisseau*> vecVaisseau;

public:
	Station(int _platinumDisponible, int _vieStation, std::vector<Vaisseau*> _vecVaisseau);
	Station();
	~Station();

	std::vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
	std::string to_string();
};

