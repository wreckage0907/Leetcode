class Solution {
private:
    stack<char> sss(string s) {
        stack<char> res;
        for (char c : s) {
            if (c == '#' && !res.empty()) {
                res.pop();
            } else if (c != '#') {
                res.push(c);
            }
        }
        return res;
    }

public:
    bool backspaceCompare(string s, string t) {
        return sss(s) == sss(t);
    }
};
