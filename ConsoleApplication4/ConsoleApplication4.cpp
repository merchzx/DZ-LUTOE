// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

class Drob {
	float znam;
	float chisl;
public:
	void Prov(int a, int b) {
		znam = b;
		chisl = a;

		if (b == 0) {
			cout << "Znamenatel is can`t be ZERO!!!";
		}
	}

	void Rand() {
		srand(time(0));
		znam = rand() % 100 + 3;
		chisl = rand() % 100 + 3;
	}

	void Show() {
		cout <<chisl<<"/"<<znam << " = " << chisl / znam;
	}
};


int main()
{
	srand(time(0));
	Drob k;
	Drob f;
	f.Prov(4, 5);
	f.Show();
	cout << endl;
	k.Rand();
	k.Show();
 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
