//Boyer Moore Algorithm for Pattern Searching
//Bad Character Heuristic

void search(string txt, string pat) {

	int m = pat.size(), n = txt.size();

	int badchar[256];

	for (int i = 0; i < 256; i++)
		badchar[i] = -1;

	for (int i = 0; i < m; i++)
		badchar[(int) str[i]] = i;

	int s = 0;

	while (s <= (n - m))
	{
		int j = m - 1;

		while (j >= 0 && pat[j] == txt[s + j])
			j--;

		if (j < 0)
		{
			cout << "pattern occurs at shift = " << s << endl;
			s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
		}
		else
			s += max(1, j - badchar[txt[s + j]]);
	}
}

