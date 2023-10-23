#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    string sortVowels(string s) {
        string k=s;
        string c;
        vector<int> idx;
        for(int i=0;i<s.size();i++){
            if (strchr("AEIOUaeiou", s[i]) != nullptr){
                c.push_back(s[i]);
                idx.push_back(i);
            }
        }
        sort(c.begin(),c.end());
        for(int i=0;i<idx.size();i++){
            k[idx[i]]=c[i];
        }
        return k; 
    }
};