#include "TD_GitHub.h"
#include <iostream>
using namespace std;




//Fonctions r�alis�es par l'�tudiant 2 :
bool estPair(int nb)
{
	return nb % 2 == 0;
}

int sommeNombre(int nb)
{
	int somme = 0;
	for (int i = 1; i <= nb; i++) 
	{
		somme += i;
	}
	return somme;
}
