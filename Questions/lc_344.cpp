#pragma GCC optimze('O3')
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
            while (left < right){
                swap(s[right], s[left]);
                right--;
                left++;
            }
    }
};
