//Author Zachary Aboytes
//CS.M10A.78574 Fall 2018
//Letters to Numbers
//August 28, 2018

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//This program averages 5 test scores
int main()
{
	int score1,
		score2,
		score3,
		score4,
		score5,
		avgscore;

	//get test scores
	cout << "Enter your 5 test scores and I will tell you your grade \n";
	cout << "Please enter your first test score and press return:";
	cin >> score1;
	cout << "Please enter your Second score and press return:";
	cin >> score2;
	cout << "Please enter your Third score and press return:";
	cin >> score3;
	cout << "Please enter your Fourth score and press return:";
	cin >> score4;
	cout << "Please enter your Fifth score and press return:";
	cin >> score5;

	//calculate the average score
	avgscore = (score1 + score2 + score3 + score4 + score5) / 5.0;

	if (avgscore >= 90) {
		cout << "Your grade is A\n";
	}
	else if (avgscore >= 80) {
		cout << "Your grade is B\n";
	}
	else if (avgscore >= 70) {
		cout << "Your grade is C \n";
	}
	else if (avgscore >= 60) {
		cout << "Your grade is D \n";
	}
	else {
		cout << "Your Grade is F \n";
	}

	system("pause");
	return 0;
}
