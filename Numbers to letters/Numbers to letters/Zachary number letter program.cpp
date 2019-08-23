#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
// take five grades and assign them variables depending on the score
{
	int score1,
		score2,
		score3,
		score4,
		score5,
		averagescore,
		minscore,
		maxscore;

	//if (score1 > maxscore || score1 < minscore){}
	// There five scores
	cout << " Enter your first score:";
	cin >> score1;
	cout << " Enter your second score:";
	cin >> score2;
	cout << " Enter your third score:";
	cin >> score3;
	cout << " Enter your fourth score:";
	cin >> score4;
	cout << " Enter your fifth score:";
	cin >> score5;
	//calculate average score
	averagescore = (score1 + score2 + score3 + score4 + score5) / 5.0;
	cout << "Your average score is ";
	cout << averagescore << endl;


	if (averagescore >= 90)
	{
		cout << "Your grade is an A \n";
	}
	else if (averagescore >= 80)
	{
		cout << "Your grade is a B \n";
	}

	else if (averagescore >= 70)
	{
		cout << "Your grade is a C \n";
	}
	else if (averagescore >= 60)
	{
		cout << "Your grade is a D\n";
	}
	else
	{
		cout << "Your grade is an F\n";
	}
	system("pause");
	return 0;
}