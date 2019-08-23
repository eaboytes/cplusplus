//Author Zachary Aboytes
//CS M10A Intro-Programming Using C++
//Professor Alnaji
//This program calculates how much to pay employees per hours worked
#include <iostream>
#include <ctime>
#include <string>

using namespace std;
int x, hrs_wrkd, c, rate[4], pay, p; //declaring all of the variables
//string pos;
int main()
{
	rate[1] = 15; //rate for independent employee
	rate[2] = 25; //rate for manager
	rate[3] = 40; //rate for principle
	cout << "Enter your position\n"; //Tells the user to enter his or her employee type
	cout << "1. Independent employee\n"; // rate[1]
	cout << "2. Manager\n"; // rate[2]
	cout << "3. Principle\n"; // rate[3]
	cin >> p;
	switch (p) 
	{
	case 1: break; //valid entry
	case 2: break; //valid entry
	case 3: break; //valid entry
	default: cout << "Enter a valid number between 1 and 3" << endl; main(); return 0; //if user enters an invaild value the program returns them to the beginning
	}
	cout << "Enter your hours worked" << endl; 
	cin >> hrs_wrkd; //user enters the total ammount of hours they worked
	pay = rate[p] * hrs_wrkd;
	cout << "$" << pay << " is your gross pay" << endl; //This shows the user the total gross pay
	system("pause");
	return 0;
}
