#include <iostream>
#include <ctime>
#include"Factory.h"
#include"Vaisseau.h"
#include"Station.h"
#include<vector>
#include "Utilitaire.h"
#include <conio.h>
int main()
{
	srand(time(NULL));
	int nbVaisseau(3);
	int sommeDispo = Utilitaire::genererNb(100000, 1000000);
	Station* station = new Station();
	std::vector<Vaisseau*> vaisseauAchete(0);
	std::vector<Vaisseau*> vecVaisseau(0);
	std::vector<Vaisseau*> vecVaisseauAchat(0);
	std::string valid("yes");
	int j = 1;

	station->init();
	for (int i = 0; i < nbVaisseau; i++)
	{
		Vaisseau* vaisseau = FactoryVaisseau::getRandomVaisseau();
		station->ajouterVaisseau(vaisseau);
	}
	std::cout << "#################################BIENVENU AU JEU DE L'ESCADRON##########################  " << std::endl;
	std::cout << "                . ___ \n";
	std::cout << "                    __,' __`.                _..----....____\n";
	std::cout << "        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'\n";
	std::cout << "  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,\n";
	std::cout << ",'________________                          \\`-._`-',\n";
	std::cout << " `._              ```````````------...___   '-.._'-:\n";
	std::cout << "    ```--.._      ,.                     ````--...__\\-.\n";
	std::cout << "            `.--. `-`                       ____    |  |`\n";
	std::cout << "              `. `.                       ,'`````.  ;  ;`\n";
	std::cout << "                `._`.        __________   `.      \\'__/`\n";
	std::cout << "                   `-:._____/______/___/____`.     \\  `\n";
	std::cout << "                               |       `._    `.    \\\n";
	std::cout << "                               `._________`-.   `.   `.___\n";
	std::cout << "                                             SSt  `------'`\n";


	std::cout << "#################################QUELLE OPTION DESIREZ VOUS ##########################  " << std::endl;
	std::cout << "################################ (1)vaisseaux Disponibles ##########################  " << std::endl;
	std::cout << "#################################(2)INFORMATION DE VOTRE STATION#######################" << std::endl;
	std::cout << "#################################(3)ACHAT DE VAISSEAUX#######################" << std::endl;
	int option = _getch();
	switch (option)
	{
	case '1':
		std::cout << "################################ vaisseaux Disponibles ##########################  " << std::endl;
		vecVaisseau = station->getVaisseauDispo();
		for (auto it = vecVaisseau.begin(); it != vecVaisseau.end(); ++it)
		{
			std::cout << (*it)->to_string() << std::endl;
		}
		break;
	case '2':
		std::cout << "##############################INFORMATION DE VOTRE STATION#######################" << std::endl;
		std::cout << station->to_string() << std::endl;
		delete station;
		station = nullptr;
		break;
	case '3':
		std::cout << "############################## LISTE DES VAISSEAUX DISPONIBLES A L'ACHAT #################################" << std::endl;
		vecVaisseauAchat = station->getVaisseauDispo();
		for (auto it = vecVaisseauAchat.begin(); it != vecVaisseauAchat.end(); ++it)
		{
			std::cout << "(" << j << +") " + (*it)->to_string() << std::endl;
			j++;
		}
		std::cout << std::endl;
		std::cout << "VOTRE SOMME DISPONIBLE EST DE : " << std::endl;
		std::cout << sommeDispo << std::endl;
		valid = "yes";
		while (valid == "yes")
		{
			std::cout << "####SELECTIONNER LE VAISSEAU #####" << std::endl;
			int choix = _getch();
			switch (choix)
			{
			case '1':
				if (sommeDispo >= vecVaisseauAchat[0]->getValeurMarchande())
				{
					vaisseauAchete.push_back(vecVaisseauAchat[0]);
					sommeDispo -= vecVaisseauAchat[0]->getValeurMarchande();
					break;
				}
			case '2':
				if (sommeDispo > vecVaisseauAchat[1]->getValeurMarchande())
				{
					vaisseauAchete.push_back(vecVaisseauAchat[1]);
					sommeDispo -= vecVaisseauAchat[1]->getValeurMarchande();
					break;
				}
			case '3':
				if (sommeDispo > vecVaisseauAchat[2]->getValeurMarchande())
				{
					vaisseauAchete.push_back(vecVaisseauAchat[2]);
					sommeDispo -= vecVaisseauAchat[2]->getValeurMarchande();
					break;
				}
			case '4':
				if (sommeDispo > vecVaisseauAchat[3]->getValeurMarchande())
				{
					vaisseauAchete.push_back(vecVaisseauAchat[3]);
					sommeDispo -= vecVaisseauAchat[3]->getValeurMarchande();
					break;
				}
			case '5':
				if (sommeDispo > vecVaisseauAchat[4]->getValeurMarchande())
				{
					vaisseauAchete.push_back(vecVaisseauAchat[4]);
					sommeDispo -= vecVaisseauAchat[4]->getValeurMarchande();
					break;
				}
			case '6':
				if (sommeDispo > vecVaisseauAchat[5]->getValeurMarchande())
				{
					vaisseauAchete.push_back(vecVaisseauAchat[5]);
					sommeDispo -= vecVaisseauAchat[5]->getValeurMarchande();
					break;
				}
			default:
				break;
			};
			std::cout << "####TAPER yes POUR SELECTIONNER LES VAISSEAUX A ACHETE OU no POUR ARRETER LA SELECTION #####" << std::endl;
			std::cin >> valid;
		}

		std::cout << "############################## LISTE DES VAISSEAUX ACHETES #################################" << std::endl;
		for (auto it = vaisseauAchete.begin(); it != vaisseauAchete.end(); ++it)
		{
			std::cout << (*it)->to_string() << std::endl;
		}
		break;

	default:
		break;
	};





}