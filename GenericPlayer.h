#include "PlayerOptions.h"
#include "Board.h"

class GenericPlayer {
    protected:
        PlayerOptions callSign;
    public:
        virtual int calculateMove(Board copyOfBoard) = 0 ;
        void setCallSign();
        PlayerOptions getCallSign() const;
};
