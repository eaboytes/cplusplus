//Ask a user to enter a number, then display the numbers from that number to 0 in descending order

#include <iostream>
#include <string>

using namespace std;

int num1;

int main()
{
	cout << "please enter a number\n";
	cin >> num1;

	while (num1 >= 0)
	{
		cout << num1 << endl;
		num1 = num1 - 1;
	}
	system("pause");
	return 0;
}

