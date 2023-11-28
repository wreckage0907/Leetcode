#pragma GCC optimize('O3')
class Solution {
public:
    int knightDialer(int n) {
        if (n==1) return 10;
        int mod = 1000000007;
        vector<vector<int>>jumps={{4,6},{6,8},{7,9},{4,8},{3,9,0},{},{1,7,0},{2,6},{1,3},{2,4}};
        vector<int> dp;
        dp.assign(10,1);
        #pragma unroll
        for(int i=0;i<n-1;i++){
            vector<int> next_dp;
            next_dp.assign(10,0);
            for(int n=0;n<10;n++){
                for(int j:jumps[n]){
                    next_dp[j]=(next_dp[j]+dp[n])%mod;
                }
            }
            dp=next_dp;
        }
        int res = 0;
        for (int num : dp) {
            res = (res + num) % mod;
        }
        return res;


    }
};