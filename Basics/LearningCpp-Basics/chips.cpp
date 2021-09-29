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
	
	while(gameOver == false){
		int maxPerTurn = chipsInPile * MAX_PER_TURN;
		cout << "Each player can take: ";
		if( maxPerTurn == 0)
			cout << 1 << endl;
		else 
			cout << maxPerTurn << endl;
			
		do{
			if(player1Turn)
			{
				cout << playerNames[0] << " selects: ";
			}
			else
			{
				cout << playerNames[1] << " selects: ";
			}
			cin >> chipsTaken;
		}while((chipsTaken > maxPerTurn) && (chipsInPile > 1));
		
		
		chipsInPile = chipsInPile - chipsTaken;
		
		cout << "Chips left in pile: " << chipsInPile << endl;
		
		if(chipsInPile == 0){
			gameOver = true;
			if(player1Turn)
			{
				cout << "Winner: " << playerNames[1] << endl;
			}
			else
			{
				cout << "Winner: " << playerNames[0] << endl;
			}
		}
		else 
			player1Turn = !player1Turn;
		
	}
	
	
}
