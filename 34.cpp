//Second most repeated string in a sequence
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
	return a.second > b.second;
}


string secFrequent (string arr[], int n)
{
	map <string, int> map1;
	for (int i = 0; i < n; i++)
	{
		map1[arr[i]]++;
	}

	vector<pair<string, int> > A;
	for (auto& it : map1) {
		A.push_back(it);
	}

	sort(A.begin(), A.end(), cmp);
	auto x = A.begin();
	++x;
	return x->first;
}

int main() {
	string arr[] = {"aaa", "bbb", "ccc", "bbb", "aaa", "aaa"};
	string res = secFrequent(arr, 6);
	cout << res << endl;

	return 0;
}