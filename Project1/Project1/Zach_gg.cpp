//Author Zachary Aboytes
//CS.M10A.78574 Fall 2018
//Lab Guessing Game
//August 28, 2018

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//Program Asks user to guess at a random number
//User is given three chances to guess before number is revealed
int main()
{
	int randomnumber,
		guess2,
		guess3,
		guess;
	srand(time(0));

	//Next line generates a random number between 1 and 10
	randomnumber = rand() % 10 + 1;

	cout << "Try to guess my favorite number by entering a number between 1 and 10 and pressing return" << endl;
	cin >> guess;
	
	//If the user guesses correctly the program exits
	if (randomnumber == guess) {
		cout << "You got it" << endl;
		system("pause");
		return 0;
	}

	//If the user guesses incorrectly the first time, program lets them know
	//if their next guess should be higher or lower.
	if (guess < randomnumber) {
		cout << "Guess higher" << endl;
	}
	else {
		cout << "Guess lower" << endl;
	}
	
	//program allows user to guess a second time
	cin >> guess2;

	if (randomnumber == guess2) {
		cout << "You got it" << endl;
		system("pause");
		return 0;

	}

	if (guess2 < randomnumber) {
		cout << "Guess higher" << endl;
	}
	else {
		cout << "Guess lower" << endl;
	}


	//On the user's last guess they must get it right or the number is revealed
	cin >> guess3;

	if (randomnumber == guess3) {
		cout << "You got it" << endl;
		system("pause");
		return 0;
	}

	else {
		cout << "Nice Try!" << "  My favorite number is " << randomnumber << endl;
	}
	system("pause");
		return 0;
}