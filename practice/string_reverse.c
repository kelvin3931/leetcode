#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char string[]= "abcde";

    char *stringB;
    char *stringC;
    char temp;
    int i;
    int len;

    for (i = 0 ; i < strlen(string); i++) { 
        printf ("%c", string[i]);
    }
    printf("\n");

    stringB = string;
    stringC = stringB + strlen(string) - 1;

    while ( stringC > stringB ) {
       temp = *stringB;
       *stringB = *stringC;
       *stringC = temp;
       stringB++; 
       stringC--;
    }

    for (i = 0 ; i < strlen(string); i++) { 
        printf ("%c", string[i]);
    }
    
    

    return 0;
}
