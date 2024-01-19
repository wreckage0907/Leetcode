#pragma GCC optimize('O3','unroll-loops')
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string, int>> sym = {{"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};

        string res;
        for (auto [sy, val] : sym) {
            if (num / val) {
                int count = num / val;
                for(int i=0;i<count;i++) res+=sy;
                num %= val;
            }
        }
        return res;
    }
};