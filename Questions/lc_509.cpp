#include <unordered_map>

class Solution {
public:
    int fib(int n) {
        std::unordered_map<int, int> memo;
        return fibob(n, memo);
    }

private:
    int fibob(int n, std::unordered_map<int, int>& memo) {
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        memo[n] = fibob(n - 1, memo) + fibob(n - 2, memo);
        return memo[n];
    }
};
