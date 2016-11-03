#include"Game.h"
#include<iostream>
Game::Game() {
	finished = false;
	going = false;
	turn = 0;
	clearBoard();
}
Game::~Game() {

}
void Game::clearBoard() {
	for (int y = 0; y < BOARD_SIZE; y++) {
		collumnOcupation[y] = 0;
		for (int x = 0; x < BOARD_SIZE; x++) {
			this->board[x][y] = 0;
		}
	}
}
bool Game::isGoing() {
	return this->going;
}
bool Game::isFinished() {
	return this->finished;
}
void Game::startGame() {
	turn = 0;
	going = true;
	clearBoard();
}

void Game::play(short col) {
	if (!this->canPlay(col)){

	}
}

bool Game::canPlay(short col) {
	if (col < 1 && col > BOARD_SIZE)
		return false;

	return collumnOcupation[col] < BOARD_SIZE;
}

void Game::printBoard() {
	char c;
	for (int y = 0; y < BOARD_SIZE; y++) {
		for (int x = 0; x < BOARD_SIZE; x++) {
			 c = this->board[x][y] == 0 ? '_' : this->board[x][y] == 1 ? 'X' : 'O';
			std::cout<<c <<" ";
		}
		std::cout << std::endl;
	}
}