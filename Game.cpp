#include "Game.h"

GenericPlayer & Game::WhoPlaysFirst(GenericPlayer & PlayerOne, GenericPlayer & PlayerTwo) {
	return PlayerOne;
}

void Game::RunGame() {
	currentPlayer = WhoPlaysFirst(PlayerOne, PlayerTwo);
}
