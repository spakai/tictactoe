#pragma once

#include "Board.h"
#include "PlayerOptions.h"
#include "GameResults.h"

class Board;

class GenericPlayer {
    protected:
        PlayerOptions callSign;
		GameResults winResult;
    public:
        virtual int calculateMove(Board copyOfBoard, GenericPlayer & opponent)=0;
        void setCallSign(PlayerOptions callSign);
        PlayerOptions getCallSign() const;
		void setWinResult(GameResults winResult);
		GameResults getWinResult() const;
		bool operator==(const GenericPlayer& other);
		bool operator!=(const GenericPlayer& other);
};
