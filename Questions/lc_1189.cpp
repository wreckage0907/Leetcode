class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        mp['b'] = 0;
        mp['a'] = 0;
        mp['l'] = 0;
        mp['o'] = 0;
        mp['n'] = 0;

        for (char c : text) {
            if (mp.find(c) != mp.end()) {
                mp[c]++;
            }
        }

        int minCount = INT_MAX;
        minCount = min(minCount, mp['b']);
        minCount = min(minCount, mp['a']);
        minCount = min(minCount, mp['l'] / 2);  
        minCount = min(minCount, mp['o'] / 2);  
        minCount = min(minCount, mp['n']);

        return minCount;
    }
};
