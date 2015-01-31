#include "Game.h"

Game::Game() {
	PlayerOne.setCallSign(PlayerOptions::X);
	PlayerTwo.setCallSign(PlayerOptions::O);
	
}

GenericPlayer & Game::WhoPlaysFirst() {
	return PlayerOne;
}

GenericPlayer & Game::getPlayerOne() {
	return PlayerOne;
}

GenericPlayer & Game::getPlayerTwo() {
	return PlayerTwo;
}
