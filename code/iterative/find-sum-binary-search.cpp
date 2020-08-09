// for each element in the array we will search for a pair
for (int i = 0; i < n; i++) {
	// binary search before the current element
	// looking for what will add up to 100
	if (binary_search(arr, arr + i, 100 - arr[i]))
		return true;
	// do the same for after the element
	if (binary_search(arr + i + 1, arr + n, 100 - arr[i]))
		return true;
}
return false;