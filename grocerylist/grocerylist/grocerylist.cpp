#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int x;
string item[10], current_item;
double price[10], total, current_price;

int main()
{
	do
	{
		cout << "Enter your item (Enter 'done' if there are no more items)" << endl;
		cin >> item[x];
		cout << "Enter price of that item (Enter '0' if there are no more prices)" << endl;
		cin >> price[x];
		current_item = item[x];
		current_price = price[x];
		x++;
	}while (current_item != "done" && current_price != 0.0);
	
	for (x = 0;x < 10; x++)
	{
		total = total + price[x];
	}

	cout << string(20, '*') << endl;
	
	cout << left << setw(15) << "ITEM";
	cout << left << setw(5) << "PRICE";
	cout << '\n';
	cout << string(20, '*') << endl;
	
	x = 0;
	do
	{
	cout << left << setw(15) << item[x];
	cout << left << setw(5) << price[x];
	cout << '\n';
	x++;
	} while (price[x] != 0);
	
	cout << string(20, '-') << endl;
	cout << left << setw(15) << "TOTAL";
	cout << left << setw(5) << total << endl;
	
	system("pause");
	return 0;
}

