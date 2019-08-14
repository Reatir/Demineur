// Demineur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
#include<windows.h>
#include <stdio.h>


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace std;

char introduction();
void RepondOui();
void RepondNon();

int main()
{
	if (introduction() == 'y')
	{
		system("cls");
		cout << "Bien,bien !" << endl;
		cout << "J'ai 4 difficultes pour vous :" << endl;
		cout << "- facile" << endl;
		cout << "- normal" << endl;
		cout << "- difficile" << endl;
		COORD p = { 1, 1 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

		HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
		DWORD NumInputs = 0;
		DWORD InputsRead = 0;
		bool running = true;

		INPUT_RECORD irInput;

		GetNumberOfConsoleInputEvents(hInput, &NumInputs);

		while (running)
		{
			ReadConsoleInput(hInput, &irInput, 1, &InputsRead);
			std::cout << irInput.Event.KeyEvent.wVirtualKeyCode << std::endl;

			switch (irInput.Event.KeyEvent.wVirtualKeyCode)
			{
			case VK_ESCAPE:
				running = false;
				//Quit The Running Loop
				break;
			case VK_LEFT:
				cout << "gauche " << endl;
			case VK_NUMPAD4:
				// move it left
				break;
			case VK_UP:
				cout << "haut " << endl;
			case VK_NUMPAD8:
				// move it up
				break;
			case VK_RIGHT:
				cout << "droite " << endl;
			case VK_NUMPAD6:
				// move it right
				break;
			case VK_DOWN:
				cout << "bas " << endl;
			case VK_NUMPAD2:
				// move it down
				break;
			}

		}

		

	}
	else
	{
		RepondNon();
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

void RepondOui()
{

}

void RepondNon()
{
	cout << "Qu'est ce que tu fais la?" << endl;
	cout << "Arret de me faire perdre mon temps" << endl;
}
