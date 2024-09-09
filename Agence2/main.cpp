#include <iostream>;
#include <ctime>;
#include"Factory.h";
#include"Vaisseau.h";

int main() 
{
	srand(time(NULL));
	std::cout << "..... production de vaisseau" << std::endl;
	Vaisseau* vaisseau = FactoryVaisseau::getRandomVaisseau();
	std::cout << vaisseau -> to_string();

	delete vaisseau;
}