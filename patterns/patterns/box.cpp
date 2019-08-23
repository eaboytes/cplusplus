#include <iostream>
#include <string>
using namespace std;
char mychar;
int x;
int y;
string e;
int main()
{
	for (y = 0; y < 10; y++)
	{
		for (x = 0;x < 10;x++)
		{
			if (x < 5 && y < 5)
			{
				mychar = '*';
				e = "";
			}
			else if (x == 9)
			{
				mychar = '=';
				e = '\n';
			}
			else
			{
				mychar = '=';
				e = "";
			}
			cout << mychar << e;
		}
	}
	system("pause");
}
