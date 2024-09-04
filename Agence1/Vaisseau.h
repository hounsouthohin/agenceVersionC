#include <string>;
#include"Faction.h";
class Vaisseau
{
protected:
	int attaque;
	int defense;
	int capacite;
	std::string nom;
	int niveau;
	int exp;
	int vie;
	Faction faction;
	//Constructeur et surcharge
public:
	Vaisseau();
	Vaisseau(std::string _nom, int _niveau, int _exp, int _capacite);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();



};