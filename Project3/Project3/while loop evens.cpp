//Ask the user to enter a number, then display all even numbers from 0 to that number

#include <iostream>
#include <string>

using namespace std;

int x, y, num1;

int main()
{
	cout << "enter a number between 1 and 20" << endl;
	cin >> num1;

	x = 0;
		while (x <= num1)
	{
		cout << x << endl;
		x = x + 2;

	}
		y = 1 ;

		if (y > 5 || y < 8) {
			cout << "it works";
		}
		system("pause");
		return 0;
}
