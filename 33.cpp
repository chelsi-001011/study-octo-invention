
//Minimum number of flips
#include <bits/stdc++.h>
using namespace std;

int minFlips(string s) {
	int even1 = 0, odd1 = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (i % 2)
			odd1 += (s[i] - '0');
		else
			even1 += (s[i] - '0');
	}
	int n = s.length() / 2;
	n += 1;
	int res = n - max(odd1, even1);

	return res;
}

int main() {
	string str = "001";
	// string str = "0001010111";
	cout << minFlips(str) << endl;
	return 0;
}