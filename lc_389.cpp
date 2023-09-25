#pragma GCC optimize("Ofast,funroll-loops")
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }
        for (char c : t) {
            if (charCount[c] > 0) {
                charCount[c]--;
            } else {
                return c;
            }
        }
        return '\0';
    }
};





