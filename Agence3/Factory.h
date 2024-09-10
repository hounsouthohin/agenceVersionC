#include<string>
#include"Vaisseau.h"
class FactoryVaisseau
{
public:
	//Creation d'un aventurier aleatoire
	static Vaisseau* getRandomVaisseau();
private :
	static Faction* getRandomFaction();

};