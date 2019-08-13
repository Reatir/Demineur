// Demineur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

char introduction();

int main()
{
	if (introduction() == 'y')
	{
		cout << "oui" << endl;
	}
	else
	{
		cout << "non" << endl;
	}

}

char introduction()
{
	char t;
	cout << "Bienvenue!" << endl;
	cout << "Bande de casse-cous!" << endl;
	cout << "Pret a trouver des mines ?(y/n)" << endl;
	cin >> t;
	return t;
}
