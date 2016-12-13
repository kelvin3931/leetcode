#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(int n, int* returnSize) {
    char **str;
    int i;
    int m=16;

    str =(char **)malloc(n*sizeof(char *));
    for(i=0;i<n;i++ )
    {
        str[i]=(char *)malloc( m*sizeof(char) );
    }

    for( i = 0; i < n; i++) {
        if (((i+1) % 15) == 0) {
            str[i] = "FizzBuzz";
        }
        else if (((i+1) % 3) == 0) {
            str[i] = "Fizz";
        }
        else if(((i+1) % 5) == 0) {
            str[i] = "Buzz";
        }
        else {
            sprintf(str[i],"%d", i + 1);
        }
    }

    *returnSize=n;
    return str;
}

int main(int argc, char *argv[]) {

    char **result;
    int i;
    int returnSize[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    result = fizzBuzz(15, returnSize);

    for ( i = 0 ; i < 15; i++) {
        printf("%s\n", *(result+i));
    }

    return 0;
}
