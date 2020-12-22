//Longest Palindrome in a String
// NOTE: Required Time Complexity O(n2).
#include <iostream>
using namespace std;


bool isPalen(string s)
{
	int l = 0, r = s.length() - 1;
	while (l <= r)
	{
		if (s[l] != s[r])
		{
			return false;
		}
		++l;
		--r;
	}
	return true;
}

int main() {
	int t = 1;
	while (t--)
	{
		string str, mxStr = "";
		str = "aaaabbaa";
		int mxLen = 1, n = str.length();

		bool table [n][n];
		memset(table, false, sizeof(table));

		for (int i = 0; i < n; i++)
		{
			table[i][i] = true;
		}

		for (int i = 1; i < n; i++)
		{
			if (str[i - 1] == str[i])
			{
				table[i - 1][i] = true;
				mxLen = 2;
			}
		}

		for (int k = 3; k < n; k++)
		{
			for (int i = 0; i < n - k + 1; i++)
			{
				int j = i + k - 1;

				if (str[i] == str[j] && table[i + 1][j - 1])
				{
					table[i][j] = true;
					if (k > mxLen)
					{
						mxLen = k;
						mxStr = str.substr(i, k);
					}
				}
			}
		}
		cout << mxStr << endl;

	}
	return 0;
}