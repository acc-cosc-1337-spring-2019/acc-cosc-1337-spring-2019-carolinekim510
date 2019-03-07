#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player X") 
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Test game over")
{
	TicTacToe board;
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test set first player X")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test set first player O")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test win by FIRST COLUMN - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);	//X wins!
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by SECOND COLUMN - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(2);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(6);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test win by THRID COLUMN - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(3);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test win by FIRST ROW - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test win by SECOND ROW - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(4);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	// X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test win by THIRD ROW - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(7);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);	// X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test win by DIAGONALLY (top left) - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	// X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test win by DIAGONALLY (bottom left)- X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(7);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	// X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//X wins!
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test for NO winner")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(6);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);	//O NO winners!
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test for winner C")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(6);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//O NO winners!
	REQUIRE(board.get_winner() == "C");

}

TEST_CASE("Test for winner X")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);	//X

	REQUIRE(board.get_winner() == "X");

}

TEST_CASE("Test for winner O")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);

	board.mark_board(1);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);	//X
	REQUIRE(board.game_over() == false);
	board.mark_board(6);	//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);	//X

	REQUIRE(board.get_winner() == "O");

}