#pragma GCC optimize("O3")
class Solution {
public:
    bool find132pattern(std::vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        stack<int> s;
        int s3 = INT_MIN;

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < s3) return true;
            
            while (!s.empty() && nums[i] > s.top()) {
                s3 = s.top();
                s.pop();
            }

            s.push(nums[i]);
        }

        return false;
    }
};
