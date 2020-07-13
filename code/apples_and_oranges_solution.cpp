#include <iostream>

using namespace std;

int main() {
	// read in our input variables
	int a, b;
	cin >> a >> b;
	
	// handle each individual case
	if (a > b) {
		cout << "Alice";
	}
	else if (a < b) {
		cout << "Owen";
	}
	else {
		cout << "Tie";
	}
}