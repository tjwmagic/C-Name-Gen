#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

void main() {
	srand(time(0));
	string dwarfMaleNames[6] = { "Adrik", "Gardain", "Baern", "Oskar", "Flint", "Veit" };
	string dwarfLastNames[6] = { "Balderk", "Gorunn", "Ironfist", "Loderr", "Torunn", "Strakeln" };
	int genderNumber = 0;
	

	int max, randomNumber, i, g; // int 'i' is for the name generator. int 'g' is for the gender generator
	max = 5; // Max number of names to be displayed

	genderNumber = (rand() % 2) + 1;
	cout << "RANDOM GENDER: " << genderNumber << endl;


	for (i = 0; i <= 5; i++) {
		randomNumber = (rand() % max) + 1;
		cout << "RANDOM NUMBER: " << randomNumber << endl;

		cout << "NAME: " << dwarfMaleNames[randomNumber] << endl;

	}


		system("pause");



	}