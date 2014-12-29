#include "Board.h"

Board::Board() {
    m_Board.assign(9,PlayerOptions::EMPTY);
}

std::vector<PlayerOptions>& Board::getBoard() {
    return m_Board;
}
