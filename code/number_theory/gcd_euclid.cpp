int gcd(int a, int b) {
	// base case
	if (b == 0)
		return a;
	
	// recursively calculate
	int val = gcd(b, a % b);
	return val;
}