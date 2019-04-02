#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Game 3X3 Test win by FIRST COLUMN [X wins first column]")
{
	/* Tic Tac Toe Board 3X3
			1 2 3
			4 5 6
			7 8 9
	*/
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Game 3X3 Test win by SECOND COLUMN [X wins second column]")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(2);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test win by THRID COLUMN [X wins third column]")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(3);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test win by FIRST ROW [X wins first row]")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test win by SECOND ROW [X wins second row]")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test win by THIRD ROW [X wins thrid row]")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(7);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test win by DIAGONALLY (top left to bottom right) - X wins")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test win by DIAGONALLY (bottom left to top right)- X wins")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(7);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 3X3 Test for NO winner")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//O NO winners!
	REQUIRE(board->game_over() == false);
	delete board;
}

TEST_CASE("Game 3X3 Test for winner C")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//O NO winners!
	REQUIRE(board->get_winner() == "C");
	delete board;

}

TEST_CASE("Game 3x3 Test for winner X")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//X

	REQUIRE(board->get_winner() == "X");
	delete board;
}

TEST_CASE("Test for winner O")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X

	REQUIRE(board->get_winner() == "O");
	delete board;
}





// Test board for 4X4

TEST_CASE("Game 4X4 Test win by FIRST COLUMN [X wins first column]")
{
	/* Tic Tac Toe Board 4X4
			1   2   3   4
			5   6   7   8
			9   10  11  12
			13  14  15  16
	*/
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(11);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Game 4X4 Test win by SECOND COLUMN [X wins second column]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(2);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(11);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test win by THRID COLUMN [X wins third column]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(3);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test win by FOURTH COLUMN [X wins fourth column]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test win by FIRST ROW [X wins first row]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test win by SECOND ROW [X wins second row]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(5);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Game 4X4 Test win by THIRD ROW [X wins third row]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(9);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Game 4X4 Test win by FOURTH ROW [X wins fourth row]")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(13);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test win by DIAGONALLY (top left to bottom right) - X wins")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(11);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test win by DIAGONALLY (bottom left to top right)- X wins")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(4);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	// X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);	//X wins!
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Game 4X4 Test for NO winner")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(16);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	// NO WINNER!
	delete board;
}


TEST_CASE("Game 4X4 Test for winner O")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");
	REQUIRE(board->game_over() == false);

	board->mark_board(1);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);	//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);	//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);	//O WINS!

	REQUIRE(board->get_winner() == "O");
	delete board;
}