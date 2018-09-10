// This is the header file for the Barta's thingy

// Includes
#include <iostream>


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

