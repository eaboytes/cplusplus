//Author Zachary Aboytes
//Dr Alnaji
//CS Intro to programming using C++
//
#include <iostream>
#include <string>
#include <iomanip>

int calc(int num1);//Setting values in the scope
using namespace std;

int main()
{
	int num1, x;//This is where im going execute all of the functions
	cout << "Enter a value and I will print out that 'Times Table' for you: " << endl;
	cin >> num1;
	calc(num1);
	system("pause");
	return 0;
}

int calc(int num1)//Im going to calculate each value in the multiplication table
{
	int x;
	cout << left << setw(4) << left << string(4, '*') << setw(16) << string(16, '*') << endl;
	for (x = 1; x <= 12; x++)
	{

		cout << left << setw(4) << string(4,'*') << left << setw(2) << x << left << setw(2) << "*" << left << setw(2) << num1 << left << setw(2) << "=" << left << setw(4) << x * num1 << right << setw(4) << string(4,'*') << endl;//This will print the numbers in a single line and give you a total amount at the end

	}
	cout << left << setw(4) << left << string(4, '*') << setw(16) << string(16, '*') << endl;
	return 0;
}
