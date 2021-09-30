#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_PILE = 100;
const float MAX_PER_TURN = 0.5;

string FindPlayerName(string[], bool);
void GetPlayerNames(string []);
int PlayRound(int , string[], bool);
int main(){
	
	// Game of chips
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	string playerNames[2];
	GetPlayerNames(playerNames);
	
	int playAgain = 1;
	do{
		// generate a random number of starting chips
		srand(time(0)); //seed
		
		chipsInPile = (rand() % MAX_PILE) + 1;
		cout << "The game starts with: " << chipsInPile << " chips in pile." << endl;
		
		while(gameOver == false){
			/*int maxPerTurn = chipsInPile * MAX_PER_TURN;
			cout << "Each player can take: ";
			if( maxPerTurn == 0)
				cout << 1 << endl;
			else 
				cout << maxPerTurn << endl;
				
			do{
				cout << FindPlayerName(playerNames, player1Turn) << " selects: ";
				cin >> chipsTaken;
			}while((chipsTaken > maxPerTurn) && (chipsInPile > 1));
			
			
			chipsInPile = chipsInPile - chipsTaken;
			
			cout << "Chips left in pile: " << chipsInPile << endl;*/
			chipsInPile = PlayRound(chipsInPile, playerNames, player1Turn);
			
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
		
		if(gameOver){
			cout << "Do you want to play again? (yes - 1, no -2):";
			cin >> playAgain;
			gameOver = !gameOver;
		}
	}while (playAgain != 2);
	
	
}

string FindPlayerName(string arrPlayers[], bool playerTurn)
{
	if(playerTurn)
		return arrPlayers[0];
	else
		return arrPlayers[1];
}

void GetPlayerNames(string arrNames[]){
	cout << "Player 1: Enter your name:";
	cin >> arrNames[0];
	cout << "Player 2: Enter your name:";
	cin >> arrNames[1];
}

int PlayRound(int chipsInPile , string arrPlayers[], bool player1Turn){
	int chipsTaken;
	int maxPerTurn = chipsInPile * MAX_PER_TURN;
	cout << "Each player can take: ";
	if( maxPerTurn == 0)
		cout << 1 << endl;
	else 
		cout << maxPerTurn << endl;
		
	do{
		cout << FindPlayerName(arrPlayers, player1Turn) << " selects: ";
		cin >> chipsTaken;
	}while((chipsTaken > maxPerTurn) && (chipsInPile > 1));
	
	
	chipsInPile = chipsInPile - chipsTaken;
	
	cout << "Chips left in pile: " << chipsInPile << endl;
	return chipsInPile;
}

