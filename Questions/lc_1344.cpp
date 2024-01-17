class Solution {
public:
    double angleClock(int h, int m) {
        return abs((5.5*m-30*h))>180 ? 360-abs((5.5*m-30*h)): abs((5.5*m-30*h));
    }
};