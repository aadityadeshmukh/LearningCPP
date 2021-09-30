#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

struct Players{
	string name;
	int numWins;
};

const int MAX_PILE = 100;
const float MAX_PER_TURN = 0.5;

Players FindPlayer(Players[], bool);
void GetPlayerNames(Players []);
void PlayRound(int &, Players[], bool);
int main(){
	
	// Game of chips
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	
	Players playerNames[2];
	GetPlayerNames(playerNames);
	playerNames[0].numWins = 0;
	playerNames[1].numWins = 0;
	
	ofstream oFile;
	oFile.open("Tracker.txt", ios::app);
	int playAgain = 1;
	do{
		// generate a random number of starting chips
		srand(time(0)); //seed
		
		chipsInPile = (rand() % MAX_PILE) + 1;
		cout << "The game starts with: " << chipsInPile << " chips in pile." << endl;
		int counter = 0;
		while(gameOver == false){
			counter++;
			PlayRound(chipsInPile, playerNames, player1Turn);
			
			if(chipsInPile == 0){
				gameOver = true;
				Players winner = FindPlayer(playerNames, !player1Turn) ;
				cout << "Winner: " << winner.name << endl;
				oFile << counter << " " << winner.name << endl;
				winner.numWins++;
				oFile << winner.numWins << " " << winner.name << endl;
				
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
	oFile.close();
	
}

Players FindPlayer(Players arrPlayers[], bool playerTurn)
{
	if(playerTurn)
		return arrPlayers[0];
	else
		return arrPlayers[1];
}

void GetPlayerNames(Players arrNames[]){
	cout << "Player 1: Enter your name:";
	cin >> arrNames[0].name;
	cout << "Player 2: Enter your name:";
	cin >> arrNames[1].name;
}

void PlayRound(int & chipsInPile , Players arrPlayers[], bool player1Turn){
	int chipsTaken;
	int maxPerTurn = chipsInPile * MAX_PER_TURN;
	cout << "Each player can take: ";
	if( maxPerTurn == 0)
		cout << 1 << endl;
	else 
		cout << maxPerTurn << endl;
		
	do{
		Players selector = FindPlayer(arrPlayers, player1Turn);
		cout << selector.name << " selects: ";
		cin >> chipsTaken;
	}while((chipsTaken > maxPerTurn) && (chipsInPile > 1));
	
	
	chipsInPile = chipsInPile - chipsTaken;
	
	cout << "Chips left in pile: " << chipsInPile << endl;
}

