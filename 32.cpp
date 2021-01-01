
// longestCommonPrefix
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0 )
        return "";
    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        int m = min(prefix.size(), strs[i].size());
        string temp = strs[i];
        for (int j = 0; j < m; j++)
        {
            if (prefix[j] != temp[j]) {
                prefix = prefix.substr(0, j);
                break;
            }
        }
    }
    return prefix;
}

int main() {

    vector <string> strs;
    strs = {"flower", "flow", "flight"};
    // strs = {"dog", "racecar", "car"};
    string res = longestCommonPrefix(strs);
    cout << res << endl;

    return 0;
}