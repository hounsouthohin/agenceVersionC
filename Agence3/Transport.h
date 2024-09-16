#pragma once
#include "Vaisseau.h"
class Transport : public Vaisseau
{
public:
	Transport();
	Transport(int _niveau, int _exp, int _capacite, int _vie, int _def, int _att, Faction* _faction,int _valeurMarchande);
	~Transport();

	virtual std::string to_string();
};
