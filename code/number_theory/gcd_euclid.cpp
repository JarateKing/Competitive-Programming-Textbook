int gcd(int a, int b) {
	// base case
	if (b == 0)
		return a;
	
	// recursively calculate, swapping each time
	int val = gcd(b, a % b);
	return val;
}