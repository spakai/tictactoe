#include "Game.h"

Game::Game() {
	PlayerOne.setCallSign(PlayerOptions::X);
	PlayerTwo.setCallSign(PlayerOptions::O);
}

GenericPlayer & Game::whoPlaysFirst() {
	return PlayerOne;
}

GenericPlayer & Game::getPlayerOne() {
	return PlayerOne;
}

GenericPlayer & Game::getPlayerTwo() {
	return PlayerTwo;
}

GenericPlayer & Game::opponent(GenericPlayer& currentPlayer) {
	return (currentPlayer == static_cast<GenericPlayer&>(PlayerOne) ? PlayerTwo : PlayerOne); 
}

