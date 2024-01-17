#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    string capitalizeTitle(string title) {
        istringstream iss(title);
        string res = "", s;
        while (iss >> s) {
            if (s.size() > 2) {
                s[0] = toupper(s[0]);
                for (int i = 1; i < s.size(); i++) {
                    s[i] = tolower(s[i]);
                }
            } else {
                for (int i = 0; i < s.size(); i++) {
                    s[i] = tolower(s[i]);
                }
            }
            res += s;
            if (iss) res += " ";
            
        }
        return res.substr(0,title.size());
    }
};