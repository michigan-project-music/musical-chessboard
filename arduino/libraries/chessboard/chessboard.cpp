#include "chessboard.h"

Chessboard::Chessboard(){
	//we want to initialize the first chessboard...
	//team 0 and team 1
	Chesspiece rook0 = Chesspiece(Chesspiece::TYPE_ROOK, TEAM0);
	Chesspiece pawn0 = Chesspiece(Chesspiece::TYPE_PAWN, TEAM0);
	Chesspiece bishop0 = Chesspiece(Chesspiece::TYPE_BISHOP, TEAM0);
	Chesspiece knight0 = Chesspiece(Chesspiece::TYPE_KNIGHT, TEAM0);
	Chesspiece king0 = Chesspiece(Chesspiece::TYPE_KING, TEAM0);
	Chesspiece queen0 = Chesspiece(Chesspiece::TYPE_QUEEN, TEAM0);

	Chesspiece rook1 = Chesspiece(Chesspiece::TYPE_ROOK, TEAM1);
	Chesspiece pawn1 = Chesspiece(Chesspiece::TYPE_PAWN, TEAM1);
	Chesspiece bishop1 = Chesspiece(Chesspiece::TYPE_BISHOP, TEAM1);
	Chesspiece knight1 = Chesspiece(Chesspiece::TYPE_KNIGHT, TEAM1);
	Chesspiece king1 = Chesspiece(Chesspiece::TYPE_KING, TEAM1);
	Chesspiece queen1 = Chesspiece(Chesspiece::TYPE_QUEEN, TEAM1);

	//now we have all of our chesspieces... let's populate the array!
	//note:: we will have 0,0 be top left and 7,7 be bottom right
	//note:: we will have team0 be the top and team1 be the bottom
	setPiece(0, 7, rook1);
	setPiece(1, 7, knight1);
	setPiece(2, 7, bishop1);
	setPiece(3, 7, queen1);
	setPiece(4, 7, king1);
	setPiece(5, 7, bishop1);
	setPiece(6, 7, knight1);
	setPiece(7, 7, rook1);
	for (int i = 0; i < 7; i++){
		setPiece(i, 6, pawn1);
	}

	setPiece(0, 0, rook0);
	setPiece(1, 0, knight0);
	setPiece(2, 0, bishop0);
	setPiece(3, 0, queen0);
	setPiece(4, 0, king0);
	setPiece(5, 0, bishop0);
	setPiece(6, 0, knight0);
	setPiece(7, 0, rook0);
	for (int i = 0; i < 7; i++){
		setPiece(i, 1, pawn0);
	}
	//done! the board is initialzied.
}


void Chessboard::setPiece(int row, int column, Chesspiece piece){
	//we want to get the appropriate chess piece from the row/column representation...
	pieces[row * 8 + column] = piece;
}


Chesspiece Chessboard::getPiece(int row, int column){
	return pieces[row * 8 + column]
}

