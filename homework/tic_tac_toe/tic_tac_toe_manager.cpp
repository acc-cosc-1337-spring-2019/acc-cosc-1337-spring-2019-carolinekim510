#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <iostream>
//Write class function implementations here


TicTacToe_Manager::TicTacToe_Manager()
{
	o_win = 0;
	tie = 0;
	x_win = 0;
}


void TicTacToe_Manager::update_winner_count(std::string winner) 
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
		tie++;
}


void TicTacToe_Manager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

std::ostream & operator << (std::ostream & out, const TicTacToe_Manager & c)
{
	for (auto c : c.games)
	{
		out << c;
	}

	out << "\nX wins: " << c.x_win;
	out << "\nO wins: " << c.o_win;
	out << "\nTies: " << c.tie << "\n\n";

	return out;

}