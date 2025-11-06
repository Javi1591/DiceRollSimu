// Nazario, Xavier
// June 4, 2025 ©
// Chapter 5 Programming Assignment
// References:
// Starting out with C++: from Control
//	Structures to Objects (10th edition) by Tony Gaddis
// https://cplusplus.com/doc/tutorial/control/
// https://cplusplus.com/doc/tutorial/operators/

#include <iostream>
#include <iomanip>
using namespace std;

// Main function starts here
int main() {

	// Step 1 Variable definitions then srand statement
	//	Need DieRoll, Guess, cnt1, and cnt2
	short int DieRoll; // Holds dice roll function
	short int Guess; // Holds user input
	int cnt1; // Holds counter for loop CH 5
	int cnt2; // Holds counter for loop CH 5

	srand((unsigned int)time(NULL)); // RNG start point

	// Step 2 Get user's guess
	//	Must be whole number 1 to 6
	cout << "Please enter a WHOLE number ranging from, 1 to 6. ";

	// Step 3 Accept user input
	cin >> Guess;

	// Step 4 Sim DieRoll
	//	Function is given
	DieRoll = rand() % 6 + 1; // rand function returning 0 to 32767

	// Step 5 Display output
	//	Need Guess, DieRoll, and "WINNER" IF Guess/DieRoll are equal
	cout << "Your answer is " << Guess << " and die roll is " << DieRoll << "." << endl;
	if (Guess == DieRoll) {
		cout << "WINNER!" << endl;
	}
	// Step 6 Display secondary output
	//	Need "DOUBLE WINNER" IF DieRoll == odd number
	//	USE modulo, NOT if/else statement
	if (DieRoll % 2 == 1) {
		cout << "DOUBLE WINNER!" << endl;
	}
	// Step 7 Display last output
	//	IF DieRoll + Guess >= 10 "YOU ARE A LUCKY PERSON"
	//	NOT if/else OR nested if statements, USE complex if
	if (DieRoll + Guess >= 10 && DieRoll % 2 == 0) {
		cout << "YOU ARE A LUCKY PERSON!";
	}

	// Step 8 For loop to print 1 to 5, ON SAME LINE
	for (cnt1 = 1; cnt1 <= 5; cnt1++) {
		cout << cnt1 << " "; // Use whitespace, NOT endl;
	}

	cout << endl;

	// Step 9 For loop, counting backwards from 100 to 0 inclusive
	//	ONLY print IF number % by 17
	for (cnt1 = 100; cnt1 >= 0; cnt1--) {
		if (cnt1 % 17 == 0)
			cout << cnt1 << " "; // Use whitespace, NOT endl;
	}

	cout << endl;
	
	// Step 10 While loop using step 9 instructions
	cnt2 = 100;
		while (cnt2 >= 0) {
			if (cnt2 % 17 == 0)
				cout << cnt2 << " "; // Use whitespace, NOT endl;
			cnt2--;
	}

	cout << endl;

	// Step 11 Do...While loop to:
	//	Ask user for a number, use guess variable
	//	Get user input
	//	Tell user the % 5 even if result is 0
	//	Continue loop until user enters 0 (make aware)
	int guess; // Holds user input
	do {
		cout << "Please enter a number. Only enter 0 when ready to end. " << endl; // Prompt for user input
		cin >> guess;
		cout << "The number " << guess << " divided by 5 is " << guess % 5 << endl; // Display output
	} while (guess != 0);

	// Step 12 For loop nested in For loop
	//	Outer loop count 1 to 5
	//	Inner loop count 1 to 6 and print outer loop num * inner loop num
	//	Output is shown on assignment page
	for (cnt1 = 1; cnt1 <= 5; cnt1++) {
		for (cnt2 = 1; cnt2 <= 6; cnt2++)
			cout << cnt1 * cnt2 << "\t";
		cout << endl;
	}

	return 0;
}