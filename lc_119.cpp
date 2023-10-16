class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1, 0);
        result[0] = 1;

        for (int i = 1; i <= rowIndex; ++i) {
            long long val = result[i - 1];
            val *= (rowIndex - i + 1);
            val /= i;
            result[i] = static_cast<int>(val);
        }

        return result;
    }
};