#include "gmock/gmock.h"
#include <algorithm>
#include "Board.h"
#include "PlayerOptions.h"
#include "Human.h"

using namespace testing;
using namespace std;

class ABoard: public Test {
    public:
        Board board;
		Human human;
};

TEST_F(ABoard,EmptyOnInit) {
    ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),9);
}

TEST_F(ABoard,MakeALegalMove) {
	human.setCallSign(PlayerOptions::X);
	board.makeMove(human, 0);
	board.makeMove(human,7);
	ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),7);
}

TEST_F(ABoard,MakeAnIllegalMove) {
	human.setCallSign(PlayerOptions::X);
	board.makeMove(human, 10);
	board.makeMove(human,12);
	ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),9);
}

TEST_F(ABoard, CheckWinner) {
	human.setCallSign(PlayerOptions::X);
	board.makeMove(human, 0);
	board.makeMove(human,1);
	board.makeMove(human,2);
	ASSERT_THAT(board.Winner(), Eq(GameResults::X_WINS));
	
}
