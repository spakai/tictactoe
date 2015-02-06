#include "GenericPlayer.h"

void GenericPlayer::setCallSign(PlayerOptions callSign) {
	this->callSign=callSign;
}

void GenericPlayer::setWinResult(GameResults winResult) {
	this->winResult = winResult;
}

PlayerOptions GenericPlayer::getCallSign() const {
	return callSign;
}

GameResults GenericPlayer::getWinResult() const {
	return winResult;
}

bool GenericPlayer::operator==(const GenericPlayer& other) {
	return (this->getCallSign() == other.getCallSign()); 
}

bool GenericPlayer::operator!=(const GenericPlayer& other) {
	return (this->getCallSign() != other.getCallSign()); 
}
