#pragma GCC optimize('Ofast')
int reverse(int x) {
    int r=0; 
    while(x){
        if (r>INT_MAX/10 || r<INT_MIN/10) return 0;
        r=r*10+x%10; 
        x=x/10;     
    } 
    return r;  
    }