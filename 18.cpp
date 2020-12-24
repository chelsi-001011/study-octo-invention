// Split the binary string into substrings with equal number of 0s and 1s.
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int maxEqualString(string s) {
	int cnt0 = 0, cnt1 = 0, ans = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			cnt0++;
		}
		else {
			cnt1++;
		}

		if (cnt1 == cnt0 && cnt1 != 0 && cnt0 != 0) {

			ans++;
			cnt0 = 0;
			cnt1 = 0;
		}
	}
	if (cnt0 != cnt1) {
		return -1;
	}

	return ans;
}

int main() {
	string s = "0100110101";
	cout << maxEqualString(s) << endl;
	s = "0111100010";
	cout << maxEqualString(s) << endl;
	return 0;
}