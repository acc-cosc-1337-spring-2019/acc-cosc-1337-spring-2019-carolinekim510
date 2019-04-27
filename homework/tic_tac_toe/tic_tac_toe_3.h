#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3
#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe 
{
public:
	TicTacToe3() : TicTacToe(GameType::three) {}
	TicTacToe3(std::vector<std::string> s);
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};
#endif // !TIC_TAC_TOE_3
