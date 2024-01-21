#pragma GCC optimize('O3')
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            if(arr[l]+arr[r]==target) return {l+1,r+1};
            else if(arr[l]+arr[r]>target) r--;
            else l++;
        }
        return {l+1,r+1};
    }
};