#pragma GCC optimize("Ofast")

class Solution {
public:
    bool isPalindrome(int num) {
        long long  reversedNum = 0;
        int originalNum=num;
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
        return reversedNum == originalNum;
    }
};