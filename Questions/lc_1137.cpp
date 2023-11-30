class Solution {
public:
    int tribonacci(int n) {
        std::unordered_map<int, int> memo;
        return tribob(n, memo);
    }
    int tribob(int n, std::unordered_map<int, int>& memo) {
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }
        if (n == 0) {
            return 0;
        }
        if (n == 1 || n==2) {
            return 1;
        }
        memo[n] = tribob(n - 1, memo) + tribob(n - 2, memo)+ tribob(n - 3, memo) ;
        return memo[n];
    }
};
