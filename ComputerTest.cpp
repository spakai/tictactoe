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
	board.makeMove(ai,1);
	ASSERT_THAT(ai.calculateMove(board), Eq(2));
}
