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
		bool makeMove(GenericPlayer & player, int move);        
		PlayerOptions Winner(); 
    private:
        std::vector<PlayerOptions> m_Board;
};
