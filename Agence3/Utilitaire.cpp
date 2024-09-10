#include "Utilitaire.h"
#include"cstdlib"
#include"ctime"
int Utilitaire::genererNb(int min, int max) { srand(time(NULL));  return (rand() % (max - min + 1)) + min; }