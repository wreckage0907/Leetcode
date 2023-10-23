class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        stringstream ss;
        ss << std::hex << static_cast<unsigned int>(num);
        return ss.str();
    }
};