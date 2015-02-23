#include "gmock/gmock.h"
#include "Game.h"
#include "Computer.h"
#include "Computer.h"

using namespace testing;
using namespace std;

TEST(AGame, GetWhoPlaysFirst) {
    Computer PlayerOne;
    Computer PlayerTwo;
    Game game(PlayerOne, PlayerTwo);
    GenericPlayer &player = game.whoPlaysFirst();
    GenericPlayer &playerOne = game.getPlayerOne();
    ASSERT_THAT(player.getCallSign(),playerOne.getCallSign());
}

TEST(AGame, OpponentOfPlayerOne) {
    Computer PlayerOne;
    Computer PlayerTwo;
    Game game(PlayerOne, PlayerTwo);
    GenericPlayer &playerOne = game.getPlayerOne();
    GenericPlayer &opponent = game.opponent(playerOne);
    EXPECT_THAT(playerOne.getCallSign(), PlayerOptions::X);
    ASSERT_THAT(opponent.getCallSign(),PlayerOptions::O);
}

TEST(AGame, OpponentOfPlayerTwo) {
    Computer PlayerOne;
    Computer PlayerTwo;
    Game game(PlayerOne, PlayerTwo);
    GenericPlayer &playerTwo = game.getPlayerTwo();
    GenericPlayer &opponent = game.opponent(playerTwo);
    EXPECT_THAT(playerTwo.getCallSign(), PlayerOptions::O);
    ASSERT_THAT(opponent.getCallSign(),PlayerOptions::X);
}


TEST(AGame, PlayAGame) {
    Computer PlayerOne;
    Computer PlayerTwo;
    Game game(PlayerOne, PlayerTwo);
    ASSERT_THAT(game.runGame(),GameResults::X_WINS);
}
