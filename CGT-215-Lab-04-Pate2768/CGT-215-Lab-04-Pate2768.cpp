#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factorial:" << endl;
	cout << "Enter a number: "; // Ask user for what number to find a factorial of

	int x;
	cin >> x; // Declare the variable x and store the user input in it for the number to find the factorial of

	while (x < 0) { // Give the user infinite attempts to enter a positive number if they enter a negative number
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> x;
	}

	int answer = 1; // Declare a variable to store the answer of the factorial and set it to 1, the smallest possible factorial, and to prevent it from changing the answer

	cout << x << "! = "; // Print out the factorial of the number the user entered and the equal sign to show the answer will be printed out next

	for (int i = 1; i <= x; i++) {
		answer = answer * i; // Calculate the factorial of the number by multiplying the answer variable by the current value of i

		cout << i;

		if (i < x) { // Stop printing out the multiplication sign after the last number in the factorial
			cout << " * "; // Print out the multiplication sign between the numbers in the factorial
		}
	}

	cout << " = " << answer << endl; // Print out the final answer of the factorial
}
void arithmetic() {
	cout << "Arithmetic Series:" << endl;
	cout << "Enter the first term: "; // Ask the user for the first term of the sequence
	int a;
	cin >> a; // Declare and store the first term from the user as a

	cout << "Enter the common difference: "; // Ask the user for the common difference of the sequence
	int d;
	cin >> d; // Declare and store the common difference from the user as d

	cout << "Enter the number of terms: "; // Ask the user for the number of terms in the sequence
	int n;
	cin >> n; // Declare and store the number of terms from the user as n

	while (n <= 0) { // Give the user infinite attempts to enter a positive number if they enter a negative number
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}

	int sum = 0; // Declare a variable to store the sum of the arithmetic series and set it to 0

	for (int i = 0; i < n; i++) { // Loop through the number of terms in the sequence
		int term = a + i * d; // Calculate the current term in the sequence by adding the first term to the product of the common difference and the current index

		sum += term; // Add the current term to the sum of the arithmetic series

		cout << term; // Print out the current term in the sequence

		if (i < n - 1) { // Stop printing out the addition sign after the last term in the sequence
			cout << " + "; // Print out the addition sign between the terms in the sequence
		}
	}

	cout << " = " << sum << endl; // Print out the final sum of the arithmetic series
}
void geometric() {
	cout << "Geometric Series:" << endl;

	cout << "Enter the first term: "; // Ask the user for the first term of the sequence
	int a; 
	cin >> a; // Store the user input in the variable a for the first term of the sequence

	cout << "Enter the common ratio: "; // Ask the user for the common ratio of the sequence
	int r; 
	cin >> r; // Store the user input in the variable r for the common ratio of the sequence

	cout << "Enter the number of terms: "; // Ask the user for the number of terms in the sequence
	int n; 
	cin >> n; // Store the user input in the variable n for the number of terms in the sequence

	while (n <= 0) { // Give the user infinite attempts to enter a positive number if they enter a negative number
		cout << "Nice try, please enter a POSITIVE number...: "; 
		cin >> n; 
	}

	int sum = 0; // Declare a variable to store the sum of the geometric series and set it to 0
	int term = a; // Declare a variable to store the current term in the sequence and set it to the first term of the sequence

	for (int i = 0; i < n; i++) { // Loop through the number of terms in the sequence
		sum += term; // Add the current term to the sum of the geometric series
		
		cout << term;

		if (i < n - 1) { // Stop printing out the addition sign after the last term in the sequence
			cout << " + ";
		}

		term *= r; // Calculate the next term in the sequence by multiplying the current term by the common ratio
	}

	cout << " = " << sum << endl; // Print out the final sum of the geometric series
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}