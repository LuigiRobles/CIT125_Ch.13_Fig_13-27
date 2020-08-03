// CIT125 Intro To C++ Luigi Robles
// 08-02-2020 Summer Term
// Ch.13 pg.491 Fig.13-27

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	string sales = "";
	string currentChar = "";
	int sub = 0;
	int numNumbers = 0;
	int numPeriods = 0;
	int numOtherChars = 0;

	cout << "Sales amount: ";
	getline(cin, sales); //function call to get sales amount

	while (sub < sales.length()) //while loop checking number of characters
	{
		currentChar = sales.substr(sub, 1);
		if (currentChar == ".")
			numPeriods += 1; //counting periods
		else
			if (currentChar < "0" || currentChar > "9") //counting other characters
				numOtherChars += 1;
			//end if
		//end if
		sub += 1; //accumulator
	} //end while

	if (numPeriods > 1 || numOtherChars > 0)
		cout << "Invalid sales amount" << endl;
	else
		cout << "Valid sales amount" << endl;
	//end if

	//output part of IPO
	cout << "Numbers: " << numNumbers << endl;
	cout << "Periods: " << numPeriods << endl;
	cout << "Other characters: " << numOtherChars << endl;

	return 0;
} //end of main function