#pragma GCC optimize('O3','unroll-loops')
class Solution {
public:
    int reve(int x){
        int rev=0;
        while(x>0){
            int rem=x%10;
            rev = (10*rev)+rem;
            x/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> res;
        int cnt=0;
        for(int x:nums){
            if (res.find(x)==res.end()){
                cnt++;
                res.insert(x);
            }
            if (res.find(reve(x))==res.end()){
                cnt++;
                res.insert(reve(x));
            }
        }

        
        return cnt;
    }
};