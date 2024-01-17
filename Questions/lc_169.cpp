#pragma GCC optimize('Ofast','funroll-loops')
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x:arr) mp[x]++;
        auto maxElement = std::max_element(mp.begin(), mp.end(),
        [](const auto& lhs, const auto& rhs) {
            return lhs.second < rhs.second;
        });
        return maxElement->first;
    }
};