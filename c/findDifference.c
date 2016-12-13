#include <stdio.h>
#include <string.h>

char findTheDifference(char* s, char* t) {
    char diffChar;
    int i;

    int len;
    len = strlen(t);

    diffChar = t[len - 1];
    for ( i = 0; i < (len - 1); i++) {
        diffChar ^= s[i];
        diffChar ^= t[i];
    }

    return diffChar;
}

int main(int argc, char *argv[]) {
    
    char str1[] = "abcd";
    char str2[] = "abcde";

    printf("%c\n", findTheDifference(str1, str2));

    return 0;
}
