int right = 0, sum = 0;
for (int left = 0; left < n; left++) {
	// get rid of the last left value
	if (left != 0)
		sum -= arr[left-1];
	
	// ensure we always have a range
	if (right <= left) {
		sum = arr[left];
		right = left + 1;
	}
	
	// try to expand right as far as we can
	while (sum < 100 && right < n) {
		sum += arr[right];
		right++;
	}
	
	// check if the sum is equal to our target
	if (sum == 100)
		return true;
}
return false;