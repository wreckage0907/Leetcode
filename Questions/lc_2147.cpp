#pragma GCC optimize("Ofast,funroll-loops")
class Solution {
public:
    int numberOfWays(string corridor) {
        int mod = 1000000007;
        vector<int> seats;
        #pragma unroll
        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S') seats.push_back(i);
        }
        if (seats.size() < 2 || seats.size() % 2 == 1) return 0;
        long long res = 1;  
        #pragma unroll
        for (int j = 1; j < seats.size() - 1; j += 2) {
            res = (res * (seats[j + 1] - seats[j])) % mod;
        }
        return static_cast<int>(res);  
    }
};
