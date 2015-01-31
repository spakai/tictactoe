#include "Human.h"

class GenericPlayer;

class Game {
private:
	Human PlayerOne;
	Human PlayerTwo;
public:
	Game();
	GenericPlayer & getPlayerOne();
	GenericPlayer & getPlayerTwo();
	GenericPlayer & WhoPlaysFirst();
};
