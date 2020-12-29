//Word Break
// Input:
// n = 12
// B = { "i", "like", "sam", "sung", "samsung", "mobile",
// "ice","cream", "icecream", "man", "go", "mango" }
// A = "ilike"
// Output: 1
// Explanation:The string can be segmented as "i like".

// A : given string to search
// B : vector of available strings

int wordBreak(string A, vector<string> &B) {
    int n = A.size();
    vector <int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string s = A.substr(i, j - i + 1);
            auto it = find(B.begin(), B.end(), s);
            if (it != B.end())
            {
                v[j] = 1;
            }
        }
    }
    return v[n - 1];
}