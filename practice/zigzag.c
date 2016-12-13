#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int len,i;
    char *result;

    if (s == NULL) {
        return NULL;
    }
    len = strlen(s);
    
    result = malloc(sizeof(char *));
    
    for (i = 0; i < (len-numRows); i++) {
        *(result+i) = *(s+i);
    }
    
    return result;
}

int main(int argc, char *argv[]) {

    int i;
    char *ans = convert("",1);

    for(i = 0; i < strlen(ans); i++) {
        printf("%c", ans[i]);
    }
    printf("\n");

    return 0;
}
