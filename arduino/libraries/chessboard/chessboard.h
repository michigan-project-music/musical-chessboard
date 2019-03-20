#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_

#include "chesspiece.h"

class Chessboard{
    public:
	Chessboard();
        Chesspiece getPiece(int row, int column);
        void setPiece(int row, int column);
    private:
        Chesspiece pieces[64];
};


#endif
