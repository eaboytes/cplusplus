#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
int pancakeseaten[10];
int customers;
int Getcustomers();
void Getpancakes(int customers);
void DISPLAYRESULTS(int customers, int pancakeseaten[]);

int main()
{
	customers = Getcustomers();
	Getpancakes(customers);
	DISPLAYRESULTS(customers, pancakeseaten);
	system("pause");
	return 0;
}
int Getcustomers()
{
cust_begin:
	cout << "Enter how many customers ate pancakes:" << endl;
	cin >> customers;
	switch (customers)
	{
	case 1: break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	case 7: break;
	case 8: break;
	case 9: break;
	default: cout << "Please enter a valid number (1 - 9)" << endl; system("pause"); system("cls"); goto cust_begin;
	}
	return customers;
}
void Getpancakes(int customers)
{
	int x=1;
	do
	{
		cout << "How many pancakes did customer " << x << " eat? " << endl;
		cin >> pancakeseaten[x];
		x++;
	} while (x <= customers);
}
void DISPLAYRESULTS(int customers, int pancakeseaten[])
{
	int x = 1;
	double price = 1.01, grandtotal=0;

	ofstream out;
	out.open("c:\\temp\\bill.txt");
	out << left << setw(9) << "Name" << right << setw(15) << "Pancakes Eaten" << right << setw(23) << "Total Price for Person" << endl;
	out << left << setw(9) << string(8, '-') << right << setw(15) << string(14, '-') << right << setw(23) << string(22, '-') << endl;

	cout << left << setw(9) << "Name" << right << setw(15) << "Pancakes Eaten" << right << setw(23) << "Total Price for Person" << endl;
	cout << left << setw(9) << string(8, '-') << right << setw(15) << string(14, '-') << right << setw(23) << string(22, '-') << endl;

	do
	{
		out << left << setw(7) << "Person " << left << setw(2) << x << right << setw(15) << pancakeseaten[x] << right << setw(23) << pancakeseaten[x] * price << endl;
		cout << left << setw(7) << "Person " << left << setw(2) << x << right << setw(15) << pancakeseaten[x] << right << setw(23) << pancakeseaten[x] * price <<endl;
		grandtotal = grandtotal + (pancakeseaten[x] * price);
		x++;
	} while (x <= customers);

	out << string(47, '-') << endl;
	out << right << setw(41) << "Total Money Made: " << right << setw(6) << grandtotal << endl;
	out << string(47, '-') << endl;
	out.close();

	cout << string(47, '-') << endl;
	cout << right << setw(41) << "Total Money Made: " << right << setw(6) << grandtotal << endl;
	cout << string(47, '-') << endl;
}

