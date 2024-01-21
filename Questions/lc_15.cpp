class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;

        for (int i = 0; i < arr.size(); i++) {
            if (i > 0 && arr[i] == arr[i - 1]) continue;

            int l = i + 1, r = arr.size() - 1;

            while (l < r) {
                if (arr[i] + arr[l] + arr[r] == 0) {
                    res.push_back({arr[i], arr[l], arr[r]});
                    while (l < r && arr[l] == arr[l + 1]) l++;
                    while (l < r && arr[r] == arr[r - 1]) r--;
                    l++;
                    r--;}
                 else if (arr[i] + arr[l] + arr[r] > 0) r--;
                 else l++;
                
            }
        }

        return res;
    }
};
