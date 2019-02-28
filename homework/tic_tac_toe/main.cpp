#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
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
			cout << "\n\nWinner!";
		}
		cout << "\nEnter 1 to Play again, any other key to exit ";
		cin >> choice;

	} while (choice == 1);
}