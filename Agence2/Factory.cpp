#include"Factory.h";
#include"Utilitaire.h";
#include<string>;
#include"cstdlib";

Faction* Factory::getRandomVaisseau() 
{
	//Generation aleatoire de la faction

}
Vaisseau* FactoryVaisseau::getRandomFaction()
{
	Vaisseau* vaisseau(0);
	//Generation des att,defense,vie,niveau ,exp et capacite
	int att = Utilitaire::genererNb(1, 100);
	int cap = Utilitaire::genererNb(10, 150);
	int def = Utilitaire::genererNb(20, 200);
	int vie = Utilitaire::genererNb(30, 400);
	int niv = Utilitaire::genererNb(40, 500);

	//Generatio de la faction
	Faction* maFaction = getRandomFaction();

	//Generer un type aleatoire du vaisseau 
	int nb = Utilitaire::genererNb(1, 3);
	if (nb == 1) {}

	//Creation du vaisseau
	vaisseau =
		return vaisseau;
}