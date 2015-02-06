#include "gmock/gmock.h"
#include "Computer.h"
#include "Human.h"
#include "Board.h"
 
using namespace testing;
using namespace std;

class AI: public Test {
    public:
        Board board;
		Human human;
		Computer ai;
};

TEST_F(AI, ComputerMakeMoveToWin) {
	human.setCallSign(PlayerOptions::X);
	ai.setCallSign(PlayerOptions::O);
	board.makeMove(ai,0);
	board.makeMove(ai,4);
	ASSERT_THAT(ai.calculateMove(board, human), Eq(8));
}

TEST_F(AI, ComputerMakeMoveToBlockOpponentWin) {
	human.setCallSign(PlayerOptions::X);
	ai.setCallSign(PlayerOptions::O);
	board.makeMove(human,0);
	board.makeMove(human,4);
	ASSERT_THAT(ai.calculateMove(board, human), Eq(8));
}
