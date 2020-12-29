//Convert a sentence into its equivalent mobile numeric keypad sequence
//Checkout the image : https://media.geeksforgeeks.org/wp-content/cdn-uploads/Mobile-keypad.png
//Input : GEEKSFORGEEKS
// Output : 4333355777733366677743333557777
#include <bits/stdc++.h>
using namespace std;

string printSequence(string s[], string input)
{
	string res = "";
	for (int i = 0; i < input.size(); i++)
	{
		res += s[input[i] - 65];
	}
	return res;
}

int main()
{
	// storing the sequence in array
	string str[] = {"2", "22", "222",
	                "3", "33", "333",
	                "4", "44", "444",
	                "5", "55", "555",
	                "6", "66", "666",
	                "7", "77", "777", "7777",
	                "8", "88", "888",
	                "9", "99", "999", "9999"
	               };

	string input = "GEEKSFORGEEKS";
	//Output should be - 4333355777733366677743333557777
	cout << printSequence(str, input);
	return 0;
}