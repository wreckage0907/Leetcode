#pragma GCC optimize('O3')
class Solution {
public:
    int dfs(string a,unordered_map<char,int>& ch){
        for(int i=0;i<a.size();i++){
            a[i]='0'+ch[a[i]];
        }
        stringstream geek(a);
        int x=0;
        geek >> x;
        return x;
    }
    bool isSumEqual(string f, string s, string t) {
        unordered_map<char, int> charMap;
        for (char ch = 'a'; ch <= 'j'; ++ch) charMap[ch] = ch - 'a';
        return dfs(f,charMap)+dfs(s,charMap)==dfs(t,charMap);
    }
};