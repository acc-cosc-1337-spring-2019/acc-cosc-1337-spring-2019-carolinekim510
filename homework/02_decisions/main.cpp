#include <iostream>
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
	int hours = 0;


	cout << "Enter your first letter grade: ";
	cin >> letter_grade;
	cout << "Enter your first credit hours: ";
	cin >> hours;

	int points1 = get_grade_points(letter_grade) * hours;
	int hours1 = hours;


	cout << "\nEnter your second letter grade: ";
	cin >> letter_grade;
	cout << "Enter your second credit hours: ";
	cin >> hours;

	int points2 = get_grade_points(letter_grade) * hours;
	int hours2 = hours;


	cout << "\nEnter your third letter grade: ";
	cin >> letter_grade;
	cout << "Enter your third credit hours: ";
	cin >> hours;

	int points3 = get_grade_points(letter_grade) * hours;
	int hours3 = hours;
	

	double credit_points = points1 + points2 + points3;
	int credit_hours = hours1 + hours2 + hours3;


	cout << "\nYour GPA is " << calculate_gpa(credit_hours, credit_points);

	return 0;
}