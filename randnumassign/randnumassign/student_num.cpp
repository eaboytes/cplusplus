//Author Zachary Aboytes
//CS.M10A.78574 Fall 2018
//September 16, 2018

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int randomnumber, x;
	string myStudents[10];
	srand(time(0));
	for (x = 0; x < 10; x++) 
	{
	cout << "Please enter student name:"; //tells the user to type in a students name
	cin >> myStudents[x];  //receives student's name and puts it in an array
    }
	for (x = 0; x < 10; x++) 
	{
		randomnumber = rand() % 1000 + 1;//generates a random number between 1 and 1000
		cout << myStudents[x] << "::" << randomnumber << endl;//shows students name and assigned random number
	}
	system("pause");
	return 0;
}