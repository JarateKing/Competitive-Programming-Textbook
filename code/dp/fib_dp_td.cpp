// store our base cases f(0) and f(1)
map<int, int> f = {{0,0}, {1,1}};

// calculate the nth fibonacci value
int fibonacci(int n) {
	// if there is a stored result, use it
	if (f.count(n)) return f[n];
	
	// store our result
	f[n] = fibonacci(n-1) + fibonacci(n-2);
	
	return f[n];
}