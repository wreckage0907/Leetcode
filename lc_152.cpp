class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int res = nums[0];  
        int mn = nums[0];   
        int mx = nums[0]; 

        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[i] < 0) {
                swap(mn, mx);
            }

            
            mx = max(nums[i], mx * nums[i]);
            mn = min(nums[i], mn * nums[i]);

            
            res = max(res, mx);
        }

        return res;
    }
};