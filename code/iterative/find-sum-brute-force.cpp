// for each element in the array we will search for a pair
for (int i = 0; i < n; i++) {
	// we can start j at i+1 because earlier pairs were already checked
	for (int j = i+1; j < n; j++) {
		if (arr[i] + arr[j] == 100)
			return true;
	}
}
return false;