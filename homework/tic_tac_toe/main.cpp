#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	TicTacToe_Manager manager;
	int choice;
	int position;
	string a;
	int size;		//to pick a board

	do
	{	
		cout << "ENTER 3 to play 3X3 or ENTER 4 to play 4X4: ";
		cin >> size;
		cout << "Pick first player X or O: ";
		cin >> a;
		TicTacToe board(size);		//Can't creat the board yet becuase the user hasn't put which board they are going to play
									//It's now created the object with excepting parameter called size

		board.start_game(a);
		
		while (board.game_over() != true)
		{
			cout << board;
			cin >> board;
		} 

		if (board.game_over() == true)
		{
			manager.save_game(board);
		}
		cout << "\nEnter 1 to Play again, any other key to exit ";
		cin >> choice;

	} while (choice == 1);
	//manager.display_history();
	cout << manager;

	system("pause");
}