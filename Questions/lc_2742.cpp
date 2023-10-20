#pragma GCC optimize("O3")

class Solution {
public:
    int paintWalls(std::vector<int>& cost, std::vector<int>& time) {
        int n = cost.size();
        std::vector<int> dp(n + 1, std::numeric_limits<int>::max());
        dp[0] = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = n; j >= 0; --j) {
                int sumTime = j + time[i];
                int new_j = (sumTime < 0 || sumTime > INT_MAX - 1) ? n : std::min(sumTime + 1, n);
                
                if(dp[j] != std::numeric_limits<int>::max() && cost[i] < INT_MAX - dp[j]) {
                    dp[new_j] = std::min(dp[new_j], dp[j] + cost[i]);
                }
            }
        }

        return dp[n];
    }
};
