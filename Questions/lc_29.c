int divide(int div, int d) {
    return ((long long)div / d > INT_MAX) ? INT_MAX : (div / d);
}