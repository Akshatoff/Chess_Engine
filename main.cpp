#include <iostream>
#include <cstdint>
#include <vector>

//Representing pieces and board square using bitbaords
//Bitboard basically is 64bit
//This makes it easier to perform operation on this and something else i guess

//Board declaration



typedef uint64_t U64; //Representing our bitboard


//Piece declaraiton

enum piece_type
{
	PAWN,
	KNIGHT,
	BISHOP,
	KING,
	QUEEN,
	ROOK
};

enum color
{
	WHITE,
	BLACK
};

//Defining the starting position

U64 bitboards [12] = {0ULL}; //Array of bitboard which stores pawns, knight, kings etc.

//Function to setup starting positoin
void setupStartingPosition(){
	bitboards[PAWN | WHITE] = 0b11111111; // Set all 8 white pawn bits
    bitboards[ROOK | WHITE] = 0b1000000000000001; // Set bits for white rooks
    bitboards[KNIGHT | WHITE] = 0b0100000000010000; // Set bits for white knights
    bitboards[BISHOP | WHITE] = 0b0010000000000100; // Set bits for white bishops
    bitboards[QUEEN | WHITE] = 0b0001000000000000; // Set bit for white queen
    bitboards[KING | WHITE] = 0b0000100000000000; // Set bit for white king

    // Black pieces
    bitboards[PAWN | BLACK] = 0b11111111000000000; // Set all 8 black pawn bits
    bitboards[ROOK | BLACK] = 0b1000000000000001000000000000000; // Set bits for black rooks
    bitboards[KNIGHT | BLACK] = 0b0100000000010000000000000000000; // Set bits for black knights
    bitboards[BISHOP | BLACK] = 0b0010000000000100000000000000000; // Set bits for black bishops
    bitboards[QUEEN | BLACK] = 0b0000000000000000000000000001000; // Set bit for black queen
    bitboards[KING | BLACK] = 0b0000000000000000000000000000100; // Set bit for black king

}

void visulaiseBoard(U64 bitboards[]) {
	std::vector<std::vector<char>> board = {
		{'r','n','b','q','k','b','n','r'},
		{'p', 'p', 'p','p','p','p','p','p',},
		{'.', '.', '.', '.' ,'.','.','.','.',},
		{'.', '.', '.', '.' ,'.','.','.','.',},
		{'.', '.', '.', '.' ,'.','.','.','.',},
		{'p', 'p', 'p','p','p','p','p','p',},
		{'r','n','b','q','k','b','n','r'},
	};
std::cout << board << "\n";
}


int main()
{
	std::cout << "This is my chess engine which I dont understand at all" << "\n";
	setupStartingPosition();
	std::cout << "I ssetup the board i think yeahhhhh" << "\n";
	visulaiseBoard(bitboards);
	return 0;
}
