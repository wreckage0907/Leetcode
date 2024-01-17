class Solution {
public:
    int subtractProductAndSum(int n,int p=1,int s=0) {
        return n>0?subtractProductAndSum(n/10,p*(n%10),s+(n%10)):p-s;
    }
};