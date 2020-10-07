int modulo_inverse(int a, int m) {
	int x = 0, y = 0;
	// calculate x and GCD together
	// if GCD is not 1, there is no modular inverse
	if (extended_gcd(a, m, x, y) != 1)
		return -1;
	
	// handle negatives and return
	return (x + m) % m;
}