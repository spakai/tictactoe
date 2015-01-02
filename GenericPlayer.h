#pragma once

#include "Board.h"
#include "PlayerOptions.h"

class Board;

class GenericPlayer {
    protected:
        PlayerOptions callSign;
    public:
        virtual int calculateMove(Board copyOfBoard)=0;
        void setCallSign();
        PlayerOptions getCallSign() const;
};
