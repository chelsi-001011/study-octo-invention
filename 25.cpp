//KMP (Knuth Morris Pratt) Pattern Searching
#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(char* pat, int m, int* lps)
{
	//length of previous longest prefix suffix
	int len = 0;

	lps[0] = 0;

	int i = 1;
	while (i < m)
	{
		if (pat[i] == pat[len])
		{
			len++;
			lps[i] = len;
			++i;
		} else {
			if (len != 0) {
				len = lps[len - 1];
			}
			else {
				lps[i] = 0;
				++i;
			}
		}
	}
}

void KMPSearch(char* pat, char* txt) {

	int m = strlen(pat);
	int n = strlen(txt);

	int lps[m];

	computeLPSArray(pat, m, lps);

	int i = 0, j = 0; //i == index for txt, j== index for pat
	while (i < n) {
		if (pat[j] == txt[i])
		{
			++i;
			++j;
		}

		if (j == m)
		{
			cout << "Found pattern at index " << i - j << endl;
			j = lps[j - 1];
		}
		else if (i < n && pat[j] != txt[i])
		{
			if (j != 0)
				j = lps[j - 1];
			else
				i++;
		}
	}

}

int main()
{
	char txt[] = "ABABDABACDABABCABAB";
	char pat[] = "ABABCABAB";
	KMPSearch(pat, txt);
	return 0;
}



