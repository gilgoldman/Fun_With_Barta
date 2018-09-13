// This is the fun thingy for Barta
// Functional programming it is - no need for objects as far as I see 

// Includes 
#include <iostream>
#include "Barta_Header.hpp" // For all the functions

// Namespaces
using namespace std;



// Main function body
int main()
{
	// Welcome User
	printWelcome();
	
	// Get user input
	string userInputString = getInputFromUser();
	
	// Step 1 = print the input string
	cout << userInputString << " Is the string you have inserted" << '\n';
	
	// Print string length
	cout << userInputString.length() << " Is the length of the string" << '\n';

	// Print string in reverse.
	//string userInputStringReversed = reverse(userInputString.begin(), userInputString.end()); // This could work, but doesn't
																								// Gotta check why, it's nicer than mine
	cout << reverseAString(userInputString) << " Is the string in reverse" << '\n';

	// Print string value in ASCII
	cout << convertToASCII(userInputString) << " Is the value of the string in ASCII" << '\n';

	// Print the string shifted all around
	for (unsigned int shiftCounter = 0; shiftCounter < userInputString.length(); ++shiftCounter)
		cout << shiftAString(userInputString, shiftCounter) << " Is the string shifted by " << shiftCounter << '\n';

	// Print a goodbye
	printGoodbye();

	return 0;
}




