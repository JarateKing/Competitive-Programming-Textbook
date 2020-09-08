bool isAnagram(string a, string b) {
	// make sure both strings are ordered alphabetically
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	// check if the two strings are the same
	// in other words, they have the same amount of each character
	return a == b;
}