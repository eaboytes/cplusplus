#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int s;
void showMenu();
void CalculateTax(double rate);
double GetTaxRate();
char choice = 1;
int repeat;
int again();




int main()
{
//	char choice;
	double taxrate;

	do
	{
		system("cls");
		showMenu();
//		state = getstate();
//		taxrate = GetTaxRate(state);
		taxrate = GetTaxRate();
	    CalculateTax(taxrate);
		repeat = again();
	} while (repeat != 0);
	system("pause");
	return 0;


	//     {
	//            cout << "Please enter a valid number" << endl;
	//            cin >> choice;
	//     }
	//     if (choice > 0 && choice <= 10);
	//     {
	//            GetTaxRate(choice);
	//     }
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
	//	system("pause");
}

double GetTaxRate()
{
	int choice;
	double taxrate;
	cout << "Enter your State's number from the Menu" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		taxrate = .0715; break;
	case 2:
		taxrate = .0725; break;
	case 3:
		taxrate = .0735; break;
	case 4:
		taxrate = .0745; break;
	case 5:
		taxrate = .0755; break;
	case 6:
		taxrate = .0765; break;
	case 7:
		taxrate = .0775; break;
	case 8:
		taxrate = .0785; break;
	case 9:
		taxrate = .0795; break;
	case 10:
		taxrate = .0805; break;
	default: taxrate = 0.0; break;
	}
	cout << "======>  Tax rate for chosen state is " << taxrate * 100 << " percent" << endl;
	return taxrate;
}

void CalculateTax(double rate)
{
	int amount;
	cout << "Enter Dollar Amount of Purchase" << endl;
	cin >> amount;
	cout << endl;
	cout << left << setw(15) << "Purchase Price"	<< left << setw(10) << "Tax Rate"		<< left << setw(20) << "Price including tax" << endl;
	cout << left << setw(15) << string(14, '-')		<< left << setw(10) << string(9, '-')	<< left << setw(20) << string(20, '-') << endl;
	cout << fixed << setprecision(2)<< left << setw(15) << amount				<< left << setw(10)	<< rate * 100 		<< right << setw(20) << amount * (1 + rate)	<< endl;
	cout << left << setw(15) << string(14, '-') << left << setw(10) << string(9, '-') << left << setw(20) << string(20, '-') << endl;
	cout << endl;
}

int again()
{
	char answer;
	cout << "Would you like to calculate tax for another purchase?" << endl;
	cout << "Y/N:";
	cin >> answer;
//	system("pause");

	switch (answer)
	{
		case 'Y': repeat = 1; break;
		case 'y': repeat = 1; break;
		default: repeat = 0; cout << "Thank you for using this software." << endl;
	}
	return repeat;
}

//void DisplayMenu()
//{
		//cout << "*****************" << endl;
		//cout << "***S) State   ***" << endl;
		//cout << "***A) Ammount ***" << endl;
		//cout << "***T) Tax     ***" << endl;
		//cout << "***           ***" << endl;
		//cout << "***           ***" << endl;
		//cout << "***           ***" << endl;
		//cout << "***Q) Quit    ***" << endl;
		//cout << "*****************" << endl;
//}
