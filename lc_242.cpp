class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> counterS;
        std::unordered_map<char, int> counterT;

        for (char c : s)
            counterS[c]++;

        for (char c : t)
            counterT[c]++;

        return counterS == counterT;
    }
};