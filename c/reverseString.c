#include <stdio.h>
#include <string.h>

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

int main(int argc, char *argv[]) {

    int i;
    char input[] = "abcde";
    int len;
    char *output;

    len = strlen(input);

    output = reverseString(input);

    for ( i = 0; i < len; i++) {
        printf("%c", output[i]);
    }

    return 0;
}
