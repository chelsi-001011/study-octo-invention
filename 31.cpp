// Roman Number to Integer

int value(char c)
{
	if (c == 'I')
		return 1;
	else if (c == 'V')
		return 5;
	else if (c == 'X')
		return 10;
	else if (c == 'L')
		return 50;
	else if (c == 'C')
		return 100;
	else if (c == 'D')
		return 500;
	else if (c == 'M')
		return 1000;

	return -1;
}

int romanToDecimal(string &str) {
	int res = 0;

	for (int i = 0; i < str.length(); i++)
	{
		int s1 = value(str[i]);

		if (i + 1 < str.length())
		{
			int s2 = value(str[i + 1]);

			if (s1 < s2)
			{
				res = res + s2 - s1;
				++i;
			}
			else {
				res = res + s1;
			}
		} else {
			res += s1;
		}
	}
	return res;
}