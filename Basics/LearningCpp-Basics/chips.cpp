#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_PILE = 100;
int main(){
	
	// Game of chips
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	// generate a random number of starting chips
	srand(time(0)); //seed
	
	chipsInPile = (rand() % MAX_PILE) + 1;
	cout << "The game starts with: " << chipsInPile << " chips in pile." << endl;
	
}
