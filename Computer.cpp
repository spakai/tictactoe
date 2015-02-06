#include "Computer.h"

int Computer::calculateMove(Board copyOfBoard, GenericPlayer & opponent) {

	for(int move{0}; move < 9 ; move++) {
		if(copyOfBoard.makeMove(*this, move)) {
			if(copyOfBoard.Winner() == (*this).getWinResult()) { 
				return move;
			}
			copyOfBoard.clearMove(move);
		}	
	}


    for(int move{0}; move < 9 ; move++) {
       if(copyOfBoard.makeMove(opponent, move)) {
            if(copyOfBoard.Winner() == opponent.getWinResult()) {
                return move;
            }
            copyOfBoard.clearMove(move);
       }
    }

	std::vector<int> priorityMoves {4,0,2,3,5,6,8,7,1}; 
	for(auto it = priorityMoves.begin(); it != priorityMoves.end(); ++it) {
		if(copyOfBoard.makeMove(*this, *it)) {
			return *it;
		}
	}

	return -1;

}
