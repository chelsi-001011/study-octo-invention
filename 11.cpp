//Write a program to print all permutations of a given string
#include <bits/stdc++.h>
using namespace std;

void printPermutation(string s, int l, int r) {

	if (l == r) //base
	{
		cout << s << " ";
	}
	else {
		//permutation
		for (int i = l; i <= r; i++)
		{
			swap(s[i], s[l]);

			printPermutation(s, l + 1, r);

			swap(s[i], s[l]);
		}
	}
}

int main() {

	string s = "ABC";
	int n = s.length();
	printPermutation(s, 0, n - 1);

	return 0;
}