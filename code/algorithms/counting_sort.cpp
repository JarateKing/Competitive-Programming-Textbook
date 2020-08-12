// generate the counts array from `arr`
for (int i = 0; i < n; i++)
	counts[arr[i]]++;

// sort `arr` using the counts array
int p = 0;
for (int i = 0; i < 10; i++) {
	for (int j = 0; j < counts[i]; j++) {
		arr[p] = i;
		p++;
	}
}