int extended_gcd(int a, int b, int& x, int& y) {
	// base case
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	
	// recursively calculate
	int val = extended_gcd(b, a % b, x, y);
	
	// modify x and y
	x -= a / b * y;
	swap(x, y);
	
	return val;
}