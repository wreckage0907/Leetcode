#pragma GCC optimize('O3')
class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int n = nums.size();
        int ans = n;

        std::sort(nums.begin(), nums.end());
        auto last = std::unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());

        int j = 0;
        int m = nums.size();

        for (int i = 0; i < m; ++i) {
            while (j < m && nums[j] < nums[i] + n) {
                j++;
            }
            ans = std::min(ans, n - (j - i));
        }

        return ans;
    }
};