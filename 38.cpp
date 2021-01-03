//A Program to check if strings are rotations of each other or not
#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2) {

	if (s1.size() != s2.size())
		return false;

	string temp = s1 + s1;

	for (int i = 0; i < s1.size(); i++)
	{
		string t = temp.substr(i, s1.size());
		if (t == s2)
			return true;
	}
	return false;
}

int main() {
	string str1 = "AACD", str2 = "ACDA";
	if (areRotations(str1, str2))
		cout << "they are rotations of each other" << endl;
	else
		cout << "They are not rotations of each other" << endl;
	return 0;
}