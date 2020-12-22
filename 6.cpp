//Check if a string is a valid shuffle of two other strings
//1XY2 is a valid shuffle of XY and 12
//Y12X is not a valid shuffle of XY and 12
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool shuffleCheck(string first, string second, string result) {
	if (first.length() + second.length() != result.length())
	{
		return false;
	}
	int i = 0, j = 0, k = 0;

	while (k != result.length())
	{
		if (i < first.length() && result[k] == first[i])
		{
			++i;
		}
		else if (j < second.length() && result[k] == second[j]) {
			++j;
		}
		else {
			return false;
		}
		++k;
	}
	if (i < first.length() || j < second.length())
	{
		return false;
	}
	return true;
}

int main() {
	string first = "XY";
	string second = "12";
	string results[] = {"1XY2", "Y12X"};

	for (string res : results) {
		if (shuffleCheck(first, second, res)) {
			cout << res << " is a valid shuffle" << endl;
		}
		else {
			cout << res << " is not a valid shuffle" << endl;
		}
	}
}