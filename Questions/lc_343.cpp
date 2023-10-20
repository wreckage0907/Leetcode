#pragma GCC optimize("O3")
class Solution {
public:
    int integerBreak(int n) {
        if(n<=3){
            return n-1;
        }
        int m = 1;
        while(n>4){
            m*=3;
            n-=3;
        }
        return m*n;
    }
};