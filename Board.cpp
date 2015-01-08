#include "Board.h"

Board::Board() {
    m_Board.assign(9,PlayerOptions::EMPTY);
}

std::vector<PlayerOptions>& Board::getBoard() {
    return m_Board;
}

bool Board::isValidMove(int move) const {

    if(m_Board[move] == PlayerOptions::EMPTY) {
        return true;
    }

    return false;
}

bool Board::makeMove(GenericPlayer & player, int move)  {
	if(isValidMove(move)) {
		m_Board[move] = player.getCallSign();
		return true;
	}

	return false;
}

PlayerOptions Board::Winner() {
	// Michael Dawson : Beggining C++ Through Game Programming
	const int WINNING_ROWS[8][3] = {{0,1,2},
									{3,4,5},
									{6,7,8},
									{0,3,6},
									{1,4,7},
									{2,5,8},
									{0,4,8},
									{2,4,6}};

	for(int row = 0 ; row < 8 ; row++) {
		if ( (m_Board[WINNING_ROWS[row][0]] != PlayerOptions::EMPTY) &&
			(m_Board[WINNING_ROWS[row][0]] == m_Board[WINNING_ROWS[row][1]]) &&
			(m_Board[WINNING_ROWS[row][1]] == m_Board[WINNING_ROWS[row][2]]) )
		{
			return m_Board[WINNING_ROWS[row][0]];
		}
			
	}	
}
