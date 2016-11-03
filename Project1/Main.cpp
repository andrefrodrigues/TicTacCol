#include<iostream>
#include"Game.h"
#include<string>
const std::string QUIT = "quit";
const std::string START = "start";
const std::string PLAY = "play";
const std::string PRINT = "print";
const std::string HELP = "help";

//no need to pass a pointer, just pass the ref!
void handleCommands(Game &g) {
	std::string op="";
	std::cout << "Welcome to TicTacCol game! The first version" << std::endl;
	while (op != QUIT) {
		std::getline(std::cin, op);
		if (op == START) {
			g.startGame();
			std::cout << "Game started!";
		}
		else if (op == PLAY) {
			if (!g.isGoing())
				std::cout << "The game hasn't started!";
		}
		else if (op == PRINT) {
			g.printBoard();
		}
		else if (op == HELP) {

		}
		std::cout << std::endl;
	}
	std::cout << "Bye!" << std::endl;
	std::cin.get();
}


int main() {
	Game* g = new Game();
	handleCommands(*g);
	delete g;
	return 0;
}