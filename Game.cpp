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
	return (currentPlayer == static_cast<GenericPlayer&>(PlayerOne) ? PlayerTwo : PlayerOne); 
}

GameResults Game::runGame() {
    Board board;
    GenericPlayer & currentPlayer = whoPlaysFirst();
 
    while(board.Winner() == GameResults::NO_ONE_IS_WINNING_YET) {
        int move = currentPlayer.calculateMove(board,opponent(currentPlayer));
        int ret = board.makeMove(currentPlayer, move) ;
        std::cout << ret  << "," << move << std::endl;
        currentPlayer = opponent(currentPlayer);
        board.displayBoard();
    }  
    return board.Winner();
      
}
