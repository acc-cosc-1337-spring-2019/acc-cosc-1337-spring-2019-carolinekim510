#include <iostream>;
#include "decisions.cpp"
#include "decisions.h"

//write include statements
using std::cout;
using std::cin;
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/

int main() 
{
	std::string letter_grade;
	int credit_hours;

	double credit_points =+ get_grade_points(letter_grade);
	int credit_hours =+ credit_hours;

	cout << "Enter your letter grade: ";
	cin >> letter_grade;
	//grade = get_grade_points(letter_grade);
	cout << "Enter your credit hours: ";
	cin >> credit_hours;

	cout << "Enter your letter grade: ";
	cin >> letter_grade;
	//grade = get_grade_points(letter_grade);
	cout << "Enter your credit hours: ";
	cin >> credit_hours;

	cout << "Enter your letter grade: ";
	cin >> letter_grade;
	//grade = get_grade_points(letter_grade);
	cout << "Enter your credit hours: ";
	cin >> credit_hours;

	cout << "Your GPA is " << calculate_gpa << ".";

	return 0;
}