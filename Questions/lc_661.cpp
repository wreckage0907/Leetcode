#pragma GCC optimize('O3')
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row=img.size(),col=img[0].size();
        vector<vector<int>> res(row, vector<int>(col, 0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int total=0,cnt=0;
                for(int r=i-1;r<i+2;r++){
                    for(int c=j-1;c<j+2;c++){
                        if(r<0 || r==row || c<0 || c==col) continue;
                        total+=img[r][c];
                        cnt++;
                    }
                }
                res[i][j]=static_cast<int>(floor(total/cnt));
            }
        }
        return res;
    }
};