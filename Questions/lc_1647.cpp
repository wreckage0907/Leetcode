#pragma GCC optimize("O3")
class Solution {
public:
    int minDeletions(std::string s) {
        int del = 0;
        int freq[26] = {0}; 

        for (char c : s) {
            freq[c - 'a']++;
        }

        std::set<int> uniq;
        for (int i : freq) {
            while (i > 0 && !uniq.insert(i).second) { 
                del++;
                i--; 
            }
        }
        return del;
    }
};