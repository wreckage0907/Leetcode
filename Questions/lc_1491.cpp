#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
#pragma GCC optimize("Ofast")
class Solution {
public:
    double average(std::vector<int>& salary) {
        int maxVal = *std::max_element(salary.begin(), salary.end());
        int minVal = *std::min_element(salary.begin(), salary.end());
        int sum = std::accumulate(salary.begin(), salary.end(), 0);
        
        double average = static_cast<double>(sum - minVal - maxVal) / (salary.size() - 2);
        
        return average;
    }
};