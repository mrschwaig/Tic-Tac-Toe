#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
using namespace std;

string Passwort;
string Name;

int iLade;

char feldID[3][3] = { {'1', '2' , '3'}, {'1', '2' , '3'}, {'1', '2', '3'} };

int welcome(string Title) {
	cout << Title << endl << "---------------------" << endl << "Willkommen " << Name;
	return 1;
}

int feld() {
	cout << endl << "| " << feldID[0][0] << " | " << feldID[0][1] << " | " << feldID[0][2] << " |" << endl;
	cout << "|---|---|---|" << endl;
	cout << "| " << feldID[1][0] << " | " << feldID[1][1] << " | " << feldID[1][2] << " |" << endl;
	cout << "|---|---|---|" << endl;
	cout << "| " << feldID[2][0] << " | " << feldID[2][1] << " | " << feldID[2][2] << " |" << endl;

	return 1;
}

int main(void) {
	cout << "Passwort: ";
	cin >> Passwort;

	if (Passwort != "Tanzerpanzer") {
		cout << endl << "Leider falsch." << endl << endl;
		Sleep(3000);
		return 0;
	}

	cout << endl << "Dein Name: ";
	cin >> Name;

	system("clear");

	welcome("Tic Tac Toe");

	cout << endl << endl;
	system("PAUSE");

	system("clear");

	do {
		cout << "Lade";
		Sleep(100);

		cout << ".";
		Sleep(100);

		cout << ".";
		Sleep(100);

		cout << ".";
		Sleep(100);
		system("clear");

		iLade++;
	} while (iLade <= 5);

	Sleep(1500);

	system("clear");

	feld();

	return 1;
}