#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	TicTacToe_Manager manager;
	TicTacToe board;
	int choice;
	int position;
	string a;

	do
	{
		cout << "Pick first player X or O: ";
		cin >> a;
		board.start_game(a);
		
		while (board.game_over() != true)
		{
			cout << "\nEnter position for " << board.get_player() << " ";
			cin >> position;
			board.mark_board(position);
			board.display_board();
		} 

		if (board.game_over() == true)
		{
			manager.save_game(board);
			//cout << "\n\n" << board.display_history() << " is the Winner";

		}
		cout << "\nEnter 1 to Play again, any other key to exit ";
		cin >> choice;

	} while (choice == 1);
	manager.display_history();

	system("pause");
}