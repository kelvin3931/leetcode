#include <stdio.h>
#include <stdlib.h>


int main() {
    int a=0;

    int b,b1,b2,b3,b4,b5,b6;

    char c,d;

    long e,f;

    double i,j;

    long long g,h;

    char str[]="hello";

    int array[] = {1,2,3,4,5,6,7,8,9,0};

    b = sizeof(a);
    b1 = sizeof(c);
    b2 = sizeof(e);
    b3 = sizeof(g);
    b4 = sizeof(j);
    b5 = sizeof(str);

    int array_size = sizeof(array);

    printf("%d\n",b);
    printf("%d\n",b1);
    printf("%d\n",b2);
    printf("%d\n",b3);
    printf("%d\n",b4);

    printf("%d\n",b5);
 
    printf("%d\n", array_size);
    //printf("hello");
    return 0;
}
