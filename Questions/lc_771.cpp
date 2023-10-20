class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
    return std::accumulate(jewels.begin(), jewels.end(), 0, [&stones](int count, char jewel) {
        return count + std::count(stones.begin(), stones.end(), jewel);
    });
}
};