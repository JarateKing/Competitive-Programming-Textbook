int modulo_sub(int a, int b, int m) {
	// add m if a<b, add 0 otherwise
	return (a - b) + ((a < b) ? m : 0);
}