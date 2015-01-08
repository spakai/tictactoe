#include "GenericPlayer.h"

void GenericPlayer::setCallSign(PlayerOptions callSign) {
	this->callSign=callSign;
}

PlayerOptions GenericPlayer::getCallSign() const {
	return callSign;
}

