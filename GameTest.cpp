#include "gmock/gmock.h"
#include "Game.h"
#include "Human.h"

using namespace testing;
using namespace std;

TEST(AGame, GetWhoPlaysFirst) {
    Human PlayerOne;
    Human PlayerTwo;
    Game game(PlayerOne, PlayerTwo);
    GenericPlayer &player = game.whoPlaysFirst();
    GenericPlayer &playerOne = game.getPlayerOne();
    ASSERT_THAT(player.getCallSign(),playerOne.getCallSign());
}

TEST(AGame, Opponent) {
    Human PlayerOne;
    Human PlayerTwo;
    Game game(PlayerOne, PlayerTwo);
    GenericPlayer &playerOne = game.getPlayerOne();
    GenericPlayer &opponent = game.opponent(playerOne);
    EXPECT_THAT(playerOne.getCallSign(), PlayerOptions::X);
    ASSERT_THAT(opponent.getCallSign(),PlayerOptions::O);
} 
