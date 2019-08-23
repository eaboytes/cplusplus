#include <iostream>
using namespace std;
int main()
{
	int n;
	for (n = 5;n > 0;n--)
	{
		cout << n;
		if (n == 3)
			return 1;
	}
	system("pause");
	return 0;
}