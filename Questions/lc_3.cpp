#pragma GCC optimize('Ofast')
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1); 
        int len=0;

        int r=0,l=0;
        while(r<s.size())
        {
             if(m[s[r]]!=-1 and l<m[s[r]]+1)
            {
                l=m[s[r]]+1;         
            }
            m[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
        
    }
};