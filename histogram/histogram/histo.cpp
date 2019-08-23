#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void main()
{
	int number, x=0, y=1, z=50, avg=0, total=0, tally=0;
	int BIN[10] = { 0,0,0,0,0,0,0,0,0,0 };
	ifstream inFile, inFile1;

	inFile.open("c:\\temp\\randomNumbers.txt");

//Tried to abbreviate code in a loop and increasing the variables as appropriate.  Did NOT work
//The program would need to go through the file 10 times but it doesn't.  It only goes through
//once.  Each time I evaluate a number I have to increase the appropriate BIN[].
//The code below would work if we went through the file 10 times. 
//  I think having the longer code is better than having the computer run through the file 10 times.
//	while (inFile >> number)
//	{
//		if (number >= x && number <= y)
//		{
//			BIN[z]++;
//		}
//		x = x + 50;
//		y = y + 50;
//		z++;
//	}

	while (inFile >> number)
	{
		if (number <= 50)
		{
			BIN[0]++;
		}
		else if (number >= 51 && number <= 100)
		{
			BIN[1]++;
		}
		else if (number >= 101 && number <= 150)
		{
			BIN[2]++;
		}
		else if (number >= 151 && number <= 200)
		{
			BIN[3]++;
		}
		else if (number >= 201 && number <= 250)
		{
			BIN[4]++;
		}
		else if (number >= 251 && number <= 300)
		{
			BIN[5]++;
		}
		else if (number >= 301 && number <= 350)
		{
			BIN[6]++;
		}
		else if (number >= 351 && number <= 400)
		{
			BIN[7]++;
		}
		else if (number >= 401 && number <= 450)
		{
			BIN[8]++;
		}
		else if (number >= 451 && number <= 500)
		{
			BIN[9]++;
		
		}


	}
	inFile.close();

	inFile1.open("c:\\temp\\randomNumbers.txt");
	
	while (inFile1 >> number)
	{
		total = total + number;
		tally++;
	}

	avg = total / tally;
	
	
	std::cout << "+" << string(88, '-') << "+" << endl;
	std::cout << "|" << setw(86) << "      Histogram showing how often each number appears in randomnumbers.txt       " << "  |" << endl;

	for (x = 0; x < 10;x++)
	{
		std::cout << "+" << string(88, '-') << "+" << endl;
		std::cout << left << setw(1) << "|"
			<< left << setw(3) << y 
			<< left << setw(2) <<" to "
			<< left << setw(3) << z 
			<<left << setw(1) << ":" 
			<< left << setw(75) << string(BIN[x], '*')<< BIN[x] << "|" << endl;
		y = y + 50;
		z = z + 50;
	}
	std::cout << "+" << string(88, '-') << "+" << endl;

	std::cout << left << setw(30) << "Average of all numbers is:" << avg << endl;
	std::cout << left << setw(30) << "Total of all numbers is:" << total << endl;
	std::cout << left << setw(30) << "Tally of all numbers is:" << tally << endl;

//	cout << BIN[0] << endl;
//	cout << string(BIN[0], '*') << endl;
//	cout << BIN[1] << endl;
//	cout << BIN[2] << endl;
//	cout << BIN[3] << endl;
//	cout << BIN[4] << endl;
//	cout << BIN[5] << endl;
//	cout << BIN[6] << endl;
//	cout << BIN[7] << endl;
//	cout << BIN[8] << endl;
//	cout << BIN[9] << endl;

	std::system("pause");
}