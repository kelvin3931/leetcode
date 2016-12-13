char* reverseString(char* s) {
    int len = strlen(s);
    int begin=0;

    char temp;

    while(begin < (len/2)) {
        temp = s[len-begin-1];
        s[len-begin-1] = s[begin];
        s[begin] = temp;
        begin++;
    }

    return s;
}
