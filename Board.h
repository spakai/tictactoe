#include <vector>

class Board {

    public:
        Board();
        enum state {X,O,EMPTY};
        std::vector<int>& getBoard();
         
    private:
        std::vector<int> m_Board;
};
