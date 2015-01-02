#include "GenericPlayer.h"

void GenericPlayer::setCallSign() {
	callSign=PlayerOptions::X;
}

PlayerOptions GenericPlayer::getCallSign() const {
	return callSign;
}

