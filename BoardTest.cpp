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

TEST_F(ABoard,CheckALegalMove) {
    ASSERT_THAT(board.isValidMove(0), Eq(1));
}

TEST_F(ABoard,CheckAnIllegalMove) {
    ASSERT_THAT(board.isValidMove(10), Eq(0));
}

TEST_F(ABoard,MakeALegalMove) {
	human.setCallSign();
	board.makeMove(human, 0);
	board.makeMove(human,7);
    ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),7);
}
