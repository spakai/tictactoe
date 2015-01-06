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
