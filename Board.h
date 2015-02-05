#pragma once

#include <vector>
#include <algorithm>
#include "GenericPlayer.h"
#include "PlayerOptions.h"
#include "GameResults.h"

class GenericPlayer;

class Board {

    public:
        Board();
        std::vector<PlayerOptions>& getBoard();
		bool makeMove(const GenericPlayer & player, const int move);      
 		void clearMove(const int move);      
		GameResults Winner() const; 
    private:
        std::vector<PlayerOptions> m_Board;
		bool isValidMove(const int move) const;
	
};
