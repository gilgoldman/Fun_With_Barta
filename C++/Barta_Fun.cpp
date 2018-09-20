// This is the fun thingy for Barta
// Functional programming it is - no need for objects as far as I see 

// Includes 
#include <iostream>
#include <algorithm>

// Namespaces
using namespace std;

// Function declarations
void printWelcome();
void printGoodbye();
string getInputFromUser();
string reverseAString(const string &toBeReversed);
string shiftAString(string &toBeShifted, unsigned int &shiftByHowMuch);
int valueInASCII(string &toBeASCIID);


// Main function body
int main()
{
	// Print welcome message
	printWelcome();

	// Get and print input from user
	const string userInput = getInputFromUser();

	// Establish pointer to constant user Input
	string const *pointerToUserInput = nullptr;
	pointerToUserInput = &userInput;
	// Return the selected string
	cout << *pointerToUserInput << " Is the selected string" << '\n';

	// Print the string in reverse
	cout << reverseAString(userInput) << " Is the string in reverse" << '\n';

	// Print the value in ASCII
	//cout << valueInASCII(*pointerToUserInput) << " Is the string value in ASCII" << '\n';

	// Shift a string by a specified amount
	/*for (unsigned int shiftCounter = 0; shiftCounter < userInput.length(); ++shiftCounter)
	{
		cout << shiftAString(*pointerToUserInput, shiftCounter) << " Is the string shifted by " << shiftCounter << " Places" << endl;
	}
*/
	// Print goodbye message and quit
	printGoodbye();
	return 0;
}


// Function definitions
// Prints a welcome message
void printWelcome()
{
	cout << "Hello! This is the thingy built for Barta" << '\n';
	cout << "This is version 0.11, which experiments with passing references" << endl;
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
string reverseAString(const string &toBeReversed)
{
	// Local string definitions
	string toBeReversedLocal = toBeReversed;
	string stringInReverse (toBeReversedLocal.length(), ' ');

	// Counters
	unsigned char i(0), j(toBeReversedLocal.length()-1);

	for (i = 0; i < toBeReversedLocal.length(); ++i, --j)
	{
		stringInReverse.at(j) = toBeReversedLocal.at(i);
	}
	return stringInReverse;
}

// Present value in ASCII
int valueInASCII(string &toBeASCIID)
{
	unsigned int ASCIIValue(0);
	for (unsigned char i = 0; i < toBeASCIID.length(); ++i)
	{
		char c = toBeASCIID.at(i); // Grabs a specific character
		ASCIIValue = ASCIIValue + int(c); // Adds character's value in ASCII to the sum
	}
	return ASCIIValue;
}

// Rotate string by a predetermined value
string shiftAString(string &toBeShifted, unsigned char &shiftByHowMuch)
{
	rotate(toBeShifted.begin(), toBeShifted.begin()+shiftByHowMuch, toBeShifted.end()); // Shift string by a predetermined number
	return toBeShifted;
}


