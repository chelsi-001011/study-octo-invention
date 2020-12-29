// Count of number of given string in 2D character array
// Input : a ={
//             {D,D,D,G,D,D},
//             {B,B,D,E,B,S},
//             {B,S,K,E,B,K},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,G}
//            }
//         str= "GEEKS"
// Output :2

#include <bits/stdc++.h>
using namespace std;

int sol(int i, int j, string s, char ch[6][6], int size, int idx) {

	int found = 0;

	if (i >= 0 && j >= 0 && i < 6 && j < 6 && s[idx] == ch[i][j])
	{
		char temp = ch[i][j];
		ch[i][j] = 0;
		idx++;
		if (idx == size) // whole word found
		{
			found = 1;
		}
		else {
			found += sol(i + 1, j, s, ch, size, idx);
			found += sol(i - 1, j, s, ch, size, idx);
			found += sol(i, j + 1, s, ch, size, idx);
			found += sol(i, j - 1, s, ch, size, idx);
		}
		ch[i][j] = temp;
	}
	return found;
}


int main()
{
	string s = "GEEKS";
	char charr[6][6] = {
		{'D', 'D', 'D', 'G', 'D', 'D'},
		{'B', 'B', 'D', 'E', 'B', 'S'},
		{'B', 'S', 'K', 'E', 'B', 'K'},
		{'D', 'D', 'D', 'D', 'D', 'E'},
		{'D', 'D', 'D', 'D', 'D', 'E'},
		{'D', 'D', 'D', 'D', 'D', 'G'}
	};
	int ans = 0;
	int size = s.size();
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			ans += sol(i, j, s, charr, size, 0);
		}

	}
	cout << ans << endl;
	return 0;
}