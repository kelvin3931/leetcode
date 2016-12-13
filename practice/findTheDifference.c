#include <stdio.h>
#include <string.h>

char *bublesort(char *s) {
    char temp;
    int i,j;
    int len;

    len = strlen(s);

    for( i = 0 ; i < len-1; i++ ){
        for( j = 1 ; j < len; j++ ){
            if((int)s[j-1]>(int)s[j]){
                temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }

    return s;
}

char findTheDifference(char* s, char* t) {
    char diffChar;
    int i;

    bublesort(s);
    bublesort(t);

    i = 0;
    while(t[i] != '\0') {
        if (t[i] != s[i]) {
            return t[i];
        }
        i++;
    }

    return diffChar;
}

int main(int argc, char *argv[]) {

    char s[]="ae";
    char t[]="aea";

    printf("%c\n", findTheDifference(s,t));

    return 0;
}
