// loop through each element
for (int i = 0; i < n; i++) {
	// propogate element to as early as possible
	// at each step, the range [0,i) should be sorted
	int j = i;
	while (j > 0 && arr[j] < arr[j-1]) {
		swap(arr[j], arr[j-1]);
		j--;
	}
}