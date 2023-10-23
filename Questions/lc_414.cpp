class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());

        if (s.size() < 3) {
            return *s.rbegin();
        }

        vector<int> uni(s.begin(), s.end());

        return uni[uni.size() - 3];
    }
};