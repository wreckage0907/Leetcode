class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;  
        int result = 0;
        while (i < s.size() && s[i] == ' ') i++;
        
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < s.size() && check(s[i])) {
            int digit = s[i] - '0';
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
            i++;
        }
        return sign * result;
    }
};
