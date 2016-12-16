#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  Return an array of size *returnSize.
 *  Note: The returned array must be malloced, assume caller calls free().
 **/

char *getBin(int num)
{
    int i = 1;
    int value, result;
    char *ptr;
    int len;
    char tmp;

    ptr = (char *)malloc(sizeof(char));

    result = num & 1;
    sprintf(ptr, "%d", result);

    while (num > 1) {
        value = num >> 1;
        result = value & 1;
        
        sprintf(ptr+i, "%d", result);

        num = num >> 1;
        i++;
    }

    //string revert
    len = strlen(ptr);
    for (i = 0; i < (len/2); i++) {
        tmp = *(ptr+i);
        *(ptr+i) = *(ptr+len-i-1);
        *(ptr+len-i-1) = tmp;
    }

    return ptr;
}

int *countBits(int num, int *returnSize)
{
    int index,j;
    char *binary;
    char count;


    binary = (char *)malloc(sizeof(char));

    returnSize[0] = 0;

    for( index = 1; index <= num ; index++) {
        binary = getBin(index);
        count = 0;
        for ( j = 0; j < strlen(binary); j++) {
            if (binary[j] == '1') {
                count++;
            }
        }
        returnSize[index] = count;
    }

    return returnSize;
}

int main(int argc, char *argv[])
{
    int array[100];
    int i;
    //printf("%s\n", getBin(0));
    countBits(8, array);

    for (i=0;i<9;i++) {
        printf("%d", array[i]);
    }
    printf("\n");

    return 0;
}
