vector<int> factorize(int n) {
	// vector to store our factors
	vector<int> ans;
	
	// attempt all factors until sqrt(n)
	for (int i = 2; i <=sqrt(n); i++) {
		// divide n by i as much as possible
		while (n % i == 0) {
			ans.push_back(i);
			n /= i;
		}
	}
	// if there's anything left over, add it too
	if (n > 1)
		ans.push_back(n);
	
	return ans;
}
