#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#pragma GCC optimize("O3")
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unordered_map<int,int> dp;
        dp.insert(make_pair(0,1));
        for(int i=1;i< target+1;i++){
            dp[i]=0;
            for(int j:nums){
                auto k=dp.find(i-j);
                if(k!=dp.end() && INT_MAX - dp[i] > k->second) dp[i] += k->second;
            }
        }
        return dp[target];      
    }
};

