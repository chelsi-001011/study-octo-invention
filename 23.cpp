//Rabin-Karp Algorithm
#include <bits/stdc++.h>
using namespace std;

// d is the number of characters in the input alphabet
#define d 256

//q is a prime number used for hash function

void search (char pat[], char txt[], int q) {
	int m = strlen(pat);
	int n = strlen(txt);
	int i = 0, j = 0;
	int p = 0; // hash value for pattern
	int t = 0; // hash value for txt
	int h = 1;

	// The value of h would be "pow(d, M-1)%q"
	for (i = 0; i < m - 1; i++)
	{
		h = (h * d) % q;
	}

	//first set of values for pattern and text
	for ( i = 0; i < m; i++)
	{
		p = (p * d + pat[i]) % q;
		t = (t * d + txt[i]) % q;
	}

	//sliding over the text now
	for (i = 0; i <= n - m; i++)
	{
		if (p == t)
		{
			for (j = 0; j < m; j++)
			{
				if (txt[i + j] != pat[j])
					break;

			}
			if (j == m)
			{
				cout << "Pattern found at index " << i << endl;
			}
		}

		if (i < n - m)
		{
			t = (d * (t - txt[i] * h) + txt[i + m]) % q;

			if (t < 0)
			{
				t = (t + q);
			}
		}
	}
}

int main()
{
	char txt[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";

	// A prime number
	int q = 101;

	// Function Call
	search(pat, txt, q);
	return 0;
}
