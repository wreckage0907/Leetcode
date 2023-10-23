#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    string finalString(string s) {
        string res="";
        for(char c:s){
            if(c=='i') reverse(res.begin(),res.end());
            else res+=c;
        }
        return res;
    }
};