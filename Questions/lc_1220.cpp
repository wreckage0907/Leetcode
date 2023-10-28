#pragma GCC optimize('Ofast,unroll-loops')
class Solution {
public:
  int countVowelPermutation(int n) {
    vector<vector<long long>> dp;
    dp = {{},{1,1,1,1,1}};
    int a=0,e=1,i=2,o=3,u=4;
    const int mod=1000000007;
    
    for(int j=2;j<n+1;j++){
      dp.push_back({0,0,0,0,0});

      // Take modulo earlier to avoid overflow
      dp[j][a] = (dp[j-1][e] + dp[j-1][i] + dp[j-1][u]) % mod;  
      dp[j][e] = (dp[j-1][a] + dp[j-1][i]) % mod;
      dp[j][i] = (dp[j-1][e] + dp[j-1][o]) % mod;
      dp[j][o] = dp[j-1][i];
      dp[j][u] = (dp[j-1][i] + dp[j-1][o]) % mod; 
    }

    long long result = 0;
    for(auto x: dp[n]) {
      result = (result + x) % mod;
    }
    return result;
  }
};