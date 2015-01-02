#pragma once

#include <vector>
#include "PlayerOptions.h"
#include "GenericPlayer.h"

class GenericPlayer;

class Board {

    public:
        Board();
        std::vector<PlayerOptions>& getBoard();
        bool isValidMove(int move) const;
		void makeMove(GenericPlayer & player, int move);         
    private:
        std::vector<PlayerOptions> m_Board;
};
