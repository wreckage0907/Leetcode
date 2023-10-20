class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> count;
        
        for (int n : nums) {
            count[n]++;
            if (count.size() <= 2)
                continue;
            
            std::unordered_map<int, int> newCount;
            for (auto& pair : count) {
                if (pair.second > 1)
                    newCount[pair.first] = pair.second - 1;
            }
            count = newCount;
        }
        
        std::vector<int> res;
        for (auto& pair : count) {
            if (std::count(nums.begin(), nums.end(), pair.first) > nums.size() / 3)
                res.push_back(pair.first);
        }
        
        return res;
    }
};