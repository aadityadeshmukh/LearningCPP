#include <iostream>
#include <typeinfo>
#include <cstdarg>
#include <vector>
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

double average(const int count, ...) {
	va_list ap;
	int i;
	double total = 0.0;
	va_start(ap, count);
	for (i = 0; i < count; i++) {
		total += va_arg(ap, double);
	}
	va_end(ap);

	return total / count;
}

int factorial(int n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}

template <typename T>
T factorialTemplate(T n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}

int nonrecFact(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

template <typename T>
T nonrecFactTemplate(T n) {
	T fact = n;
	while(n>1) {
		fact *= --n;
	}
	return fact;
}
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
	while (i <= 10) {
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

	cout << average(3, 30, 40, 50) << endl;

	cout << factorial(10) << endl;
	cout << nonrecFact(10) << endl;

	double num = 5;
	cout << nonrecFactTemplate(num) << endl;


	vector<int> blue = {1, 2, 3, 4};
	cout << "Size:" << blue.size() << endl;
	cout << "Front:" << blue.front() << endl;
	cout << "Back:" << blue.back() << endl;

	vector<int>::iterator itStart = blue.begin();
	vector<int>::iterator itEnd = blue.end();
	for (auto it = itStart; it < itEnd; ++it)
		cout << *it << endl;
}