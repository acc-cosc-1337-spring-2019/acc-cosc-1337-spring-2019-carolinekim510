#include<string>
#include<vector>



class TicTacToe 
{
public:
	bool game_over();
	void start_game(std::string first_player); // given
	void mark_board(int position);
	std::string get_player() const; // given
	void display_board() const;
private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	std::vector<std::string> pegs{ 9, " " };
	std::string next_player; //given
};