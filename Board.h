#pragma once

#include <vector>
#include "PlayerOptions.h"
#include "GenericPlayer.h"
#include "GameResults.h"

class GenericPlayer;

class Board {

    public:
        Board();
        std::vector<PlayerOptions>& getBoard();
		bool makeMove(GenericPlayer & player, int move);        
		GameResults Winner(); 
    private:
        std::vector<PlayerOptions> m_Board;
		bool isValidMove(int move) const;
	
};
