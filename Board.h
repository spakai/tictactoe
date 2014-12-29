#include <vector>
#include "PlayerOptions.h"

class Board {

    public:
        Board();
        std::vector<PlayerOptions>& getBoard();
         
    private:
        std::vector<PlayerOptions> m_Board;
};
