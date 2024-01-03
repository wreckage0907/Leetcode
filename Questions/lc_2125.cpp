#pragma GCC optimize('O3')
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = count(bank[0].begin(),bank[0].end(),'1');
        int res = 0;
        for (int i = 1; i < bank.size(); i++) {
            int curr =  count(bank[i].begin(),bank[i].end(),'1');  
            res += (prev * curr);
            if (curr) prev = curr;
        }
        return res;
    }
};
