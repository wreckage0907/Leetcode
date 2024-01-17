#pragma GCC optimize('O3','unroll-loops')
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> why;
        for(int x:arr) mp[x]++;

        for(auto it:mp){
            if(why.find(it.second)== why.end()) why.insert(it.second);
            else return false;
        }
        return true;
    }
};