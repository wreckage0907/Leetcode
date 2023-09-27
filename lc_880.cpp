#pragma GCC optimize("O3")
class Solution {
public:
    std::string decodeAtIndex(std::string s, int m) {
        long length = 0;

        for (char i : s) {
            if (isdigit(i)) {
                length *= (i - '0');
            } else {
                length += 1;
            }
        }

        for (int i = s.length() - 1; i >= 0; --i) {
            m %= length;

            if (m == 0 && isalpha(s[i])) {
                return std::string(1, s[i]);
            }

            if (isdigit(s[i])) {
                length /= (s[i] - '0');
            } else {
                length -= 1;
            }
        }

        return "";  
    }
};