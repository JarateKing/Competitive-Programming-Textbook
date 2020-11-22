// values of a that will work for any value < 2^32
vector<int> miller_rabin_primes = {2, 7, 61};

// for consistency with sieve, return 0 if prime and 1 if composite
bool miller_rabin_deterministic(int n) {
    // base cases
    if (n < 2) return true;
    if (n == 2) return false;
    if (n % 2 == 0) return true;
    
    // factor out powers of 2 from n-1, stored as s
    // also keep track of how many factors were removed
    int s = n - 1;
    int c = 0;
    while (s % 2 == 0) {
        s /= 2;
        c++;
    }
    
    // repeat this process for more precision
    for (auto a : miller_rabin_primes) {
        // a is prime, so we can check if prime here
        if (a == n) return false;
        
        // a^s mod n
        int m = modulo_pow(a, s, n);
		
		// if a^s mod n == 1, we skip the rest
		if (m == 1) continue;
        
        // loop through, ending early if m == 1 or n-1
        for (int j = 0; j < c && m != n-1; j++) {
            m = modulo_mul(m, m, n);
            
            // when the loop ends and m isn't n-1, we are composite
            if (j == c-1 && m != n-1) return true;
        }
    }
    
    // n is prime
    return false;
}