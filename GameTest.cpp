#include "gmock/gmock.h"
#include "Game.h"

using namespace testing;
using namespace std;

TEST(AGame, GetWhoPlaysFirst) {
	Game game;
	GenericPlayer &player = game.WhoPlaysFirst();
	GenericPlayer &playerOne = game.getPlayerOne();
	ASSERT_THAT(player.getCallSign(),playerOne.getCallSign());
}
