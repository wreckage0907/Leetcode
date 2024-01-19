class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        string res;
        for(int r=0;r<n;r++){
            int i=2*(n-1);
            for(int j=r;j<s.size();j=j+i){
                res+=s[j];
                if(r>0 && r< n-1 && j+i-2*r <s.size()) res+=s[j+i-2*r];  
            }
        }
        return res;
    }
};