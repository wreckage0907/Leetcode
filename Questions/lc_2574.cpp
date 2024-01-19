#pragma GCC optimize('unroll-loops')
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size(), 0),right(nums.size(), 0),ans(nums.size(), 0);

        right[0] = accumulate(nums.begin()+1, nums.end(), 0);
        ans[0] = right[0] - left[0];

        for (int i = 1; i < nums.size(); i++) {
            left[i] = left[i - 1] + nums[i-1];
            right[i] = right[i - 1] - nums[i];
            ans[i] = abs(left[i] - right[i]);
        }

        return ans;
    }
};