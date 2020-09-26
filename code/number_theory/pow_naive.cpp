int power(int a, int n) {
	int value = 1;
	for (int i = 0; i < n; i++)
		value *= a;
	
	return value;
}