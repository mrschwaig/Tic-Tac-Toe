#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
using namespace std;

string Passwort;
string Name;

string User1;
string User2;

int Zeile;
int Spalte;

int Zug;
int win = 0;

int iLade;

char feldID[3][3] = { {'0', '1' , '2'}, {'0', '1' , '2'}, {'0', '1', '2'} };

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

int usernames() {
	cout << endl << "Spielername 1: ";
	cin >> User1;

	cout << endl << "Spielername 2: ";
	cin >> User1;

	cout << endl << endl << "Los gehts!";

	Sleep(1500);

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

	cout << "Dies ist das Spielfeld: " << endl;
	Sleep(1000);
	feld();

	cout << endl << endl << "Lass und losstarten!";
	system("PAUSE");

	system("clear");
	usernames();
	system("clear");

	Zug = 0;

	do {
		feld();

		cout << endl << endl << "Spieler " << Zug % 2 << " setzt: " << endl << "Zeile: ";
		cin >> Zeile;
		cout << "Spalte: ";
		cin >> Spalte;

		char feldID[Zeile][Spalte] = { 'X' };

		system("clear");
		Zug++;
	} while (win == 0);

	

	return 1;
}