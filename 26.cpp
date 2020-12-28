//Longest Prefix Suffix

// Expected Time Complexity: O(|str|)
// Expected Auxiliary Space: O(|str|)

//Using KMP search
#include<bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string s)
{
	int n = s.size();

	int lps[n];
	lps[0] = 0;

	int len = 0;

	int i = 1;
	while (i < n)
	{
		if (s[i] == s[len])
		{
			len++;
			lps[i] = len;
			++i;
		}
		else {
			if (len != 0)
			{
				len = lps[len - 1];
			} else {
				lps[i] = 0;
				++i;
			}
		}
	}
	return lps[n - 1];
}

int main()
{
	string s = "aaaa";
	cout << longestPrefixSuffix(s);
	return 0;
}