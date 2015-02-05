#pragma once

#include "Board.h"
#include "GenericPlayer.h"

class Computer : public GenericPlayer {
	public: 
		virtual int calculateMove(Board copyOfBoard); 
};
