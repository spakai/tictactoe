#include <vector>
#include "PlayerOptions.h"

class Board {

    public:
        Board();
        std::vector<PlayerOptions>& getBoard();
        bool isValidMove(int move) const;
         
    private:
        std::vector<PlayerOptions> m_Board;
};
