//Print all subsequences of a string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Pick and Don’t Pick Concept
vector <string> res;
void subseq(string s, string ans)
{
	if (s.length() == 0)
	{
		res.push_back(ans);
		return ;
	}

	subseq(s.substr(1), ans + s[0]);

	subseq(s.substr(1), ans);
}
//Second Method
void subseqRec(string s, int n, int index = -1, string curr = "") {

	if (!curr.empty()) {
		cout << curr << endl;
	}

	for (int i = index + 1; i < n; i++)
	{
		curr += s[i];

		subseqRec(s, n, i, curr);

		curr.erase(curr.size() - 1);
	}
}
void printsubseq(string s) {
	subseqRec(s, s.length());
}

int main() {
	string s = "abc";
	subseq(s, "");
	for (string x : res)
	{
		cout << x << " ";
	}
	cout << endl;

	printsubseq(s);
	return 0;
}