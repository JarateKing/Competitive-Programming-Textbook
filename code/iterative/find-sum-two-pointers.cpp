// set up our two pointers
int left = 0, right = n-1;
// loop as long our pointers haven't met eachother yet
while (left < right) {
	int sum = arr[left] + arr[right];
	// if we found a matching pair, end early
	if (sum == 100)
		return true;
	// otherwise we adjust our pointers
	if (sum > 100)
		right--;
	else
		left++;
}
return false;