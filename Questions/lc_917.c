#define swap(a,b) { char t = a; a = b; b = t; }

char* reverseOnlyLetters(char* s) {
    int i = 0 , j=strlen(s) - 1;
    while(i < j) {
        if(isalpha(s[i]) && isalpha(s[j])) {  
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if(!isalpha(s[i])) i++; 
        else if(!isalpha(s[j])) j--;
    }
    return s;
}