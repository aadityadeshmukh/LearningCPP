#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const float TAX_RATE = 0.04;
int main(){
	
	string name;
	float price = 4.50;
	float charge = 0.0, taxCharge = 0.0;
	int qty = 0;
	
	cout << "Enter the number you wish to order:";
	cin >> qty;
	
	cout.setf(ios::fixed); //will avoid E notation
	cout.setf(ios::showpoint); //will show decimal even if not necessary
	
	charge = price * qty;
	taxCharge = charge * TAX_RATE;
	
	cout << "The tax charge is: $" << setprecision(2) << taxCharge << endl; // setprecision will say that I need 2 places after decimal
	charge = charge + taxCharge;
	cout << "Total charge: $" << charge << endl;
	
}
