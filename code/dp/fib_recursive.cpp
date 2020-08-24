// calculate the nth fibonacci value
int fibonacci(int n) {
	// f(0) and f(1) base cases
	if (n < 2) return n;
	
	// general recursive case
	return fibonacci(n-1) + fibonacci(n-2);
}