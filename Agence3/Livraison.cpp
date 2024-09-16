#include "Livraison.h";
Livraison::Livraison() :Vaisseau(niveau, exp, capacite, vie, defense, attaque, faction,valeurMarchande)
{}
Livraison::Livraison(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* _faction,int _valeurMarchande) :Vaisseau()
{
	niveau = _niveau;
	exp = _exp;
	capacite = _capacite;
	defense = _def;
	attaque = _att;
	vie = _vie;
	faction = _faction;
	valeurMarchande = _valeurMarchande;
}
Livraison::~Livraison()
{}
std::string Livraison::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("je suis un vaisseau de livraison");
	return info;
}
