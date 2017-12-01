#include "stdafx.h"
using namespace std;
#include <iostream>
#include <string>
#include "Dialogue.h"

string mainMenuItems[2] = { "1. Play","2. Exit" };


//Now you can call this function like: areaCalculator(3, 4); which would result to area of 12...
void areaCalculator(int length, int width) {
	int area = length * width;
	cout << "Area: " << area << endl;
}


/*
//Static muuttuja pitää muuttujan arvon aliohjelmassa muistissa eikä alusta sitä aina uudestaan

void hyva_laskuri(void)
{
	static int laskuri = 1;
	cout << "Laskuri on: " << laskuri << "\n";
	laskuri++;
}

void huono_laskuri(void)
{
	int laskuri = 1;
	cout << "Laskuri on: " << laskuri << "\n";
	laskuri++;
}


void calculatus() {
	int i;
	for (i = 1; i <= 3; i++)
	{
		hyva_laskuri();
	}

	cout << "\n";

	for (i = 1; i <= 3; i++)
	{
		huono_laskuri();
	}
}


*/

//Struct allow user to set data to it.                 NOOTTI ITSELLENI: Verrattavissa viewmodeliin

struct HENKILO
{
	string name;
	int age;
};

HENKILO Janne = { "Janne", 21 };

void printName() {
	cout << "Name: " << Janne.name << endl;
	cout << "Age: " << Janne.age << endl;
}


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
	//mainMenu();
	//areaCalculator(3, 4);
	//calculatus();
	printName();
	system("pause");
    return 0;
}

