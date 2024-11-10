// Chp5_Random_numberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>  // For time()
using namespace std;

int main() {
	// Introductory Statement
	cout << "Welcome to the Random Number Guessing Game!" << endl;
	cout << "The program will generate a random number, and your task is to guess it." << endl;

	// Seed the random number generator 
	srand(static_cast<unsigned int> (time(0)));
	int randomNumber = rand() % 100 + 1;  // Generates a random number between 1 and 100
	int userGuess;

	// Game Loop
	do {
		cout << "Enter your guess (bewteen 1 and 100):";
		cin >> userGuess;

		if (userGuess > randomNumber) {
			cout << "Too high, try again." << endl;
		}
		else if (userGuess < randomNumber) {
			cout << "Too low, try again." << endl;
		}
		else {
			cout << "Congratulations! You guessed the number correctly." << endl;
		}
	} while (userGuess != randomNumber);

	return 0;
}

