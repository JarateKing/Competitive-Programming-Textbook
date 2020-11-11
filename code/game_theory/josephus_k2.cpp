// case where k = 2
int josephus(int n) {
    // p = 2^(log2(n))
    int p = 1 << (32 - __builtin_clz(n)-1);
	return 2*(n-p);
}
