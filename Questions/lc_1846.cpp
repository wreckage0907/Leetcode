#pragma GCC optimize('O3')
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res=0;
        for(int n:arr) res=min(res+1,n);
        return res;        
    }
};