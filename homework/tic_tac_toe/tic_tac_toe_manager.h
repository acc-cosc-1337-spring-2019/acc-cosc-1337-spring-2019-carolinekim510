#include "tic_tac_toe.h"
#include <string>
#include <memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here

class TicTacToe_Manager
{
public:
	TicTacToe_Manager(); // constructor
	void save_game(std::unique_ptr<TicTacToe>& b);
	std::unique_ptr<TicTacToe> get_game(int game_type);
	friend std::ostream & operator << (std::ostream & out, const TicTacToe_Manager & c);

private:
	int o_win;
	int tie;
	int x_win;
	std::vector<std::unique_ptr<TicTacToe>> games;
	void update_winner_count(std::string);

};


#endif // !TIC_TAC_TOE_MANAGER_H
