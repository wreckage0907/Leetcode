#pragma GCC optimize('O3')
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        for (int i=cost.size()-3;i>-1;i--){
            cost[i] += min(cost[i+1],cost[i+2]);
        }
        return min(cost[0],cost[1]);       
    }
};