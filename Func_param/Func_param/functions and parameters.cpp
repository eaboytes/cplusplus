#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void showMenu();
double CalculateTax(double taxrate, double amt);
double GetTaxRate(string state);
double AddNumbers(double amt, double tx);
double Getamt();
void DisplayAllInfo(double amt, double taxrate, double total);
int again();
string getstate();

int main()
{
	double taxrate;
	string state;
	double total, amt, tx;
	int repeat;
	   
	do
	{
		system("cls");
		showMenu();
		state = getstate();
		taxrate = GetTaxRate(state);
		amt = Getamt();
		tx=CalculateTax(taxrate, amt);
		total = AddNumbers(amt, tx);
		DisplayAllInfo(amt, taxrate, total);
		repeat = again();
	} while (repeat != 0);
	system("pause");
	return 0;
}

void showMenu()
{
	cout << left << setw(5) << "+----" << left << setw(12) << string(12, '-') << left << setw(1) << "-" << left << setw(3) << string(3, '-') << left << setw(12) << string(12, '-') << "+" << endl;
	cout << left << setw(5) << "|    " << left << setw(28) << "      STATES MENU          " << "|" << endl;
	cout << left << setw(5) << "+----" << left << setw(12) << string(12, '-') << left << setw(1) << "+" << left << setw(3) << string(3, '-') << left << setw(12) << string(12, '-') << "+" << endl;
	cout << left << setw(5) << "| 1." << left << setw(12) << "Alabama" << left << setw(1) << "|" << left << setw(3) << "6." << left << setw(12) << "Florida" << "|" << endl;
	cout << left << setw(5) << "| 2." << left << setw(12) << "Alaska" << left << setw(1) << "|" << left << setw(3) << "7." << left << setw(12) << "Washington" << "|" << endl;
	cout << left << setw(5) << "| 3." << left << setw(12) << "California" << left << setw(1) << "|" << left << setw(3) << "8." << left << setw(12) << "Texas" << "|" << endl;
	cout << left << setw(5) << "| 4." << left << setw(12) << "Iowa" << left << setw(1) << "|" << left << setw(3) << "9." << left << setw(12) << "Colorado" << "|" << endl;
	cout << left << setw(5) << "| 5." << left << setw(12) << "Ohio" << left << setw(1) << "|" << left << setw(3) << "10." << left << setw(12) << "Hawaii" << "|" << endl;
	cout << left << setw(5) << "+----" << left << setw(12) << string(12, '-') << left << setw(1) << "+" << left << setw(3) << string(3, '-') << left << setw(12) << string(12, '-') << "+" << endl;
}
string getstate()
{
	int choice;
	int repeat;
	string state;

	std::cout << "Enter your State's number from the Menu" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		state = "AL"; break;
	case 2:
		state = "AK"; break;
	case 3:
		state = "CA"; break;
	case 4:
		state = "IA"; break;
	case 5:
		state =  "OH"; break;
	case 6:
		state = "FL"; break;
	case 7:
		state = "WA"; break;
	case 8:
		state = "TX"; break;
	case 9:
		state = "CO"; break;
	case 10:
		state = "HI"; break;
	default: std::cout << "You must choose a valid number" << endl; system("pause"); main();
	}
	return state;
}
double GetTaxRate(string state)
{
	double taxrate;

	if (state == "AL")
	{
		taxrate = .0715;
	}
	else if (state == "AK")
	{
		taxrate = .0725;
	}
	else if (state == "CA")
	{
		taxrate = .0735;
	}
	else if (state == "IA")
	{
		taxrate = .0745;
	}
	else if (state == "OH")
	{
		taxrate = .0755;
	}
	else if (state == "FL")
	{
		taxrate = .0765;
	}
	else if (state == "WA")
	{
		taxrate = .0775;
	}
	else if (state == "TX")
	{
		taxrate = .0785;
	}
	else if (state == "CO")
	{
		taxrate = .0795;
	}
	else if (state == "HI")
	{
		taxrate = .0805;
	}
	else
	{
		cout << "An error has occurred while assigning tax rate" << endl;
		system("pause");
		return 0;
	}
	cout << "======>  Tax rate for " << state << " is " << taxrate * 100 << " percent." << endl;
	return taxrate;
}

double Getamt()
{
	double amt;
	double tx;
	cout << "Enter US Dollar Amount of Purchase" << endl;
	cin >> amt;
	if(amt > 0 && amt <= 10000000)
	{
		return amt;
	}
	else
	{
		cout << amt << endl;
		cout << "You entered an invalid number" << endl;
		cout << "The program will now exit" << endl;
		cin.clear();
		cin.ignore();
		system("pause");
		return 0;
	}
	
}
double CalculateTax(double taxrate, double amt)
{
	double tx;
	tx = amt * taxrate;
	return tx;
}

double AddNumbers(double amt, double tx)
{
	double total;
	total = amt + tx;
		return total;
}

int again()
{
	char answer;
	int repeat;

	cout << "Would you like to calculate tax for another purchase?" << endl;
	cout << "Y/N:";
	cin >> answer;

	switch (answer)
	{
	case 'Y': repeat = 1; break;
	case 'y': repeat = 1; break;
	default: repeat = 0; cout << "Thank you for using this software." << endl;
	}
	return repeat;
}

void DisplayAllInfo(double amt, double taxrate, double total)
{
	cout << endl;
	cout << left << setw(15) << "Purchase Price" << left << setw(10) << "Tax Rate" << left << setw(20) << "Price including tax" << endl;
	cout << left << setw(15) << string(14, '-') << left << setw(10) << string(9, '-') << left << setw(20) << string(20, '-') << endl;
	cout << fixed << setprecision(2) << left << setw(15) << amt << left << setw(10) << taxrate * 100 << right << setw(20) << total << endl;
	cout << left << setw(15) << string(14, '-') << left << setw(10) << string(9, '-') << left << setw(20) << string(20, '-') << endl;
	cout << endl;
}