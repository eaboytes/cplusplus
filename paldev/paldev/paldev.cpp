#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

char palindrome[75];
int x;
char getphrase();
int test;
int testpal(char palindrome[75]);
char formatdata(char palindrome[75]);
string answer;

int main()
{
start:
	system("cls");
	palindrome[75]= getphrase();
	formatdata(palindrome);
	test = testpal(palindrome);
	if (test == 1)
	{
		cout << "Phrase is **NOT** a Palindrome" << endl;
	}
	else
	{
		cout << "Phrase **IS** a Palindrome" << endl;
	}
	cout << "Would you like to try another phrase?" << endl;
	cout << "Y/N?:";
	cin >> answer;
	if (answer == "y" || answer == "Y")
	{
		cin.ignore();
		goto start;
	}
	cout << "Thank you for using this software" << endl;
	system("pause");
	return 0;
}
char getphrase()
{
	cout << "Please enter text up to 65 characters and I will tell you if it is a palindrome:" << endl;
	cin.getline(palindrome, 75);

	return palindrome[75];
}
char formatdata(char palindrome[75])
{
	int length;
	int y = 0;
	length = strlen(palindrome);
	int newlength;

	for (x = 0; x < length; x++)
	{
		if (((palindrome[x] >= 'A') && (palindrome[x] <= 'Z')) || ((palindrome[x] >= 'a') && (palindrome[x] <= 'z'))) 
						
		//if (palindrome[x] != ' ')
		//palindrome[y++] = palindrome[x];
			palindrome[y++] = palindrome[x];
		
	}
	palindrome[y] = '\0';


	newlength = strlen(palindrome);

//	cout << "before loop" << endl;
//
//	for (x = 0; x < newlength; x++)
//	{
//		cout << palindrome[x];
//	}
//
//	
//
	for (x = 0; x < newlength; x++)
	{
		if (palindrome[x] < 97) 
		{
			palindrome[x] = palindrome[x] + 32;
		}
	}
	palindrome[x] = '\0';
//
//   cout << "After loop" << endl;
//   for (x = 0; x < newlength; x++)
//   {
//   	cout << palindrome[x];
//   }
//   
	return palindrome[75];
}
int testpal(char palindrome[75])
{

	int newlength;
	int x;
	bool notpal = 0;

	newlength = strlen(palindrome);
	

	for (x = 0; x < newlength; x++)
	{
		cout << palindrome[x];
	}
	cout << endl;

    cout << newlength << endl;

	for (x = 0;x < newlength; x++)
	{
			cout << palindrome[x] << palindrome[newlength - 1 - x] << endl;
		if (palindrome[x] != palindrome[newlength - 1 - x])
		{
			notpal = 1;
			break;
		}
	}
	return notpal;
}
