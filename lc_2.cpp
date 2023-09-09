#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> fhm;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            
            if (fhm.find(diff) != fhm.end()) {
                res.push_back(fhm[diff]);
                res.push_back(i);
                return res;
            }
            
            fhm[nums[i]] = i;
        }
        return nums;
    }
};