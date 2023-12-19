#pragma GCC optimize('O3')
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(), 0);
        stack<pair<int, int>> stk;  
        for (int i = 0; i < temp.size(); i++) {
            while (!stk.empty() && stk.top().second < temp[i]) {  
                auto tmp = stk.top();
                stk.pop(); 
                int stk_i = tmp.first;
                ans[stk_i] = i - stk_i;
            }
            stk.push({i, temp[i]});  
        }
        return ans;       
    }
};