
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int states = minutesToTest / minutesToDie + 1;
        int pigs = 0;
        while (std::pow(states, pigs) < buckets) {
            pigs++;
        }
        return pigs;
    }
};