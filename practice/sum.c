#include <stdio.h>

int sum(int* a,int* b);

int main() {

    int total;
    int c=10;
    int d=20;

    int *a = &c;
    int *b = &d;

    printf("before:a=%d\n", *a);
    printf("before:b=%d\n", *b);
    total = sum(a, b);
    printf("after:a=%d\n", *a);
    printf("after:b=%d\n", *b);
    printf("total:%d\n", total);
    return 0;
}

int sum(int* a,int* b) {

    int e=30;
    int f=40;

    int* ptr1 = &e;
    int* ptr2 = &f;

    a = ptr1;
    b = ptr2;

    printf("a=%d\n", *a);
    printf("b=%d\n", *b);
    return *a + *b;
}
