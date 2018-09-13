// This is the header file for the Barta's thingy

// Includes
#include <iostream>
#include <string> // For strings and manipulation of strings
#include <algorithm>

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
	// Counters
	unsigned int i;
	int j(toBeReversed.length()-1); 

	string stringInReverse (toBeReversed.length(), ' '); // Fills stringInReverse with empty characters to the length of toBeReversed

	for (i = 0; i < toBeReversed.length(); ++i, --j)
		stringInReverse.at(j) = toBeReversed.at(i);

	return stringInReverse;
}

// Get ASCII value of a string
int convertToASCII(string toBeASCIID)
{
	unsigned int ASCIIValue(0);

	for (unsigned int i = 0; i < toBeASCIID.length(); ++i)
	{
		char c = toBeASCIID.at(i); // Grabs a specific character
		ASCIIValue = ASCIIValue + int(c); // Adds character's value in ASCII to the sum
	}
	return ASCIIValue;
}

// Shift the strings around
string shiftAString(string toBeShifted, unsigned int shiftByHowMuch)
{
	rotate(toBeShifted.begin(), toBeShifted.begin()+shiftByHowMuch, toBeShifted.end()); // Shift string by a predetermined number
	return toBeShifted;
}


void printGoodbye() 
{
	cout << "That's all folks! It was a pleasure seeing you here, please come again!" << endl;
}