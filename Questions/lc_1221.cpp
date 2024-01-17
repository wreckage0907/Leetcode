class Solution {
public:
    int balancedStringSplit(string s) {
        unordered_map<char,int> mp={{'L',-1},{'R',1}};
        int ans=0,curr=0;
        for(char c:s){
            curr += mp[c];
            if(curr==0) ans++;
        }
        return ans;
    }
};