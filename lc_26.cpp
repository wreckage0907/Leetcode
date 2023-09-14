#pragma GCC optimize("Ofast,funroll-loops")
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int u = 0;
        for (int i : nums)
            if (!u || i > nums[u-1])
                nums[u++] = i;
        return u;
    }
};