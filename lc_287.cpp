#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int index = abs(nums[i]); 
            if (nums[index] < 0) {
                return index;
            }
            nums[index] = -nums[index];
        }
        return -1;  
    }
};
