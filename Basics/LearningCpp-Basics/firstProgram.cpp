// This is a comment
/*This is also a comment*/
//We inport some libraries first. These are just some predefined code segments
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
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
	
	switch(dice){
		 case 1:
		 	{
		 		cout << "One" << endl;
		 		break;
			 }
			 case 2:
		 	{
		 		cout << "Two" << endl;
		 		break;
			 }
			 case 3:
		 	{
		 		cout << "Three" << endl;
		 		break;
			 }
			 case 4:
		 	{
		 		cout << "Four" << endl;
		 		break;
			 }
			 case 5:
		 	{
		 		cout << "Five" << endl;
		 		break;
			 }
			 case 6:
		 	{
		 		cout << "Six" << endl;
		 		break;
			 }
			 default: 
			 	break;
	}
	
	int blue = 6;
	
	do{
		cout << blue << endl;
		blue++;
	}while(blue < 8);
	
	ifstream inFile;
	ofstream oFile;
	oFile.open("Blah.txt");
	if(!oFile.fail()){
		oFile << "Damn!" << endl;
	}
	oFile.close();
	string pass = "";
	inFile.open("D:\\Code\\LearningCPP\\Basics\\LearningCpp-Basics\\passphrase.txt");
	if(!inFile.fail()){
		while(inFile >> pass){
			cout << pass << endl;
		}
		
	}
	inFile.close();
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i : arr){
		cout << i << endl;
	}
}
