#include <stdio.h>
#include <stdlib.h>

typedef struct str {
    int arr[5];
    char ch[3];
}sp;


int main() {

    sp test = {{1,2,3,4,5}, {'d','e','f'}};    

    char *p1;

    int size = sizeof(test.arr[5]);

    p1 = (char*)malloc(10);

    size = sizeof((char*)malloc(10));

    printf ("%d", size);
    printf ("%c", test.ch[2]);
    return 0;
}
