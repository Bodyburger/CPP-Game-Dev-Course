#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void askYesOrNoQuestion();

int main()
{
	askYesOrNoQuestion();

	system("pause");
}

// Asks user to enter y or n, returns the char and prints the response.
void askYesOrNoQuestion()
{
	// Greet the user.
	welcome();

	// Create char variable and store input from getYesNo().
	char answer = getYesNo(); // getYesNo() gets y or n from the user

	// Return the response back to the user on the screen.
	printResponse(answer);
}

void welcome()
{
	// Welcomes the user to the program.
	cout << "Welcome\n";
}

char getYesNo()
{
	// Asks the user to enter y or n.
	cout << "Please answer: y or n. \n";

	// Char variable to store the response.
	char response;

	// Takes input from the user's keyboard and stores it into char.
	cin >> response;

	return response;
}

void printResponse(char responseToPrint)
{
	// Prints the user's response.
	cout << "Your answer was: " << responseToPrint << endl; 
}