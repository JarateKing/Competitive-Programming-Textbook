int modulo_pow(long long b, long long e, long long m) {
	// handle base case where every value is 0
	if (m == 1)
		return 0;
		
	// perform binary exponentiation
	long long value = 1;
	while (e > 0) {
		// our multiplication is modulo m
		if (e % 2 == 1)
			value = (value * b) % m;
		// our squaring is modulo m as well
		b = (b * b) % m;
		e /= 2;
	}
	return value;
}
