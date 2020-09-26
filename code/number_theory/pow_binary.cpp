int power(int a, int n) {
	int value = 1;
	// as long as there's more bits set
	while (n > 0) {
		// if bit i is set, multiply value by a^2^i
		if (n % 2 == 1)
			value *= a;
		// we store the next a^2^i in a
		a *= a;
		// divide by 2 to handle the next bit
		n /= 2;
	}
	return value;
}
