// Count and Say
// Input: n = 4
// Output: "1211"
// Explanation:
// countAndSay(1) = "1"
// countAndSay(2) = say "1" = one 1 = "11"
// countAndSay(3) = say "11" = two 1's = "21"
// countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"

string countAndSay(int n) {
	if (n == 1) //base case
		return "1";

	string temp = countAndSay(n - 1);
	char c = temp[0];
	int count = 1;
	string res = "";

	for (int i = 1; i < temp.length(); i++)
	{
		if (c == temp[i])
		{
			count++;
		}
		else {
			res += to_string(count) + c;
			c = temp[i];
			count = 1;
		}
	}
	res += to_string(count) + c;
	return res;
}