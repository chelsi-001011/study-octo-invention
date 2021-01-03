//Print all the duplicates in the input string
//Assuming only alphabets are allowed
#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 26

void printDups(string s) {

	map <char, int> fmap;

	for (int i = 0; i < s.length(); i++)
	{
		fmap[s[i]]++;
	}
	for (auto x : fmap) {
		if (x.second > 1)
			cout << x.first << ", count= " << x.second << endl;
	}
}
int main()
{
	string str = "test string";
	printDups(str);
	return 0;
}