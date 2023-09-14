class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxs=nums[0];
        int curr=0;
        for(auto &c:nums){
            if(curr<0) curr=0;
            curr+=c;
            mxs=max(mxs,curr);
        }
        return mxs;
    }
};