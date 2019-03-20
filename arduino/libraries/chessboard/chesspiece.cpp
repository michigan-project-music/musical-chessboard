#include "chesspiece.h"

Chesspiece::Chesspiece(int team){
    piece_team = team;
    piece_type = TYPE_PAWN;
}

Chesspiece::Chesspiece(int type, int team){
    piece_team = team;
    piece_type = type;
}
