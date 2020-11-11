int josephus(int n, int k) {
    // handle base cases
	if (n == 1)
	    return 0;
	if (k == 1)
	    return n-1;
	    
	// recursive special case
	if (k > n)
	    return (josephus(n-1,k)+k)%n;
	
	// recursive general case
	int res = josephus(n-n/k,k)-n%k;
	if (res < 0)
	    return res + n;
	return res + res/(k-1);
}
