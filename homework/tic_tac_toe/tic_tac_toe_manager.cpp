#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <iostream>
//Write class function implementations here



void TicTacToe_Manager::update_winner_count(std::string winner) 
{
	//TicTacToe board;
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

TicTacToe_Manager::TicTacToe_Manager()
{
	int o_win = 0;
	int tie = 0;
	int x_win = 0;
}


void TicTacToe_Manager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());

}


void TicTacToe_Manager::display_history() const
{
	for (int i = 0; i < games.size(); i++)
	{
		games[i].display_board();
		std::cout << " ";
	} 

	std::cout << "\nX won " << x_win << " times." << std::endl;
	std::cout << "\nO won " << o_win << " times." << std::endl;

}