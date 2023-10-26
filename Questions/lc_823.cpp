#pragma GCC optimize('O3')
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<long> dp(arr.size(), 1); 
        unordered_map<int, long> nums;   
        const int mod = 1000000007;
        
        for (int i = 0; i < arr.size(); i++) {
            nums[arr[i]] = 1;
            for (int j = 0; j < i; j++) {
                if (arr[i] % arr[j] == 0) {
                    int factor = arr[i] / arr[j];
                    if (nums.count(factor)) {
                        nums[arr[i]] += (nums[arr[j]] * nums[factor]) % mod;
                    }
                }
            }
            nums[arr[i]] %= mod;
        }

        long total = 0;
        for (int i = 0; i < arr.size(); i++) {
            total = (total + nums[arr[i]]) % mod;
        }

        return static_cast<int>(total);
    }
};
