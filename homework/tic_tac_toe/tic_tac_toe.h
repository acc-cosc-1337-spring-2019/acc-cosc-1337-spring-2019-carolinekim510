#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe 
{
public:
	TicTacToe(int size) : pegs(size * size, " ") {}
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const;
	//void display_board() const;
	string get_winner() const;
	friend std::ostream & operator << (std::ostream & out, const TicTacToe & b);
	friend std::istream & operator >> (std::istream & in, TicTacToe & b);

protected:
	vector<string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	string winner;
	string next_player;
	void set_winner();
	void set_next_player();
	void clear_board();
	bool check_board_full();

};

#endif // !TIC_TAC_TOE_H