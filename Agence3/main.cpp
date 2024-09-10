#include <iostream>;
#include <ctime>;
#include"Factory.h";
#include"Vaisseau.h";
#include"Station.h"
#include<vector>
int main() 
{
	srand(time(NULL));
	int nbVaisseau(3);
	Station* station = new Station();
	
	
	std::cout << "################################ production de vaisseau################################" << std::endl;
	for (int i = 0; i < nbVaisseau; i++) 
	{
		Vaisseau* vaisseau = FactoryVaisseau::getRandomVaisseau();
		station->ajouterVaisseau(vaisseau);

	}
	

	std::cout << "INFORMATION DE VOTRE STATION" << std::endl;
	std::vector<Vaisseau*> vecVaisseau = station->getVaisseauDispo();
	for (int i = 0; i < vecVaisseau.size(); i++)
	{
		Vaisseau* vaisseau = FactoryVaisseau::getRandomVaisseau();
		station->ajouterVaisseau(vaisseau);

	}
	std::cout << station->to_string() << std::endl;
	delete station;
	station = nullptr;
}