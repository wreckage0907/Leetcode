#pragma GCC optimize("Ofast,funroll-loops")
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> result;
        
        for (auto i = digits.rbegin(); i != digits.rend(); i++) {
            int sum = *i + carry;
            carry = sum / 10;
            result.push_back(sum % 10);
        }
        
        if (carry > 0) {
            result.push_back(carry);
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
