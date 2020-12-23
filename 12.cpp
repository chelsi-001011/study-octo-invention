//Cyclically rotate an array by one
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 1; i <= n - 1; i++)
		{
			cin >> a[i];
		}
		cin >> a[0];

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}