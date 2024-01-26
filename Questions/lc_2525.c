char* categorizeBox(int l, int w, int h, int m) {
    bool bulky=(l>=10000 ||w>=10000 ||h>=10000 || (long long)(l)*w*h>=1e9);
    bool heavy=(m>=100);
    if(bulky && heavy) return "Both"; 
    else if(!bulky && !heavy) return "Neither";
    else return bulky?"Bulky":"Heavy";
}