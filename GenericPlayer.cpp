#include "GenericPlayer.h"

void GenericPlayer::setCallSign(PlayerOptions callSign) {
	this->callSign=callSign;
}

PlayerOptions GenericPlayer::getCallSign() const {
	return callSign;
}

bool GenericPlayer::operator==(const GenericPlayer& other) {
	return (this->getCallSign() == other.getCallSign()); 
}

bool GenericPlayer::operator!=(const GenericPlayer& other) {
	return (this->getCallSign() != other.getCallSign()); 
}
