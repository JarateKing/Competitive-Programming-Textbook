#include <iostream>

using namespace std;

int main() {
	// get the number of testcases
	int testcases;
	cin >> testcases;
	
	// for every testcase
	for (int i = 0; i < testcases; i++) {
		int n;
		cin >> n;
		
		// handle all possibilities below 5
		// any number above 4 will always be 0
		if (n == 0 || n == 1) {
			cout << "1\n";
		}
		else if (n == 2) {
			cout << "2\n";
		}
		else if (n == 3) {
			cout << "6\n";
		}
		else if (n == 4) {
			cout << "8\n";
		}
		else {
			cout << "0\n";
		}
	}
}