class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> hset;
        for(auto &c:nums){
            if(hset.find(c)!=hset.end()){
                return true;
            }
            hset.insert(c);
        }
        return false;
        
    }
};