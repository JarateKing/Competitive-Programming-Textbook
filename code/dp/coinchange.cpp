// our dp table
int counts[n+1] = {0};

// our base case
// there is 1 way to solve 0
counts[0] = 1;

// for every coin, we go through the array
// and add the solutions from our subproblems
for (auto e : coins)
	for (int i = 0; i <= n - e; i++)
		counts[i+e] += counts[i];

// return the solutions with n as the target
return counts[n];