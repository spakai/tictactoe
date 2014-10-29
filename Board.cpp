#include "Board.h"

Board::Board() {
    state empty = EMPTY;
    m_Board.assign(9, empty);
}

std::vector<int>& Board::getBoard() {
    return m_Board;
}
