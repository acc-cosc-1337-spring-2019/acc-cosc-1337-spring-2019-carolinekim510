#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
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


void TicTacToe_Manager::save_game(std::unique_ptr<TicTacToe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));
}

std::unique_ptr<TicTacToe> TicTacToe_Manager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}
	return std::unique_ptr<TicTacToe>();
}

std::ostream & operator << (std::ostream & out, const TicTacToe_Manager & c)
{
	for (auto& c : c.games)
	{
		out << *c;
	}

	out << "\nX wins: " << c.x_win;
	out << "\nO wins: " << c.o_win;
	out << "\nTies: " << c.tie << "\n\n";

	return out;

}