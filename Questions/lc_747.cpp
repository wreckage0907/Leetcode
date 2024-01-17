#pragma GCC optimize('O3')
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int res = find(nums.begin(), nums.end(), maxi) - nums.begin();
        
        for (int x : nums) {
            if (x != maxi && x * 2 > maxi) {
                return -1;
            }
        }
        return res;
    }
};