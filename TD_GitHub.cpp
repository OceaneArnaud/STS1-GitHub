#include "TD_GitHub.h"
#include <iostream>
#include <cmath>
using namespace std;

//Fonctions realisees par l'etudiant 1 :

bool estMajeur(int age)
{
    return (age >= 18);
}

int exposant(int nbre, int exp)
{
    int resultat;

    resultat = pow(nbre,exp);
    return resultat;
}

float TVA(int prix)
{
    float TVAprix;
    TVAprix = prix * 1.196;
    return TVAprix;
}

int plusGrand(int a, int b, int c)
{
    int max = a;
    if (b > max && c < max)
    {
        max = b;
    }
    else if (c > max)
    {
        max = c;
    }

    return max;
}



//Fonctions realisees par l'etudiant 2 :

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

