#include "tic_tac_toe.h"
#include "math.h"
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


// Win by column if 0,3,6 are equal, 1,4,7 and 2,5,8
bool TicTacToe::check_column_win()
{	
	return false;
}


bool TicTacToe::check_row_win()
{	
	return false;
}

bool TicTacToe::check_diagonal_win()
{
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


std::ostream & operator<<(std::ostream & out, const TicTacToe & b)
{
	out << "\nEnter position for " << b.get_player() << " ";

	for (std::size_t i = 0; i < b.pegs.size(); i+= sqrt(b.pegs.size()))
	{
		std::cout << b.pegs[i] << "|" << b.pegs[i + 1] << "|" << b.pegs[i + 2];

		if (b.pegs.size() == 16)
		{
			std::cout << "|" << b.pegs[i + 3];
		}
	}
	out << "\n";

	return out;
}


std::istream & operator>>(std::istream & in, TicTacToe & b)
{
	int position;
	std::cout << "Enter position: ";
	in >> position;
	b.mark_board(position);
	return in;
}