#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_

#include "chesspiece.h"

class Chessboard{
    public:
	Chessboard();
        Chesspiece getPiece(int row, int column);
        void setPiece(int row, int column, Chesspiece piece);

	//returns the KO'd chesspiece if applicable
	Chesspiece movePiece(int row, int column, int row_new, int column_new);

	//maybe we should override the operator= here as well? Something to think about....

    private:
        Chesspiece pieces[64];
};


#endif
