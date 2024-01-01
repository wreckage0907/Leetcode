#pragma GCC optimize('O3')
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
       int index =0,cnt=0;
       while(index<s.size() && cnt<g.size()){
           if(s[index]>=g[cnt])cnt++;
           index++;
       }
    return cnt;
    }
};



