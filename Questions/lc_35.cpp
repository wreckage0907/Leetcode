#pragma GCC optimize('O3')
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;

        while(l<=r){
            int m=l+(r-l)/2;
            
            if(nums[m]==target) return m;
            if(nums[m]<target) l= m+1;
            else r=m-1;
        }
        return l;
    }
};