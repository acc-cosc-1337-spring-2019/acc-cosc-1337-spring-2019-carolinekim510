#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>
#include <iostream>

using std::cout; using std::cin;


int main() 
{
	std::string first;
	char choice;
	std::unique_ptr<TicTacToeManager>manager=std::make_unique<TicTacToeManager>();
	int game_choice;
	GameType type;
	std::unique_ptr<TicTacToe> tic_tac_toe;

	do 
	{
		cout << "Tic tac toe 3 or 4: ";
		cin >> game_choice;

		tic_tac_toe = manager->get_game((GameType)game_choice);

		cout << "First player: ";
		cin >> first;
		tic_tac_toe->start_game(first);

		while (tic_tac_toe->game_over() == false) 
		{
			cin >> *tic_tac_toe;
			cout << *tic_tac_toe;
			cout << "\n\n";
		}

		cout<<"Winner: " << tic_tac_toe->get_winner();

		manager->save_game(std::move(tic_tac_toe));

		cout << " Play again?";
		cin >> choice;

	} while (choice == 'y');

	cout<<manager;

	return 0;
}