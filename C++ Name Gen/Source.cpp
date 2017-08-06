#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

void main() {

	string dwarfMaleNames[6] = { "Adrik", "Alberich", "Baern", "Barendd", "Flint", "Tordek" };

	
	int max, randomNumber, i;

	for (i = 0; i <= 5; i = i + 1) {
		cout << "Please input max integer: ";
		cin >> max;
		
		srand(time(0));

		randomNumber = (rand() % max) + 1;

		cout << randomNumber << endl;

		cout << dwarfMaleNames[randomNumber] << endl;

	}


	system("pause");



}