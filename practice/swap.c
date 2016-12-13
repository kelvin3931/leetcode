#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a = 10;
    int b = 20;

    int *ptr1;
    int *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("a=%d\n", a);
    printf("b=%d\n", b);
    swap(ptr1, ptr2);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    
    return 0;
}

void swap(int *value1, int *value2)
{
    int tmp;
    tmp = *value1;
    *value1 = *value2;
    *value2 = tmp;
        
    return;
}
