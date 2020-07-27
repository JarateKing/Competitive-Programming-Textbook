#include <iostream>

using namespace std;

int main() {
	int guess = 1;
	
	// make initial guess
	// we use `endl` to ensure we flush output
	cout << guess << endl;
	
	// if we're wrong, we guess again
	string s = input;
	cin >> s;
	while (input == "wrong") {
		// make new guess
		guess++;
		cout << guess << endl;
		
		// read new response
		cin >> input;
	}
}