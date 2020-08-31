bool isAnagram(string a, string b) {
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	return a == b;
}