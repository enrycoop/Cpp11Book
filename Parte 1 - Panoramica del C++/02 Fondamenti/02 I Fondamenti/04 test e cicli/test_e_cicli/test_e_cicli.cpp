// test_e_cicli.cpp : Defines the entry point for the application.
//

#include "test_e_cicli.h"

using namespace std;

bool accept()
{
	cout << "Do you want to proceed (y o n)?\n"; // scrive domanda
	char answer = 0;
	cin >> answer;                               // legge risposta

	if (answer == 'y') return true;
	return false;
}

bool accept2()
{
	cout << "Do you want to proceed (y o n)??\n";
	char answer = 0;
	cin >> answer;

	switch (answer) {
	case 'y':
		return true;
	case 'n':
		return false;
	default:
		cout << "I'll take that for a no.\n";
		return false;
	}
}

bool accept3()
{
	int tries = 1;

	while (tries < 4) {
		cout << "Do you want to proceed (y o n)?\n";
		char answer = 0;
		cin >> answer;

		switch (answer) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			cout << "Sorry, I don't understand that.\n";
			++tries; // incrementa
		}
	}
	cout << "Lo prendo come un no.\n";
	return false;
}

int main()
{
	cout << accept3() << endl;
	return 0;
}
