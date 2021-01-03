//Reverse a string

//Method 1 - Iteration
void reverseString(vector<char>& s) {
	int n = s.size();
	for (int i = 0; i < n / 2; i++)
	{
		char t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}

//Method 2 - Two Pointers
void reverseString(vector<char>& s) {
	int left = 0, right = s.size() - 1;
	while (left < right) {
		char tmp = s[left];
		s[left++] = s[right];
		s[right--] = tmp;
	}
}

//Method 3 - Recursion
void helper(vector <char>& s, int left, int right) {
	if (left >= right) return;
	char tmp = s[left];
	s[left++] = s[right];
	s[right--] = tmp;
	helper(s, left, right);
}

void reverseString(char[] s) {
	helper(s, 0, s.length - 1);
}

//Pallidrom String
int isPalindrome(string S)
{
	int l = 0, r = S.length() - 1;
	while (l <= r)
	{
		if (S[l] == S[r])
		{
			l++;
			r--;
		}
		else {
			return 0;
		}
	}
	return 1;
}
