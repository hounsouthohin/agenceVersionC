#include "Vaisseau.h";
#include"Faction.h";
#include <string>;
Vaisseau::Vaisseau(Faction* _faction) :nom("Vaisseau Galactique"), niveau(120), exp(230), capacite(123), attaque(543), defense(234), vie(564), faction(0), valeurMarchande(0)
{
	faction = _faction;
}
Vaisseau::Vaisseau() :nom(" "), niveau(0), exp(0), capacite(0), attaque(0), defense(0), vie(0), valeurMarchande(0)
{
	
}
Vaisseau::Vaisseau(std::string _nom, int _niveau, int _exp, int _capacite, Faction* _faction, int _valeurMarchande) :attaque(0), defense(0), vie(0)
{
	nom = _nom;
	niveau = _niveau;
	exp = _exp;
	capacite = _capacite;
	faction = _faction;
	valeurMarchande = _valeurMarchande;
}
Vaisseau::Vaisseau(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* _faction, int _valeurMarchande) :nom("Vaisseau Galactique")
{
	niveau = _niveau;
	exp = _exp;
	capacite = _capacite;
	defense = _def + faction->getDef();
	attaque = _att + faction->getAtt();
	vie = _vie + faction->getVie();
	faction = _faction;
	valeurMarchande = _valeurMarchande;
}
Vaisseau::~Vaisseau()
{
	if (faction != NULL) {
		delete faction;
		faction = nullptr;
	}

}
int Vaisseau::getAtt() { return attaque; }
int Vaisseau::getDef() { return defense; }
int Vaisseau::getVie() { return vie; }
int Vaisseau::getValeurMarchande() { return valeurMarchande; }
std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");
	info.append("attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("defense : " + std::to_string(this->getDef()) + "\n");
	info.append("Vie: " + std::to_string(this->getVie()) + "\n");
	info.append("exp : " + std::to_string(this->exp) + "\n");
	info.append("niveau : " + std::to_string(this->niveau) + "\n");
	info.append("capacite : " + std::to_string(this->capacite) + "\n");
	info.append("Valeur Marchande : " + std::to_string(this->valeurMarchande) + "\n");
	return info;
}