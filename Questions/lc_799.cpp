#pragma GCC optimize("O3")


class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> a = { static_cast<double>(poured) };

        for (int i = 1; i <= query_row; i++) {
            vector<double> b(i + 1, 0.0);
            for (int j = 0; j < i; j++) {
                double extra = (a[j] - 1.0) / 2.0;
                if (extra > 0) {
                    b[j] += extra;
                    b[j + 1] += extra;
                }
            }
            a = b;
        }
        return min(1.0, a[query_glass]);
    }
};
