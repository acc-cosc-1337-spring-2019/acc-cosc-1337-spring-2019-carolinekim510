#include "tic_tac_toe.h"
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;


bool TicTacToe::game_over()		// true: game wins
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		set_winner();
		return true;
	}
	return false;

}


void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
	clear_board();
}


void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	
	if (game_over() == false)
	{
		set_next_player();
	}
}


void TicTacToe::set_winner()
{
	
	if (check_board_full() == true)
	{
		winner = "C";
	}
	else {
		winner = next_player;
	}
	
}


std::string TicTacToe::get_winner() const
{
	return winner;
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}


std::string TicTacToe::get_player() const
{
	return next_player;
}


void TicTacToe::display_board() const
{
	for (std::size_t i = 0; i < 9; i++)
	{
		if (i != 0 && (i % 3 == 0))
		{
			cout << "\n";
		}
		else if (i % 3 != 0)
		{
			cout << " |";
		}
		else
		{
			cout << "\n";
		}

			cout << pegs[i];
	}
	cout << "\n";
}


// Win by column if 0,3,6 are equal, 1,4,7 and 2,5,8
bool TicTacToe::check_column_win()
{	
	if (pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[6] != " ")
	{
		return true;
	}
	else if (pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[7] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[5] && pegs[5] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
		return false;
}


bool TicTacToe::check_row_win()
{	
	if (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] != " ")
	{
		return true;
	}
	else if (pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[5] != " ")
	{
		return true;
	}
	else if (pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
	{
		return true;
	}
	return false;
}

void TicTacToe::clear_board()
{
	for (std::size_t i = 0; i < pegs.size(); i++)
	{
		pegs[i] = " ";
	}
}


bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}