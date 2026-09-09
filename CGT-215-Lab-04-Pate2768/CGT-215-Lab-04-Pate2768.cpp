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
	cout << "Enter a number: ";

	int x;
	cin >> x;

	while (x < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> x;
	}

	int answer = 1;

	cout << x << "! = ";

	for (int i = 1; i <= x; i++) {
		answer = answer * i;

		cout << i;

		if (i < x) {
			cout << " * ";
		}
	}

	cout << " = " << answer << endl;
}
void arithmetic() {
	cout << "Arithmetic Series:" << endl;
	cout << "Enter the first term: ";
	int a;
	cin >> a;

	cout << "Enter the common difference: ";
	int d;
	cin >> d;

	cout << "Enter the number of terms: ";
	int n;
	cin >> n;

	while (n <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		int term = a + i * d;

		sum += term;

		cout << term;

		if (i < n - 1) {
			cout << " + ";
		}
	}

	cout << " = " << sum << endl;
}
void geometric() {
	cout << "Geometric Series:" << endl;

	cout << "Enter the first term: ";
	int a;
	cin >> a;

	cout << "Enter the common ratio: ";
	int r;
	cin >> r;

	cout << "Enter the number of terms: ";
	int n;
	cin >> n;

	while (n <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}

	int sum = 0;
	int term = a;

	for (int i = 0; i < n; i++) {
		sum += term;

		cout << term;

		if (i < n - 1) {
			cout << " + ";
		}

		term *= r;
	}

	cout << " = " << sum << endl;
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