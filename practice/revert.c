#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s) {
    int i;
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

int main() {
    int i, strLen;
    char *str;
    char input[] = "abcdefg";
    str = reverseString(input);

    strLen = strlen(str);
    for (i = 0; i < strLen; i++) {
        printf("%c", *(str+i));
    }
    printf("\n");
    return 0;
}
