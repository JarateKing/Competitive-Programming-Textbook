bool isPalindrome(string str) {
	int n = str.length();
	
	// for every character in the first half of the string
	// make sure it's the same as its inverse
	for (int i = 0; i < n/2; i++)
		if (str[i] != str[n-1-i])
			return false;
	return true;
}