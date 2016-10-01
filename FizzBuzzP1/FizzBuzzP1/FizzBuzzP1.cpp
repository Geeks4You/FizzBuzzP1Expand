// Week 2: Individual: FizzBuzz Program, Part 1, Expanded
// PRG/410: C++ Programming I
// October 3, 2016
// Marcia L. Allen
// Write a console-based C++ program that requests the user to input a single positive 
// integer as input and waits until the student presses the Enter key. 
// The program will then write the following output according to the following rules:
// 1. If the number is divisible by 3. The program will give the output "Number: # - Fizz"
// 2. If the number is divisible by 5. The program will give the output "Number: # - Buzz"
// 3. If the number is both divisible by 3 and 5. The program will give the output "Number: # - FizzBuzz"
// If the number is NOT divisible by either 3 or 5, the program will give the output "Please enter another number."
// Expand the application to accept a comma separated list of numbers and print the output of 
// each number according to the rules above. The program will give the output "Number: # - Fizz, Number: # - Buzz, Number: # - FizzBuzz
// Note: Utilize pointers where appropriate.

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include <sstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	// Declarations to identify what is being used from standard library.
	using std::cout;
	using std::cin;
	using std::string;
	using std::getline;

	// Initialize a variable.
	int x = 0;

	// Use of a pointer.
	int *ip = &x;

	// Request for User to enter a number and press enter.
	cout << "Please enter a number, then press Enter key: " << endl;
	cin >> *ip;

		// If the number is divisable by the numbers 3 and 5, print "Number: x-FizzBuzz".
		if (((x % 3) || (x % 5)) == 0)
			printf("Number: %d-FizzBuzz\n", *ip);
		// Else If the number is divisable by only 3, print "Number: x-Fizz".
		else if ((x % 3) == 0)
			printf("Number: %d-Fizz\n", *ip);
		// Else If the number is divisable by only 5, print "Number: x-Buzz".
		else if ((x % 5) == 0)
			printf("Number: %d-Buzz\n", *ip);
		// Else if the number meets none of the above criteria then request another number.1
		else
			printf("Please enter another number.\n");

		cin.ignore();

	const char comma = ',';
	
	// Request for User to enter a number and press enter.
	cout << "Enter three numbers separated by commas on a single line, then press Enter key:\n ";

	//Set string variable to hold the input
	string line;

	// Read the complete line as a string
	getline(cin, line);

	// Append a comma at the end; this will make processing simpler
	line += comma;

	// Construct a string stream which can read integers from the line
	std::istringstream strstm(line);

	// Set variables needed
	int number;
	char separator;

	// for each number read from the line
	while (strstm >> number >> separator && separator == comma) {

		const bool divisible_by_3 = number % 3 == 0;
		const bool divisible_by_5 = number % 5 == 0;

		if (divisible_by_3 && divisible_by_5)
			cout << "Number: " << number << " - FizzBuzz\n ";
		else if (divisible_by_3) 
			cout << "Number: " << number << " - Fizz, ";
		else if (divisible_by_5) 
			cout << "Number: " << number << " - Buzz, ";
		else 
			cout << "Please enter another number.\n";
		}

	return 0;
}
