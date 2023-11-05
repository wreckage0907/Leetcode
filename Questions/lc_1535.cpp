#pragma GCC optimize('Ofast')
class Solution {
public:
    int getWinner(std::vector<int>& arr, int k) {
        if (k == 1) {
            return std::max(arr[0], arr[1]);
        }
        if (k >= arr.size()) {
            return *std::max_element(arr.begin(), arr.end());
        }

        int current_winner = arr[0];
        int consecutive_wins = 0;

        for (int i = 1; i < arr.size(); ++i) {
            if (current_winner > arr[i]) {
                consecutive_wins++;
            } else {
                current_winner = arr[i];
                consecutive_wins = 1;
            }

            if (consecutive_wins == k) return current_winner;
            
        }
        return current_winner;
    }
};