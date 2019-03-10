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


/*
void TicTacToe_Manager::display_history() const
{
	for (int i = 0; i < games.size(); i++)
	{
		games[i].display_board();
	} 

	std::cout << "\nX wins: " << x_win;
	std::cout << "\nO wins: " << o_win;
	std::cout << "\nTies: " << tie << "\n\n";
}
*/

std::ostream & operator << (std::ostream & out, const TicTacToe_Manager & c)
{
	for (int i = 0; i < c.save_game.size(); i++)
	{
		out << c.display_history;
	}

	out << "\nX wins: " << c.x_win;
	out << "\nO wins: " << c.o_win;
	out << "\nTies: " << c.tie << "\n\n";

	return out;

}