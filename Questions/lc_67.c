char* addBinary(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    int maxSize = (len_a > len_b) ? len_a + 2 : len_b + 2;  
    char* result = (char*)malloc(maxSize);
    result[0] = '0'; 
    result[maxSize - 1] = '\0';

    int carry = 0;
    int i = len_a - 1, j = len_b - 1, k = maxSize - 2;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = (i >= 0 ? a[i--] - '0' : 0) + (j >= 0 ? b[j--] - '0' : 0) + carry;
        carry = sum / 2;
        result[k--] = (sum % 2) + '0';
    }
    if (result[0] == '0') memmove(result, result + 1, maxSize - 1);
    

    return result;
}