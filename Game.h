#include "Human.h"

class GenericPlayer;

class Game {
private:
	Human PlayerOne;
	Human PlayerTwo;
	GenericPlayer & currentPlayer;
public:
	GenericPlayer & WhoPlaysFirst(GenericPlayer & PlayerOne, GenericPlayer & PlayerTwo);
	void RunGame();
};
