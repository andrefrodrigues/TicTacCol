#pragma once
#include<random>
//A normal tictactoe game has 3x3 board size...
const int BOARD_SIZE = 3;
//represents the whole game by itself
class Game {
private:
	//represents the board
	short board[BOARD_SIZE][BOARD_SIZE];
	//this array will hold the number of positions occupied by each column
	short collumnOcupation[BOARD_SIZE];
	//the turn of the player, this version consists of 2 player
	int turn;
	bool finished,going;
	void clearBoard();
	bool canPlay(short col);
	
public:
	//default constructor
	Game();
	//default destructor
	~Game();
	//check if the game is over
	bool isFinished();
	//check if the game is running
	bool isGoing();
	//starts the game
	void startGame();
	//plays the game giving a position 
	void play(short col);
	//prints the board to the stdout
	void printBoard();

};