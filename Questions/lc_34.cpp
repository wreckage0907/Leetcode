#pragma GCC optimize('Ofast')
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = lower_bound(nums.begin(), nums.end(), target)-nums.begin(), b = upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        return a == b ? vector<int>({-1, -1}) : vector<int>({a, b-1});
    }
};
