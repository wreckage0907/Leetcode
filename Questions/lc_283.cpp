#pragma GCC optimize("Ofast")
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                swap(nums[lastNonZeroIndex++], nums[i]);
            }
        }
    }
};