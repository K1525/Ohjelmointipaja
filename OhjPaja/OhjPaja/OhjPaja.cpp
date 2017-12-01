#include "stdafx.h"
using namespace std;
#include <iostream>
#include <string>
#include "Dialogue.h"

string mainMenuItems[2] = { "1. Play","2. Exit" };

void play() {
	//samDialogueInit();
	system("cls");

	//The are functions from Initializer.cpp brought over with Dialogue header
	hello();
	printHello();
}

void exit() {
	system("cls");
	cout << "LET'S NOT PLAY!";
}

void mainMenu() {
	system("cls");
	int menuSelection;
	cout << "******Menu*******" << endl;
	for (int m = 0; m <= 2; m++) {		
		cout << mainMenuItems[m] << endl;
	}
	cout << "What do you want to do?" << endl;
	cin >> menuSelection;
	if (cin.fail()) {
		cin.clear();
		cin.ignore();
		mainMenu();
	}
	else if (menuSelection == 1) {
		play();
	}
	else if (menuSelection == 2) {
		exit();
	}
	else {
		mainMenu();
	}
}

int main()
{	
	mainMenu();
	system("pause");
    return 0;
}

