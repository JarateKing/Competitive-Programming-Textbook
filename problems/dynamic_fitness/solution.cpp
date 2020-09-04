#include <bits/stdc++.h>
using namespace std;

bool arr[2000];

int main() {
	arr[0] = true;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int v; cin >> v;
		for (int i = 1999-v; i >= 0; i--) {
			if (arr[i])
				arr[i+v] = true;
		}
	}
	
	int c = 0;
	for (int i = 0; i < 2000; i++) {
		if (arr[i])
			c++;
	}
	
	cout << c << '\n';
}
