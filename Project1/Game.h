#pragma once
const int BOARD_SIZE = 3;
class Game {
private:
	short board[BOARD_SIZE][BOARD_SIZE];
	short collumnOcupation[BOARD_SIZE];
	int turn;
	bool finished,going;
	void clearBoard();
	bool canPlay(short col);
public:
	Game();
	~Game();
	bool isFinished();
	bool isGoing();
	void startGame();
	void play(short col);

	void printBoard();

};