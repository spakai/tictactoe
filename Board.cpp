#include "Board.h"

Board::Board() {
    m_Board.assign(9,PlayerOptions::EMPTY);
}

std::vector<PlayerOptions>& Board::getBoard() {
    return m_Board;
}

bool Board::isValidMove(const int move) const {

    if(m_Board[move] == PlayerOptions::EMPTY) {
        return true;
    }

    return false;
}

bool Board::makeMove(const GenericPlayer & player, const int move)  {
	if(isValidMove(move)) {
		m_Board[move] = player.getCallSign();
		return true;
	}

	return false;
}

void Board::clearMove(const int move) {
	m_Board[move] = PlayerOptions::EMPTY;
}      
	

GameResults Board::Winner() const {
	// Michael Dawson : Begining C++ Through Game Programming
    const int WINNING_ROWS[8][3] = {{0,1,2},
                                    {3,4,5},
                                    {6,7,8},
                                    {0,3,6},
                                    {1,4,7},
                                    {2,5,8},
                                    {0,4,8},
                                    {2,4,6}};

    for(int row=0; row < 8 ; row++) {
        if ((m_Board[WINNING_ROWS[row][0]] == m_Board[WINNING_ROWS[row][1]]) &&
            (m_Board[WINNING_ROWS[row][1]] == m_Board[WINNING_ROWS[row][2]])) {

            if(m_Board[WINNING_ROWS[row][0]] == PlayerOptions::X)
                return GameResults::X_WINS; 
			
            if(m_Board[WINNING_ROWS[row][0]] == PlayerOptions::O)
                return GameResults::O_WINS; 
			
        }
    }
			

    if(std::count(m_Board.begin(),m_Board.end(),PlayerOptions::EMPTY) == 0) {
        return GameResults::TIE;
    }


    return GameResults::NO_ONE_IS_WINNING_YET;

	
}
void Board::displayBoard() const {
    for(auto it = m_Board.begin() ; it != m_Board.end() ; ++it) {
        if((*it) == PlayerOptions::X) {
            std::cout << "X ";
        } else if((*it) == PlayerOptions::O) {
            std::cout << "O ";
        } else {
            std::cout << "-  ";
        }
    }
}
