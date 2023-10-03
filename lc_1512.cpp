#pragma GCC optimize('Ofast')
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        std::unordered_map<int,int> a;
        int res=0;
        for(int c:nums) {
            if(a.find(c)!=a.end()){
                res+=a[c];
                a[c]++;
            }
            else a[c]=1;
        } 
        return res;  
    }
};