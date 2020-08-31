int LIS(vector<int> arr) {
	// setup memoization table
	int n = arr.size();
	vector<int> memo(n);

	// for each element of arr
	for (int i = 0; i < n; i++) {
		// set base case
		memo[i] = 1;

		// get maximum subsequence size with this element
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && memo[i] <= memo[j])
				memo[i] = memo[j] + 1;
		}
	}

	// get the longest subsequence size
	int best = 1;
	for (auto e : memo)
		if (e > best)
			best = e;
	
	return best;
}