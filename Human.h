#pragma once

#include "Board.h"
#include "GenericPlayer.h"

class Human : public GenericPlayer {
	public: 
		virtual int calculateMove(Board copyOfBoard); 
};
