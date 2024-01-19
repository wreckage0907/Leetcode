#pragma GCC optimize('O3','unroll-loops')
int romanToInt(char *s) {
    int sym[26];
    sym['M' - 'A'] = 1000;
    sym['D' - 'A'] = 500;
    sym['C' - 'A'] = 100;
    sym['L' - 'A'] = 50;
    sym['X' - 'A'] = 10;
    sym['V' - 'A'] = 5;
    sym['I' - 'A'] = 1;

    int res = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (i + 1 < strlen(s) && sym[s[i] - 'A'] < sym[s[i + 1] - 'A']) {
            res -= sym[s[i] - 'A'];
        } else {
            res += sym[s[i] - 'A'];
        }
    }
    return res;
}