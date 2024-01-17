#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    int strStr(const std::string& haystack, const std::string& needle) {
    if (needle.empty()) {
        return 0;  
    }
    if (needle.size()>haystack.size()) return -1;
    for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
        if (haystack.substr(i, needle.length()) == needle) {
            return i;
        }
    }
    return -1; 
}
};