#include "gmock/gmock.h"
#include <algorithm>
#include "Board.h"
#include "PlayerOptions.h"

using namespace testing;
using namespace std;

class ABoard: public Test {
    public:
        Board board;
};

TEST_F(ABoard,EmptyOnInit) {
    ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),9);
}

TEST_F(ABoard,CheckIfMoveIsLegal) {
    ASSERT_THAT(board.isValidMove(0), Eq(1));
}

TEST_F(ABoard,CheckIfMoveIsLegal2) {
    ASSERT_THAT(board.isValidMove(10), Eq(0));
}
