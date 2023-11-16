class Solution {
public:
    int search(vector<int>& n, int t) {
        int ind = lower_bound(n.begin(),n.end() , t) - n.begin();
        if(ind < n.size() && n[ind]==t ) return ind;
        return -1;
    }
};