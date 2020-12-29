// Count the Reversals
// Input
// 4
// }{{}}{{{
// {{}}}}
// {{}{{{}{{}}{{
// {{{{}}}}

// Output
// 3
// 1
// -1
// 0
// Time Complexity: O(n)
// Auxiliary Space: O(n)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countReversals(string s) {
    int n = s.size();

    if (n % 2 != 0)
    {
        return -1;
    }
    stack <char> stk;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '}' && !stk.empty())
        {
            if ( stk.top() == '{') {
                stk.pop();
            }
            else {
                stk.push(s[i]);
            }
        } else {
            stk.push(s[i]);
        }
    }
    int M = 0, N = 0, res = 0;
    while (!stk.empty()) {
        if (stk.top() == '{')
            M++;
        else {
            N++;
        }
        stk.pop();
    }
    res = ceil((double)M / 2) + ceil((double)N / 2);
    // ceil(m/2) + ceil(n/2) == (m+n)/2 + (n/2)
    cout << ceil((double)M / 2) << " " << ceil((double)N / 2) << endl;
    return res;
}


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << countReversals(s) << endl;
    }
    return 0;
}