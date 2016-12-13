#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int nRows) {
    int row;
    unsigned int index;
    if ((NULL == s) | (nRows < 1))
    {
        return NULL;
    }

    const size_t len = strlen(s);
    char* output = (char*) malloc(sizeof(char) * ( len + 1));
    char* head = output;
    output[len] = '\0';
    if ( 1 == nRows )
    {
        return strcpy(output, s);
    }
    for (row = 0; row < nRows; ++row)
    {
        for (index = row; index < len; index += 2*nRows-2)
        {
            *output++ = s[index];
            if ( (row>0)&(row<nRows-1) & ((index+2*nRows - 2 - 2*row) < len))
            {
                *output++ = s[index+2*nRows - 2 - 2*row];
            }
        }
    }
    return head;
}

int main(int argc, char *argv[]) {

    char *result;
    int i;
    char returnSize[]="PAHNAPLSIIGYIR";
    result = convert(returnSize, 1);

    int len;
    len = strlen(result);
    for ( i = 0 ; i < len; i++) {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}
