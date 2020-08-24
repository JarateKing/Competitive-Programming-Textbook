int f[100];

// precalculate fibonacci sequence
void genFibonacci() {
	// f(0) and f(1) base cases
	f[0] = 0;
	f[1] = 1;
	
	// general "recursive" case
	for (int i = 2; i < 100; i++)
		f[i] = f[i-1] + f[i-2];
}

// calculate the nth fibonacci value
int fibonacci(int n) {
	return f[n];
}