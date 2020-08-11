// generate the counts array
for (int i = 0; i < n; i++)
	counts[unsorted[i]]++;

// generate the array from the counts
int p = 0;
for (int i = 0; i < 10; i++) {
	for (int j = 0; j < counts[i]; j++) {
		arr[p] = i;
		p++;
	}
}