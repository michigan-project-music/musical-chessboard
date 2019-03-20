#ifndef CHESSPIECE_H_
#define CHESSPIECE_H_

#include <stdint.h>

class Chesspiece{
    public:
        Chesspiece(int team);
        Chesspiece(int type, int team);
        static const int TYPE_PAWN = 0;
        static const int TYPE_ROOK = 1;
        static const int TYPE_QUEEN = 2;
        static const int TYPE_KING = 3;
        static const int TYPE_KNIGHT = 4;
        static const int TYPE_BISHOP = 5;

    private:
        int piece_type;
	int piece_team;
};

#endif
