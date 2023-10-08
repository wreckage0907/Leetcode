class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        if (*max_element(nums1.begin(), nums1.end()) < 0 && *min_element(nums2.begin(), nums2.end()) > 0)
            return *max_element(nums1.begin(), nums1.end()) * *min_element(nums2.begin(), nums2.end());
        if (*min_element(nums1.begin(), nums1.end()) > 0 && *max_element(nums2.begin(), nums2.end()) < 0)
            return *min_element(nums1.begin(), nums1.end()) * *max_element(nums2.begin(), nums2.end());

        int m = nums2.size() + 1;
        vector<int> prev(m, 0);
        vector<int> dp(m, 0);

        for (int i = nums1.size() - 1; i >= 0; --i) {
            dp.assign(m, 0);
            for (int j = nums2.size() - 1; j >= 0; --j) {
                int use = nums1[i] * nums2[j] + prev[j + 1];
                dp[j] = max({use, prev[j], dp[j + 1]});
            }
            prev = dp;
        }

        return dp[0];
    }
};