// generate the prime sieve
// if n is prime, sieve[n] = 0
// if n is composite, sieve[n] = 1
vector<int> primeSieve(int maximum) {
    vector<int> sieve(maximum+1);
    
    // 0 and 1 are not prime
    sieve[0] = 1;
    sieve[1] = 1;
    
    // iterate through each value
    for (int i = 2; i * i <= maximum; i++)
        // if i is prime, we mark every multiple as composite
        if (sieve[i] == 0)
            for (int j = i * 2; j <= maximum; j += i)
                sieve[j] = 1;
                
    return sieve;
}
