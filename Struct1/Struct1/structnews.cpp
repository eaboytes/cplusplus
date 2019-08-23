#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct company
{
	string division; 
	double qtrsales[4]; 
	double totalsales; 
	double avgqtrsales;
};
void getsales(company& d);
void displaysales(company& d);

int main()
{
	struct company North;
	North.division = { "North" };
	struct company South;
	South.division = { "South" };
	struct company East;
	East.division = { "East" };
	struct company West;
	West.division = { "West" };

	getsales(North);
	getsales(South);
	getsales(East);
	getsales(West);

	displaysales(North);
	displaysales(South);
	displaysales(East);
	displaysales(West);

	system("pause");
	return 0;
}

void getsales(company& d)
{
	int x;
	d.totalsales = 0;
	d.avgqtrsales = 0;
		
	std::cout << "Please enter the following information for the " << d.division << " division" << endl;
	
	for (x = 0; x < 4;x++) 
	{
	start:
		std::cout << d.division << " division " << "Quarter " << x + 1 << " sales:";
		std::cin >> d.qtrsales[x];
		if (d.qtrsales[x] >= 0) {}
		else { std::cout << "ERROR: Please enter a number greater than 0" << endl; goto start; }
		d.totalsales = d.totalsales + d.qtrsales[x];
	}
	d.avgqtrsales = d.totalsales / 4.00;
}

void displaysales(company& d)
{
	if (d.division == "North") 
	{
		cout << left << setw(5) << "+----" << left << setw(18) << string(18, '-') << left << setw(1) << "+" << left << setw(3) << string(3, '-') << left << setw(14) << string(14, '-') << "+" << left << setw(3) << string(3, '-') << left << setw(16) << string(16, '-') << "+" << endl;
		cout << left << setw(5) << "|   " << left << setw(18) << "Division Name" << "|" << left << setw(16) << " Total Qtr Sales " << "|" << left << setw(12) << " Average Qtr Sales " << "|" << endl;
		cout << left << setw(5) << "+----" << left << setw(18) << string(18, '-') << left << setw(1) << "+" << left << setw(3) << string(3, '-') << left << setw(12) << string(14, '-') << "+" << left << setw(3) << string(3, '-') << left << setw(16) << string(16, '-') << "+" << endl;
		cout << left << setw(5) << "|" << left << setw(18) << d.division << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(14) << d.totalsales << left << setw(1) <<"|" << left << setw(3) << "$" << left << setw(16) << d.avgqtrsales << left << setw(1) << "|" << endl;
	}
	else
	{
		cout << left << setw(5) << "|" << left << setw(18) << d.division << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(14) << d.totalsales << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(16) << d.avgqtrsales << left << setw(1) << "|" << endl;
	}
	//cout << left << setw(5) << "|" << x+1 << "." << left << setw(18) << South.division << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(14) << South.totalsales << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(16) << South.avgqtrsales << left << setw(1) << "|" << endl;
	//cout << left << setw(5) << "|" << x+1 << "." << left << setw(18) << East.division << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(14) << East.totalsales << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(16) << East.avgqtrsales << left << setw(1) << "|" << endl;
	//cout << left << setw(5) << "|" << x+1 << "."  << left << setw(18) << West.division << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(14) << West.totalsales << left << setw(1) << "|" << left << setw(3) << "$" << left << setw(16) << West.avgqtrsales << left << setw(1)  << "|" << endl;
	
	if(d.division == "West")
	{ 
	cout << left << setw(5) << "+----" << left << setw(18) << string(18, '-') << left << setw(1) << "+" << left << setw(3) << string(3, '-') << left << setw(14) << string(14, '-') << "+" << left << setw(3) << string(3, '-') << left << setw(16) << string(16, '-') << "+" << endl;
	}
	else 
	{

	}
}