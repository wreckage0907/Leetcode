class Solution {
public:
    int minimumOneBitOperations(int n) {
        return minimumOneBitOperationsHelper(0, n);
    }
    int minimumOneBitOperationsHelper(int r, int n) {
        return n ? minimumOneBitOperationsHelper(r ^ n, n / 2): r;
    }
};
