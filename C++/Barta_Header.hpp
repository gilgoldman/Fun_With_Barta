// This is the header file for the Barta's thingy

// Includes
#include <iostream>
#include <string> // For strings and manipulation of strings


// Namespaces
using namespace std;

// Prints a welcome message
void printWelcome()
{
	cout << "Hello! This is the thingy built for Barta" << '\n';
	cout << "This is version 0.1, which basically manipulates strings" << endl;
}

// Accepts string input from user
string getInputFromUser()
{
	string inputFromUser;
	cout << "Please insert a string input:" << '\n';
	cin >> inputFromUser;
	return inputFromUser;
}

// Reverse order of string
string reverseAString(string toBeReversed)
{
	unsigned int i;
	int j(toBeReversed.length()-1); // Counters
	string stringInReverse (toBeReversed.length(), ' '); // Fills stringInReverse with empty characters to the length of toBeReversed

	for (i = 0; i < toBeReversed.length(); ++i, --j)
		stringInReverse.at(j) = toBeReversed.at(i);

	return stringInReverse;
}