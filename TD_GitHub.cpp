#include "TD_GitHub.h"
#include <iostream>
using namespace std;




//Fonctions réalisées par l'étudiant 2 :
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
float salaireNet(int salaire)
{
		float chargeSalariale = salaire * 0.23;
		float salaireNet = salaire - chargeSalariale;
		return salaireNet;
}

int plusPetit(int a, int b, int c) {
	int min = a;
	if (b < min) 
	{
		min = b;
	}
	if (c < min) 
	{
		min = c;
	}
	return min;
}

