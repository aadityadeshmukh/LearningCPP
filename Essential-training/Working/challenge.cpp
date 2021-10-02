#include <iostream>
#include <typeinfo>
using namespace std;


struct LibCard {
	const char* title;
	const char* author;
	const char* publisher;
	const char* subject;
	const char* ISBN;
	const char* oclc;
	short int dewey;
	short int yearPublished;
	short int yearAcquired;
	short int stock;
};

int main() {
	LibCard card1 = { "Atomic Habits", "James Clear", "Penguin", "Self", "ISBN001", "OCLC1234", 010111, 2010, 2010, 30 };

	int a = 4;
	int b = 10;

	const char* str = a > b ? "true" : "false";

	int* p = new int[a];
	for (int i = 0; i < a; ++i)
		cout << (p[i] = i) << endl;

	delete[] p;

	if (typeid(a) == typeid(b))
		cout << "true" << typeid(card1).name()  <<  endl;
	else
		cout << "false" << endl;

	//prime numbers
	cout << "Prime Numbers" << endl;
	int numbers = 2;
	int i = 1;
	while (i <= 1000) {
		if (numbers % 2 == 0 && numbers == 2) {
			cout << numbers << endl;
			i++;
		}

		if ((numbers % 2 != 0))
		{
			bool isPrime = true;
			for (int j = 2; j <= ((numbers + 1) / 2); j++) {
				if (numbers % j == 0) {
					isPrime = false;
				}
			}
			if (isPrime) {
				cout << numbers << endl;
				i++;
			}
		}
		numbers++;
	}
}