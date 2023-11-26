class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(); 
        int m = matrix[0].size();

        int ans = INT_MIN;
        #pragma unroll
        for(int j = 0; j < m; j++) 
        {
            for(int i = 1; i < n; i++) 
            {
                if(matrix[i][j] == 1)
                    matrix[i][j] += matrix[i-1][j];
            }
        }

        for(int i = 0; i < n; i++) 
        {
            sort(matrix[i].begin(),matrix[i].end(),greater<int>());
            for(int j = 0; j < m; j++) 
            {
               int length = matrix[i][j];
               int breadth = j + 1;
               ans = max( ans, length * breadth);
            }
        }
        return ans;
    }
};