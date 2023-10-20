class Solution {
public:
    int climbStairs(int n) {
        if (n==0 || n==1) return 1;
        int prev=1,curr=1,total=0;
        for(int i=2;i<n+1;i++){
            total=prev+curr;
            prev=curr;
            curr=total;
        }
        return total;       
    }
};