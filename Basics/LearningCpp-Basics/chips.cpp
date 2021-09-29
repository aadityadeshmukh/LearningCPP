#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_PILE = 100;
const float MAX_PER_TURN = 0.5;
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
	cout << "Each player can take: " << static_cast<int> (chipsInPile * MAX_PER_TURN) << endl;
	
}
