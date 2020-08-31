bool isAnagram(string a, string b) {
	// store the number of each character
	int count[26] = {0};

	// increment the count of each character
	for (auto c : a)
		count[(c-'a')]++;

	// decrement the count of each character
	for (auto c : b)
		count[(c-'a')]--;

	// check if they are all 0
	for (int i = 0; i < 26; i++)
		if (count[i] != 0)
			return false;
	
	return true;
}