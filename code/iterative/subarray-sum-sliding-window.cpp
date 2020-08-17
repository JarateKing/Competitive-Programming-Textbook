bool bruteforce(vector<int> arr, int k) {
	// sum all ranges [i,i+k) and check
	for (int i = 0; i <= arr.size() - k; i++) {
		int sum = 0;
		for (int j = 0; j < k; j++)
			sum += arr[i+j];
		if (sum == 100)
			return true;
	}
	return false;
}

bool slidingwindow(vector<int> arr, int k) {
	// sum range [0,k)
	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += arr[i];
	if (sum == 100)
		return true;
	
	// check all other ranges
	for (int i = k; i < arr.size(); i++) {
		sum += arr[i];
		sum -= arr[i-k];
		if (sum == 100)
			return true;
	}

	return false;
}