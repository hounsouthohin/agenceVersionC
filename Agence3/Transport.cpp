#include "Transport.h"
#include<string>
Transport::Transport() :Vaisseau() {}
Transport::Transport(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* _faction,int _valeurMarchande) :Vaisseau(faction)
{
	niveau = _niveau;
	exp = _exp;
	capacite = _capacite;
	defense = _def;
	attaque = _att;
	faction = _faction;
}
Transport::~Transport()
{}
std::string Transport::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("je suis un vaisseau de transport");
	return info;
}
