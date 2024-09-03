#include "Utilitaire.h";
#include"cstdlib";
inline int Utilitaire::genererNb(int min, int max) { return (rand() % (max - min + 1)) + min; }