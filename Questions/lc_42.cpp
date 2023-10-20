#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty())
            return 0;

        int l = 0, r = height.size() - 1;
        int lmax = 0, rmax = 0;
        int res = 0;

        while (l <= r) {
            if (lmax < rmax) {
                res += max(0, lmax - height[l]);
                lmax = max(lmax, height[l]);
                l++;
            } else {
                res += max(0, rmax - height[r]);
                rmax = max(rmax, height[r]);
                r--;
            }
        }

        return res;
    }
};