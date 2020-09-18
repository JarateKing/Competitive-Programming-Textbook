int modulo_add(int a, int b, int m) {
	// subtract m if a+b>m, subtract 0 otherwise
	return (a + b) - ((a + b >= m) ? m : 0);
}