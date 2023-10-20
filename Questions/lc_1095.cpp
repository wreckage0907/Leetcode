class Solution {
public:
    int findInMountainArray(int target, MountainArray &A) {
        int n = A.length();
        int l, r, m;
        l = 0;
        r = n - 1;
        int peak = 0;
        while (l < r) {
            m = l + (r - l) / 2;
            if (A.get(m) < A.get(m + 1)) {
                l = peak = m + 1;
            } else {
                r = m;
            }
        }
        l = 0;
        r = peak;

        while (l <= r) {
            m = l + (r - l) / 2;
            int midValue = A.get(m);

            if (midValue < target) {
                l = m + 1;
            } else if (midValue > target) {
                r = m - 1;
            } else {
                return m;
            }
        }

        l = peak;
        r = n - 1;

        while (l <= r) {
            m = l + (r - l) / 2;
            int midValue = A.get(m);

            if (midValue > target) {
                l = m + 1;
            } else if (midValue < target) {
                r = m - 1;
            } else {
                return m;
            }
        }

        return -1;
    }
};
