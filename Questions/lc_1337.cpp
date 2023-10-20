#pragma GCC optimize("O3")

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> a1;
        for (int i = 0; i < mat.size(); i++) {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            a1.push_back(make_pair(i, sum));
        }
        
        sort(a1.begin(), a1.end(), [](const auto& a, const auto& b) { 
            if (a.second == b.second)
                return a.first < b.first;  
            return a.second < b.second; 
        });
        
        vector<int> res;
        for (int p = 0; p < k; p++) {
            res.push_back(a1[p].first);
        }
        return res;
    }
};
