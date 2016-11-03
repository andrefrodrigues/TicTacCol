#include<iostream>
#include"Game.h"
#include<string>
const std::string QUIT = "quit";
const std::string START = "start";
void handleCommands() {
	std::string op="";
	while (op != QUIT) {
		std::getline(std::cin, op);
		if (op == START) {

		}
	}
}

int main() {
	handleCommands();
	return 0;
}