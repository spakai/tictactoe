#pragma once

#include "Board.h"
#include "PlayerOptions.h"

class Board;

class GenericPlayer {
    protected:
        PlayerOptions callSign;
    public:
        virtual int calculateMove(Board copyOfBoard)=0;
        void setCallSign(PlayerOptions callSign);
        PlayerOptions getCallSign() const;
		bool operator==(const GenericPlayer& other);
		bool operator!=(const GenericPlayer& other);
};
