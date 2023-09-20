#pragma GCC optimize("Ofast,funroll-loops")

class Solution {
public:
    int minOperations(std::vector<int>& nums, int x) {
        int count = 0;
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];
        }

        if (sum < x)
            return -1;

        if (sum == x)
            return n;

        int maxLen = -1;
        int currSum = 0;
        int left = 0;
        int right = 0;

        while (right < n) {
            currSum += nums[right];

            while (currSum > sum - x && left <= right) {
                currSum -= nums[left];
                left++;
            }

            if (currSum == sum - x) {
                maxLen = std::max(maxLen, right - left + 1);
            }

            right++;
        }

        return (maxLen == -1) ? -1 : n - maxLen;
    }
};
