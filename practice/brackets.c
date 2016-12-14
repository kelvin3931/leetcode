#include <stdio.h>
#include <string.h>

int findIndex(char *str) {
    int i;
    int len;
    int result = 0;
    int bias = 0;
    
    len = strlen(str);

    for (i = 0; i < ((len/2) + 1); i++) {

        if (str[i] == '(') {
            bias--;
        }

        if (str[len - i - 1] == ')') {
            bias++;
        }
    }

    result = (len/2) + bias;

    printf("result:%d\n", result);
    
    return result;
}

int main(int argc, char *argv[]) {
    
    char input[] = "((())))()";
    //char input[] = "(()))()";
    findIndex(input);
    return 0;
}
