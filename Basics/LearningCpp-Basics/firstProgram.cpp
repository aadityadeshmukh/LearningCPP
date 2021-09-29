// This is a comment
/*This is also a comment*/
//We inport some libraries first. These are just some predefined code segments
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	
	//lets take an input from user
	string user;
	// console in followed by input operator followed by the variable we are going to store the data
	cout << "Please enter your name:";
	//cin >> user;
	//cout is short for console output
	// << output operator
	// endl adds a new line
	cout << "Hello, " << user << " Please enter your favourite food:";
	string faveFood;
	//cin >> faveFood;
	cout << "Woah! My favourite food is " << faveFood << " too" << endl;
	
	int numEggs = 3;
	cout << static_cast<int>(numEggs * 1.5) << endl;
	//cout << floor(numEggs * 1.5) << endl;
	
	cout << sqrt(2500) << endl;
	
	int dice = 0;
	//seed the random number
	srand(time(0));
	
	dice = rand();
	cout << "You rolled a " << dice << endl;
	dice = ( dice % 6 )+ 1;
	cout << "You rolled a " << dice << endl;
}
