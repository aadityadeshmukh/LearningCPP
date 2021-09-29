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
	
	string playerNames[2];
	cout << "Player 1: Enter your name:";
	cin >> playerNames[0];
	cout << "Player 2: Enter your name:";
	cin >> playerNames[1];
	
	// generate a random number of starting chips
	srand(time(0)); //seed
	
	chipsInPile = (rand() % MAX_PILE) + 1;
	cout << "The game starts with: " << chipsInPile << " chips in pile." << endl;
	int maxPerTurn = chipsInPile * MAX_PER_TURN;
	cout << "Each player can take: " << maxPerTurn << endl;
	
	// draw a random number of chips from the pile with max per turn criterion applied
	
	int player1Sel = (rand() % maxPerTurn) + 1;
	cout << "Player 1 selects: " << player1Sel << endl;
	
}
