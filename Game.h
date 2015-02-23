#include "GenericPlayer.h"

#include <functional>

class GenericPlayer;

class Game {
private:
	GenericPlayer & PlayerOne;
	GenericPlayer & PlayerTwo;
public:
	Game(GenericPlayer & PlayerOne, GenericPlayer & PlayerTwo);
	GenericPlayer & getPlayerOne();
	GenericPlayer & getPlayerTwo();
	GenericPlayer & whoPlaysFirst();
	GenericPlayer & opponent(GenericPlayer & currentPlayer);
    GameResults runGame();
};
