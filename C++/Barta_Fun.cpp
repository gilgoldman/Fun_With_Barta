// This is the fun thingy for Barta
// Functional programming it is - no need for objects as far as I see 

// Includes 
#include <iostream>

// Namespaces
using namespace std;

// Function declarations
void printWelcome();
void printGoodbye();
string getInputFromUser();
string reverseAString(string &toBeReversed);



// Main function body
int main()
{
	// Print welcome message
	printWelcome();

	// Get and print input from user
	const string userInput = getInputFromUser();
//	string *userInputPtr;
	cout << userInput << " Is the selected string" << '\n';

	// Print the string in reverse
	cout << reverseAString(userInput) << " Is the string in reverse" << '\n';


	// Print goodbye message
	printGoodbye();
	return 0;
}



// Function definitions
// Prints a welcome message
void printWelcome()
{
	cout << "Hello! This is the thingy built for Barta" << '\n';
	cout << "This is version 0.2, which experiments with pointers and references" << endl;
}

// Prints a goodbye message
void printGoodbye() 
{
	cout << "That's all folks! It was a pleasure seeing you here, please come again!" << endl;
}

// Retrieves input from user and stores in a string
string getInputFromUser()
{
	string inputFromUser;
	cout << "Please insert a string input:" << '\n';
	cin >> inputFromUser;
	return inputFromUser;
}

// Reverses a string
string reverseAString(string &toBeReversed)
{
	// Counters
	unsigned char i(0);
	unsigned char j(toBeReversed.length()-1);
	string stringInReverse = toBeReversed; 

	for (i = 0; i < toBeReversed.length(); ++i, --j)
	{
		stringInReverse.at(j) = toBeReversed.at(i);
	}
	return stringInReverse;
}


