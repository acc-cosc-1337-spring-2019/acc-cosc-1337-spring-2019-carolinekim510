#include "tic_tac_toe.h"
#include <string>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here

class TicTacToe_Manager
{
	int o_win;
	int tie;
	int x_win;
	std::vector<TicTacToe> games;
	void update_winner_count(std::string);

public:

	TicTacToe_Manager::TicTacToe_Manager(); // constructor
	void save_game(const TicTacToe b);
	void display_history() const;

};


#endif // !TIC_TAC_TOE_MANAGER_H
