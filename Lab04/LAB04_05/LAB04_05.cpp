#include <iostream>
using namespace std;
int main()
{
	//randiom number between 1-100 and user guess
	srand(time(0));
	int randomNumber = rand() % 100 + 1;
	int userGuess;
	cout << "Guess a number between 1 and 100: ";
	do {
		
		cin >> userGuess;
		if (userGuess < randomNumber) {
			cout << "Too low! Try again." << endl;
		}
		else if (userGuess > randomNumber) {
			cout << "Too high! Try again." << endl;
		}
		
		cin.ignore();

	}
	while (userGuess != randomNumber);
	cout << "Congratulations! You guessed the number!" << endl;
	

}
