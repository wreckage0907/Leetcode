#define MAX(a,b) ((a>b)?a:b)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int mp = 0;
        
        while (r < prices.size()) {
            
            if(prices[l]<prices[r]){
                mp=MAX(mp,prices[r]-prices[l]);
            }
            else l=r;
            r++;
        }
        
        return mp;
    }
};