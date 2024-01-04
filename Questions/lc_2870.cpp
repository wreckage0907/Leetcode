#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int n : nums) count[n]++;
        int res = 0;
        for (auto [num, freq] : count) {
            if (freq == 1) return -1;
            if (freq % 3 == 0) res += freq / 3; 
            else res += (freq / 3) + 1;  
        }
        return res;
    }
};