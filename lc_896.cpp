#pragma GCC optimize("Ofast,funroll-loops")
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in=is_sorted(nums.begin(),nums.end());
        bool dc=is_sorted(nums.rbegin(),nums.rend());
        return in||dc;        
    }
};