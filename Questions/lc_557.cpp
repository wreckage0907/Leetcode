class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream ss(s);
        std::vector<std::string> words;
        std::string token;
        while (ss >> token) {
            words.push_back(token);
        }
        std::string rev;
        for (auto& word : words) {
            std::reverse(word.begin(), word.end());
            rev += word + " ";
        }
        rev.pop_back();  

        return rev;
    }
};