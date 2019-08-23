//Author Zachary Aboytes
//CS.M10A.78574 Fall 2018
//September 16, 2018
//Lab to figure out the total number of hours needed to run to burn all calories

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int myarray[3], bb, swd, ms, tbcal, tswdcal, tmscal, tcal, a;
	char answer;
	double runhrs;
	
	myarray[0] = 357;
	myarray[1] = 185;
	myarray[2] = 388;
	do
	{
		cout << "Please enter how may burritos you ate:";
		cin >> bb;
		cout << "Please enter how many salads with dressing you ate:";
		cin >> swd;
		cout << "Please enter how many Milkshakes you ate:";
		cin >> ms;
			   
		tbcal = bb * myarray[0];
		tswdcal = swd * myarray[1];
		tmscal = ms * myarray[2];
		tcal = tbcal + tswdcal + tmscal;
		runhrs = tcal / 100.00;

		cout << "You will need to run " << runhrs << " hours to burn " << tcal << " calories" << endl;
		cout << "would you like to do this again Y/N?";
		cin >> answer;
		if (answer == 'n' || answer == 'N' || answer == 'no' || answer == 'No')
		{
			system("pause");
			return 0;
		}
		else 
		{ 
			a=1;
		}
	} while (a=1);
		
	system ("pause");
	return 0;
}
