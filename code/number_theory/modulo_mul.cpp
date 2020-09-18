int modulo_mul(int a, int b, int m) {
	// cast a to 64-bits to prevent overflows
	return ((long long)(a) * b) % m;
}