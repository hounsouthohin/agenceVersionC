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
	Faction factionRouge;
	Faction factionBleue;
	//Constructeur et surcharge
public:
	Vaisseau(Faction _factionRouge, Faction _factionBleue);
	Vaisseau(std::string _nom, int _niveau, int _exp, int _capacite, Faction _factionRouge, Faction _factionBleue);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();



};