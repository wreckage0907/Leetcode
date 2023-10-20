#pragma GCC optimize('O3')
class Solution {
public:
    int n, m, k;
    int dp[51][51][101]; 
    int solve(int idx, int cst, int last) {
        if (idx == n) {
            if (cst == k) return 1;
            return 0;
        }
        if (dp[idx][cst][last] != -1) return dp[idx][cst][last];
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            if (i > last) ans = (ans + solve(idx + 1, cst + 1, i)) % 1000000007;
            else ans = (ans + solve(idx + 1, cst, last)) % 1000000007;
        }

        return dp[idx][cst][last] = ans;
    }

    int numOfArrays(int N, int M, int K) {
        n = N;
        m = M;
        k = K;
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0);
    }
};