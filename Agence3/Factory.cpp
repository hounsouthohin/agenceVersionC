#include"Factory.h"
#include"Utilitaire.h"
#include<string>
#include"cstdlib"
#include"Guerre.h"
#include"Transport.h"
#include"Livraison.h"
#include"FactionRouge.h"
#include"FactionBleue.h"

	Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);
	//Generation aleatoire de la faction
	Faction* faction = getRandomFaction();
	//Generer statistiques aleatoires
	int att = Utilitaire::genererNb(1, 100);
	int cap = Utilitaire::genererNb(10, 150);
	int def = Utilitaire::genererNb(20, 200);
	int vie = Utilitaire::genererNb(30, 400);
	int niv = Utilitaire::genererNb(40, 500);
	int exp = Utilitaire::genererNb(50, 200);
	int valeurMarchande = Utilitaire::genererNb(1000,10000);
	//Generer type aleatoire
	int typeIndex = Utilitaire::genererNb(0, 2);
	switch (typeIndex)
	{
	case 0:
		vaisseau = new Guerre(niv, exp, cap, vie, def, att, faction,valeurMarchande);
		break;
	case 1:
		vaisseau = new Livraison(niv, exp, cap, vie, def, att, faction,valeurMarchande);
		break;
	default:
		vaisseau = new Transport(niv, exp, cap, vie, def, att, faction,valeurMarchande);
		break;
	}
	return vaisseau;
}
Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* faction(0);
	std::string nom("Ma faction");
	//Generation des att,defense,vie,niveau ,exp et capacite
	int att = Utilitaire::genererNb(1, 100);
	int cap = Utilitaire::genererNb(10, 150);
	int def = Utilitaire::genererNb(20, 200);
	int vie = Utilitaire::genererNb(30, 400);
	//Generer type aleatoire
	int nomIndex = Utilitaire::genererNb(1, 3);
	switch (nomIndex)
	{
	case 1:
		nom = "FactionRouge";
		faction = new FactionRouge(nom, cap, att, def, vie);
		break;
	case 2:
		nom = "FactionBleue";
		faction = new FactionBleue(nom, cap, att, def, vie);
		break;
	default:
		break;
	}
	return faction;
}