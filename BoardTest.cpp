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
		Human human1;
		Human human2;
};

TEST_F(ABoard,EmptyOnInit) {
    ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),9);
}

TEST_F(ABoard,MakeALegalMove) {
	human1.setCallSign(PlayerOptions::X);
	board.makeMove(human1, 0);
	board.makeMove(human1,7);
	ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),7);
}

TEST_F(ABoard,MakeAnIllegalMove) {
	human1.setCallSign(PlayerOptions::X);
	board.makeMove(human1, 10);
	board.makeMove(human1,12);
	ASSERT_THAT(std::count(board.getBoard().begin(),board.getBoard().end(),PlayerOptions::EMPTY),9);
}

TEST_F(ABoard, X_WINS) {
	human1.setCallSign(PlayerOptions::X);
	board.makeMove(human1,0);
	board.makeMove(human1,1);
	board.makeMove(human1,2);
	
	ASSERT_THAT(board.Winner(), Eq(GameResults::X_WINS));
}

TEST_F(ABoard, 0_WINS) {
	human1.setCallSign(PlayerOptions::O);
	board.makeMove(human1,3);
	board.makeMove(human1,4);
	board.makeMove(human1,5);
	
	ASSERT_THAT(board.Winner(), Eq(GameResults::O_WINS));
}
TEST_F(ABoard, TIE) {
	human1.setCallSign(PlayerOptions::X);
	human2.setCallSign(PlayerOptions::O);
	board.makeMove(human2,0);
	board.makeMove(human2,1);
	board.makeMove(human1,2);
	board.makeMove(human1,3);
	board.makeMove(human1,4);
	board.makeMove(human2,5);
	board.makeMove(human2,6);
	board.makeMove(human2,7);
	board.makeMove(human1,8);
    board.displayBoard(); 
	
	ASSERT_THAT(board.Winner(), Eq(GameResults::TIE));
}

TEST_F(ABoard, NO_ONE_IS_WINNING_YET) {
	human1.setCallSign(PlayerOptions::X);
	human2.setCallSign(PlayerOptions::O);
	board.makeMove(human2,0);
	board.makeMove(human2,1);
	board.makeMove(human1,2);
	board.makeMove(human1,3);
	ASSERT_THAT(board.Winner(), Eq(GameResults::NO_ONE_IS_WINNING_YET));

}
