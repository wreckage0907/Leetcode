class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        return find_if(words.begin(), words.end(), [](const string& x) { return x == string(x.rbegin(), x.rend()); }) != words.end() ? *find_if(words.begin(), words.end(), [](const string& x) { return x == string(x.rbegin(), x.rend()); }) : "";
    }
};