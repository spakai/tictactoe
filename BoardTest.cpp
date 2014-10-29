#include "gmock/gmock.h"
#include <algorithm>
#include "Board.h"

using namespace testing;
using namespace std;

class ABoard: public Test {
    public:
        Board board;

};

TEST_F(ABoard,EmptyOnInit) {
    ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(), Board::EMPTY),9);
}


