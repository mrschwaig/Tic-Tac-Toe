#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <conio.h> 
using namespace std;

string Passwort;
string Name;

string User1;
string User2;
string activeUser;

int ID;
int Zug;

bool tie = false;

char symbol;

int iLade;

int i1;
int i2;

int rewrite = 0;

char feldID[3][3] = { {'1', '2' , '3'}, {'4', '5' , '6'}, {'7', '8', '9'} };

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

int eingabe() {
	if (Zug % 2 == 0) {
		symbol = 'X';
	} if (Zug % 2 == 1) {
		symbol = 'O';
	}

	if (ID == 1) {
		if (feldID[0][0] == 'X' || feldID[0][0] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[0][0] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 2) {
		if (feldID[0][1] == 'X' || feldID[0][1] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[0][1] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 3) {
		if (feldID[0][2] == 'X' || feldID[0][2] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[0][2] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 4) {
		if (feldID[1][0] == 'X' || feldID[1][0] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[1][0] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 5) {
		if (feldID[1][1] == 'X' || feldID[1][1] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[1][1] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 6) {
		if (feldID[1][2] == 'X' || feldID[1][2] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[1][2] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 7) {
		if (feldID[2][0] == 'X' || feldID[2][0] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[2][0] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 8) {
		if (feldID[2][1] == 'X' || feldID[2][1] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[2][1] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	} if (ID == 9) {
		if (feldID[2][2] == 'X' || feldID[2][2] == 'O') {
			rewrite = 1;
			return 0;
		}
		feldID[2][2] = { symbol };
		if (rewrite == 1) {
			rewrite = 0;
		}
	}

	return 1;
}

bool winCheck() {
	for (int g = 0; g < 3; g++) {
		if (feldID[g][0] == feldID[g][1] && feldID[g][0] == feldID[g][2] || feldID[0][g] == feldID[1][g] && feldID[0][g] == feldID[2][g]) {
			return true;
		}
	}
	if (feldID[0][0] == feldID[1][1] && feldID[1][1] == feldID[2][2] || feldID[0][2] == feldID[1][1] && feldID[1][1] == feldID[2][0]) {
		return true;
	}
	
	for (int g = 0; g < 3; g++) {
		for (int h = 0; h < 3; h++) {
			if (feldID[g][h] != 'X' && feldID[g][h] != 'O') {
				return false;
			}
		}
	}
	tie = true;
	return false;
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

	system("cls");

	welcome("Tic Tac Toe");

	cout << endl << endl;
	system("PAUSE");

	system("cls");

	do {
		cout << "Lade";
		Sleep(100);

		cout << ".";
		Sleep(100);

		cout << ".";
		Sleep(100);

		cout << ".";
		Sleep(100);
		system("cls");

		iLade++;
	} while (iLade <= 5);

	Sleep(1500);

	system("cls");

	cout << "Dies ist das Spielfeld: " << endl;
	Sleep(1000);
	feld();

	cout << endl << endl << "Lass und losstarten!" << endl << endl;
	system("PAUSE");

	system("cls");
	usernames();
	system("cls");

	Zug = 4;

	do {
		feld();

		if (Zug % 2 == 0) {
			activeUser = User1;
		} if (Zug % 2 == 1) {
			activeUser = User2;
		}

		do {
			if (rewrite == 1) {
				cout << endl << endl << "Das Fleld ist bereits besetzt!";
				Sleep(1000);
			}

			cout << endl << endl << "Spieler " << activeUser << " setzt: ";
			cin >> ID;

			eingabe();
		} while (rewrite == 1);

		winCheck();
		system("cls");
		Zug++;
	} while (!winCheck());

	system("cls");

	cout << activeUser << " gewinnt!" << endl << endl << endl;

	return 1;
}