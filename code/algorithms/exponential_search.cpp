// get range to binary search
// remove "i < n" if unbounded
int i = 1;
while (i < n && arr[i] <= k)
	i *= 2;

// binary search the range
// replace "min(i,n)" with "i" if unbounded
return binary_search(arr + (i/2), arr + min(i, n), k);