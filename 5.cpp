//Union of two arrays - print the count of union elements of the two arrays.
//Expected Time Complexity: O(N + M).
//Expected Auxiliary Space: O(N + M).
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, i = 0, j = 0;
		cin >> n >> m;
		int a[n], b[m];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		set <int> set1;
		for (i = 0; i < n; i++)
		{
			set1.insert(a[i]);
		}
		for (i = 0; i < m; i++)
		{
			set1.insert(b[i]);
		}
		cout << set1.size() << endl;

	}
	return 0;
}