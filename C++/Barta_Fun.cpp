// This is the fun thingy for Barta
// Functional programming it is - no need for objects as far as I see 

// Includes 
#include <iostream>
#include "string" // For strings and manipulation of strings
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
	
	// print string length
	cout << userInputString.length() << " Is the length of the string" << '\n';
	return 0;
}




