// Count Palindromic Subsequences
// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(N*N)
int dp[1001][1001];
int helper(int i, int j, string s) {

    if (i > j) return 0;

    if (i == j) return 1;

    if (dp[i][j] != -1) return dp[i][j];

    if (s[i] == s[j])
    {
        return dp[i][j] = 1 + helper(i + 1, j, s) + helper(i, j - 1, s);
    }
    else
    {
        return dp[i][j] = helper(i + 1, j, s) + helper(i, j - 1, s) - helper(i + 1, j - 1, s);
    }
}
int countPS(string str)
{
    int n = str.length();
    dp[n][n];
    memset(dp, -1, sizeof(dp));

    return helper(0, n - 1, str);
}
