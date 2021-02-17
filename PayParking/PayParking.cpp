// PayParking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Masina.h"

using namespace std;

int main()
{
	bool parcare = true;

	Masina* itMasina = new Masina();

	int optiune = 0;

	do
	{
		system("cls");
		cout << "Meniu - Parcare cu plata" << endl;
		cout << "0. Inregistrarea masinii care intra in parcare" << endl;
		cout << "1. Numarul total de locuri disponibile" << endl;
		cout << "2. Cautarea masinii inregistrate" << endl;
		cout << "3. Lista de masini stationate in parcare" << endl;
		cout << "4. Exit" << endl;
		cin >> optiune;
		cin.ignore();
		system("cls");

		switch (optiune)
		{
		case 0:
			itMasina->InregistrareMsina();
			break;

		case 1:
			itMasina->LocuriDisponibile();
			break;

		case 2:
			itMasina->CautareaMasinii();
			break; 

		case 3:
			itMasina->ListaMasiniStationate();
			break;

		case 4:
			cout << "O zi buna!" << endl;
			parcare = false;
			break;

		default:
			break;
		}

	} while (parcare);

	delete itMasina;
}
