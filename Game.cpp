#include "Game.h"
#include "Board.h"

Game::Game(GenericPlayer & PlayerOne, GenericPlayer & PlayerTwo) : PlayerOne(PlayerOne), PlayerTwo(PlayerTwo)
{
	PlayerOne.setCallSign(PlayerOptions::X);
	PlayerOne.setWinResult(GameResults::X_WINS);
	PlayerTwo.setCallSign(PlayerOptions::O);
	PlayerTwo.setWinResult(GameResults::O_WINS);
}

GenericPlayer & Game::whoPlaysFirst() {
	return PlayerOne;
}

GenericPlayer & Game::getPlayerOne() {
	return PlayerOne;
}

GenericPlayer & Game::getPlayerTwo() {
	return PlayerTwo;
}

GenericPlayer & Game::opponent(GenericPlayer& currentPlayer) {
	return (currentPlayer == dynamic_cast<GenericPlayer&>(PlayerOne) ? PlayerTwo : PlayerOne); 
}

GameResults Game::runGame() {
    Board board;
    int turn=0;
    while(board.Winner() == GameResults::NO_ONE_IS_WINNING_YET) {
        if(turn % 2 == 0) {
            int move = PlayerOne.calculateMove(board,opponent(PlayerOne));
            int ret = board.makeMove(PlayerOne, move) ;
        } else {
            int move = PlayerTwo.calculateMove(board,opponent(PlayerTwo));
            int ret = board.makeMove(PlayerTwo, move) ;
        }
        turn++;
        board.displayBoard();
 
    }  
 
    return board.Winner();
      
}
