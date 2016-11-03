#include<iostream>
#include"Game.h"
int main() {
	Game* g = new Game();
	g->printBoard();
	std::cin.get();
	delete g;
	return 0;
}