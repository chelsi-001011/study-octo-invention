// Minimum Swaps for Bracket Balancing
#include <bits/stdc++.h>
using namespace std;

long swapCounts(string s, int n)
{
    // int n=s.length();
    vector <int> pos;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[')
            pos.push_back(i);
    }

    int cnt = 0, p = 0;
    long sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[')
        {
            ++cnt;
            ++p;
        }
        else if (s[i] == ']')
            --cnt;

        if (cnt < 0) {
            sum += pos[p] - i;
            swap(s[i], s[pos[p]]);
            ++p;

            cnt = 1;
        }
    }
    return sum;
}


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << swapCounts(s, n) << endl;
    }
    return 0;
}