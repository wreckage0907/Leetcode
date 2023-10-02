#pragma GCC optimze('O3')
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums[0];
        for(int i=1;i<nums.size();i++){
            a  = a ^ nums[i];
        }
        return a;
    }
};