#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	// Game of chips
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	// generate a random number of starting chips
	srand(time(0)); //seed
	
	chipsInPile = (rand() % 100) + 1;
	cout << "The game starts with: " << chipsInPile << " chips in pile." << endl;
	
}
