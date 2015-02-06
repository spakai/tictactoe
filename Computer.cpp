#include "Computer.h"

int Computer::calculateMove(Board copyOfBoard, GenericPlayer & opponent) {

	for(int move{0}; move < 9 ; move++) {
		if(copyOfBoard.makeMove(*this, move)) {
			if(copyOfBoard.Winner() == GameResults::O_WINS) { 
				return move;
			}
			copyOfBoard.clearMove(move);
		}	
	}

	return -1;

}
