#include <string>
#include <vector>
#include <iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H



class TicTacToe 
{
public:
	bool game_over();
	void start_game(std::string first_player); // given
	void mark_board(int position);
	std::string get_player() const; // given
	//void display_board() const;
	std::string get_winner() const;
	friend std::ostream & operator << (std::ostream & out, const TicTacToe & b);
	friend std::istream & operator >> (std::istream & in, TicTacToe & b);


private:
	std::string winner;
	std::vector<std::string> pegs{ 9, " " };
	std::string next_player; //given

	void set_winner();
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();

};

#endif // !TIC_TAC_TOE_H